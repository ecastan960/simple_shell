# Simple Shell Project

![](https://uspto.report/TM/88044926/mark)

## BACKGROUND

This project is an application of the C programming knowledge that Holberton School cohort 13 students have learned since starting the program on September 2020. So, this repository it's about create our own simple shell.

## SIMPLE SHELL

It's a project of a basic command line interpreter that takes input to executes commands.

## HOW TO USE THIS PROGRAM

- Clone the repo below:

> https://github.com/ecastan960/simple_shell.git

- Compile with gcc

> gcc -Wall -Werror -wextra -pedantic -o hsh

- Execute

> ./hsh

### ENVIROMENT

Simple shell was built and tasted in the Ubuntu 14.04 LTS via Vagrant in VirtualBox and compiled with GCC version 4.8.4

### FUNCTIONS

> _exec.c : void _exec(char *com, char **command)
Receives the command and the arguments to execute the command using the call EXECVE

> _getenv.c : char *_getenv(const char *name, char **env)
Gets the enviromental variables. recieves a particular variable (PATH for example) and all 
the enviromental variables

> _input.c : char **_input(void)
Read the user input from the terminal and divides the string. returns a double pointer
with the strings of the commands and the arguments.

> _path.c : char **_path(void)
Obtains the string from PATH and divides in strings for each folder

> append_str.c : char *append_str(const char *str1, const char *str2)
Adds a string at the end of another string.

> compar_str.c : int compar_str(const char *str1, const char *str2, size_t size)
Compares if two strings are the same.

> handle_C.c : void handle_C(int __attribute__((unused)) a)
executes and action when control+c is pressed

> prompt.c : void prompt(void)
prompt in terminal

> str_size.c : size_t str_size(const char *str1)
returns the size of a string

### EXAMPLES

> Input:
>
> [JBalbin_EZ_Shell]$/bin/ls
> 
> Output:
>
> AUTHORS _input.c adv_functions file.error  man_1_simple_shell shellV1.c tests
> _exec.c _print.c compar_str.c  hsh shell.h str_size.c         _getenv.c file
> 
