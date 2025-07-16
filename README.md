# C Boilerplate
---
(Work In Progress)

C Boilerplate project created from other C projects of mine.

#### Usage

```
// Build executables
> make
Makelog bin/obj/main.o           src/main.c               compiling
Makelog bin/obj/main.o           src/main.c               compiled object file bin/obj/main.o
Makelog bin/boilerplate          bin/obj/main.o           built executable bin/boilerplate

// Run executables
> make run
GCC Version 12.2.0
__STDC_VERSION__ (C17)
Hello, World!

// Format code
> make format
Formatting [1/1] src/main.c
``` 

#### Requirements

GNU C Compiler ([GCC Make](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html))
```
> gcc --version
gcc (Debian 12.2.0-14+deb12u1) 12.2.0
```



#### Makefile Expanded
The `make` utility and `Makefile` automate the compilation process of C programs.

Makefile Rule format..
```
target: dependencies
    commands (must be indented with a tab)
```

When a target is invoked, it will check the timestamp of the target's dependencies to determine if the target itself needs to be re-built. 

##### Compiling a C Program

To compile a `.c` file, one can use `gcc <test>.c -o <executable>`. If there are no errors, the executable will be created in the path provided to the `gcc` tool. It can then be executed like `./<executable>`

The actual compilation process consists of pre-processing, compilation, a assembly step and finally linking. The pre-processing stage involves the removal of comments, the expansion of macros and included files and conditional compilation. The output at this stage is stored in `*.i` files.

The next stage will take the pre-processed source code `*.i` files and compile them into `*.s` assembly code for the processor. Then assembler will convert them into machine code object files.

Finally the linker will link the object code to the library code to create an executable.

##### Other Makefile Notes

Use `.PHONY` to create a target that is not representative of a actual file, but just a set of commands that should be executed.

```
.PHONY: clean
clean:
    rm -rf ./bin
```
- [Compiling a C Program: Behind the Scenes](https://www.geeksforgeeks.org/c/compiling-a-c-program-behind-the-scenes/)
