#include "shell.h"
/**
 * mystrtok - 
 * @str: 
 * @delim:
 */
char *mystrtok(char *str, char *delim)
{
    char *last_ptr = NULL;  
    static int flag = 0;
    size_t i, j;

    if (str != NULL) 
	{ 
        aux_ptr = str; 
    }

    if (delim == NULL) 
	{
        return NULL;
    }

    if (flag == 1) 
	{
        return NULL;
    }

    last_ptr = aux_ptr;

    for (i = 0; i <= strlen(aux_ptr); i++)
    {
        for (j = 0; j < strlen(delim); j++) 
		{
            if (aux_ptr[i] == '\0') 
			{
                
                flag = 1;
                return last_ptr;
            }            
            if ((aux_ptr[i] == delim[j])) 
			{
                aux_ptr[i] = '\0';
                aux_ptr += i+1;
                return last_ptr;
            }
        }
    }
    return NULL;
}
/*try1*/