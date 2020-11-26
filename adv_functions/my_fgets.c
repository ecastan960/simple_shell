char *my_fgets(char str[], int x, FILE *fp) 
{
    int c, i = 0;

    if (x <= 0)
    {
        return str;
    }

    while (i < x - 1 && ((c = getc(fp)) != EOF))
    {
            str[i++] = c;
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