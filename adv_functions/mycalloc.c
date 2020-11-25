void *my_calloc(size_t elem, size_t size)              
{
    char *ptr = NULL;
    unsigned int x;

    if (elem == 0 || size == 0)
            return (NULL);

    ptr = malloc(elem * size);
    if (ptr == NULL)
            return (NULL);

    for (x = 0; x < (elem * size); x++) 
    {
            ptr[x] = NULL;
    }
    return ((void *)ptr);
}