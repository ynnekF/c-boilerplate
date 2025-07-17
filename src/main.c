#include <dirent.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "log.h"

__attribute__((constructor)) static void
preprocess(void) {
        info("GCC Version %s", __VERSION__);
        switch (__STDC_VERSION__) {
                case 199409L: info("__STDC_VERSION__ (C94)"); break;
                case 199901L: info("__STDC_VERSION__ (C99)"); break;
                case 201112L: info("__STDC_VERSION__ (C11)"); break;
                case 201710L: info("__STDC_VERSION__ (C17)"); break;
                default:
                        info("__STDC_VERSION__ ");
                        __STDC_VERSION__ > 201710L ? info(" (std=c++2a)") : info(" Unknown standard");
        }
}

int
main(int argc, char const** argv) {
        info("Hello, World!");

        return EXIT_SUCCESS;
}