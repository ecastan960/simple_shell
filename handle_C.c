#include "shell.h"
/**
 * handle_C - handles action when control+c its used
 * @a: unused variable
 */


void handle_C(int __attribute__((unused)) a)
{
	write(1, "\n", 1);
	prompt();
}
