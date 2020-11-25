#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include <limits.h>
#include <sys/wait.h>
extern char **environ;

void prompt(void);
size_t str_size(const char *str1);
int compar_str(const char *str1, const char *str2, size_t size);
char *_getenv(const char *name, char **env);
char *append_str(const char *str1, const char *str2);
char **_path(void);
void _print(char *strp);
char **_input(void);
void _exec(char *com, char **command);

/*ADV*/
static char *aux_ptr = NULL;
#define SIZE_OF_STRING 256 
#define SIZE_OF_DELIMITER 3

#endif
