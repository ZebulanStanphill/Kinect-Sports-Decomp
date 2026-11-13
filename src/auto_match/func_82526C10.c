extern unsigned int strlen(const char *s);

void fn_82526C10(char *d, int n, char *s)
{
    char *end = d + n;
    char *p = d + strlen(d);
    while (p < end && (*p++ = *s++) != 0)
        ;
    if (p == end)
        p[-1] = 0;
}
