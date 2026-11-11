int fn_82A6A3E0(unsigned char *samples, int unused1, int unused2, int index)
{
    unsigned char *s = samples + index * 3;
    return ((signed char)s[2] << 16 | *(unsigned short *)s) >> 4;
}
