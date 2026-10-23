int fn_82EF4920(unsigned short **pp, unsigned int *out, int n, unsigned short term)
{
    int i;
    unsigned short c;

    *out = 0;
    for (i = 0; i < n; i++) {
        c = **pp;
        if (c >= '0' && c <= '9')
            *out = *out * 16 + c - '0';
        else if (c >= 'A' && c <= 'F')
            *out = *out * 16 + c - 'A' + 10;
        else if (c >= 'a' && c <= 'f')
            *out = *out * 16 + c - 'a' + 10;
        else
            return 0;
        (*pp)++;
    }
    if (term)
        return *(*pp)++ == term;
    return 1;
}
