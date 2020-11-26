char *my_fgets(char str[], int bytes, FILE *fp) 
{
    int c, i = 0;

    if (bytes <= 0)
    {
        return str;
    }

    while (i < bytes - 1 && ((c = getc(fp)) != EOF))
    {
            my_string[i++] = c;
            if (c == '\n')
            break;
    }
    str[i] = '\0'; 

    if (i > 0) 
    {
        return str;
    } 
    else 
    {
        return NULL;
    }
}