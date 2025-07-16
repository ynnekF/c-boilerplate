#include <dirent.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

__attribute__((constructor)) static void preprocess(void) {
        printf("GCC Version %s\n", __VERSION__);
        switch (__STDC_VERSION__) {
                case 199409L: printf("__STDC_VERSION__ (C94)\n"); break;
                case 199901L: printf("__STDC_VERSION__ (C99)\n"); break;
                case 201112L: printf("__STDC_VERSION__ (C11)\n"); break;
                case 201710L: printf("__STDC_VERSION__ (C17)\n"); break;
                default:
                        printf("__STDC_VERSION__ ");
                        __STDC_VERSION__ > 201710L ? printf(" (std=c++2a)") : printf(" Unknown standard");
        }
}

int main(int argc, char const** argv) {
        printf("Hello, World!\n");

        return EXIT_SUCCESS;
}