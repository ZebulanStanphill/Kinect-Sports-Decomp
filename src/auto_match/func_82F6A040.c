unsigned short *fn_82F6A040(unsigned short *s, unsigned short c)
{
    while (*s != 0 && *s != c)
        s++;
    return *s == c ? s : 0;
}
