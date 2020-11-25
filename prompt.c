#include "shell.h"

/**
 * prompt - terminal prompt of shell
 */

void prompt(void)
{
	char *prompt = "[JBalbin_EZ_Shell]$";
	int i = 0;

	while (prompt[i] != '\0')
	{
		write(1, &prompt[i], 1);
		i++;
	}
}
