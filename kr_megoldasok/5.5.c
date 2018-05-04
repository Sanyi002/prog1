void strcat(char *s, const char *t, int n)
{
    while (*s)              
        s++;
    while (*t && n-- > 0)   
        *s++ = *t++;
    *s = '\0';
}

int strncmp(char *s, const char *t, int n)
{
    for (; *s == *t && n-- > 0; s++, t++)
        if (*s == '\0' || n == 0)
            return 0;
    return *s - *t;
}

void strncpy(char *s, const char *t, int n)
{
    while (*t && n-- > 0)
        *s++ = *t++;
    *s = '\0';
}