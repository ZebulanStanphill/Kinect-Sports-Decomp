void fn_82AB0350(unsigned int flags, const unsigned int *src, unsigned int *a, unsigned int *b,
                 unsigned int *c, unsigned int *d)
{
    if (flags & 0x10000)
        *a = src[0];
    else
        *a = 0;
    if (flags & 0x20000)
        *b = src[1];
    else
        *b = 0;
    if (flags & 0x40000)
        *c = src[2];
    else
        *c = 0;
    if (flags & 0x80000)
        *d = src[3];
    else
        *d = 0;
}
