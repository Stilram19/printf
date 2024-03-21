# 42_PRINTF

# 42_PRINTF

## About

This project is about reimplementing the famous printf function in c. Here is the link to the [subject](https://cdn.intra.42.fr/pdf/pdf/126098/en.subject.pdf)

## What I learned from this project:

During the development of this project, I've learned several important concepts including:

- **Core concepts**: Stack frame(call stack), Variadic functions, opaque types                            
- **Makefile**: using Makefile to automate the compilation process ,archive creation and dependencies management.
- **Git**: Using git to commit and push to github or the 42-intra vogsphere
- **Documentation**: Practiced writing clear and informative documentation, such as this README.md file, to aid users and contributors.
- **Minimalist mindset**: I started developing this mentality, since we have to code everything from scratch,
and we're only allowed to use write as external function.

# my_42_project

![](/images/my_project.png)

## Installation and Usage

To use my ft_printf function

1. Clone the repository to your local machine:

   ```bash
   git clone git@github.com:Stilram19/printf.git
   ```

2. Navigate to the repository's directory:

    ```bash
    cd printf
    ```

3. Compile the source code to create the static library:

    ```bash
    make && make clean
    ```
make will compile all the source files used in printf's implementation
make clean will delete all unnececessary object files, and will only keep libftprintf.a (the archive containing the object files).

4. Include the "ft_printf.h" header file into your project's source code (ft_printf.h has all the prototypes of the functions contributing in the implementation of ft_printf):

    ```c
    # include "/path/to/ft_printf.h"
    ```

replace the /path/to with the path of the ft_printf.h file.

5. Link the library during compilation:

```bash
gcc -o my_program my_program.c -L/path/to/libftprintf -lftprintf
```
replace /path/to/libftprintf with the path to libftprintf.a,
and my_program with your program name.

## Concepts you cannot do without (for students):

- [stack frame](https://en.wikipedia.org/wiki/Call_stack)
- [pointers](https://en.wikipedia.org/wiki/Pointer_(computer_programming))  
- [Endianness](https://en.wikipedia.org/wiki/Endianness)  
- [Pointer arithmetic](https://www.geeksforgeeks.org/pointer-arithmetics-in-c-with-examples/)  
- [two's complement](https://en.wikipedia.org/wiki/Two%27s_complement)    
- [integer promotion](https://www.geeksforgeeks.org/integer-promotions-in-c/)
- [Variadic functions](https://www.geeksforgeeks.org/variadic-functions-in-c/)
- [opaque types](https://en.wikipedia.org/wiki/Opaque_data_type)
- [variadic variables in stack](https://stackoverflow.com/questions/63056235/how-are-variadic-variables-represented-on-the-stack)
