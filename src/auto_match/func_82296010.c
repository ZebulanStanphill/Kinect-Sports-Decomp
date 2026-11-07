char *fn_82296010(char *fmt, const unsigned char *spec, int flags)
{
    char *s = fmt;
    int base;

    *s++ = '%';
    if (flags & 0x20)
        *s++ = '+';
    if (flags & 8)
        *s++ = '#';
    if (spec[0] != 'L') {
        *s = spec[0];
    } else {
        *s++ = 'I';
        *s++ = '6';
        *s = '4';
    }
    base = flags & 0xe00;
    s[1] = base == 0x400 ? 'o'
         : base != 0x800 ? spec[1]
         : (flags & 4) ? 'X' : 'x';
    s[2] = '\0';
    return fmt;
}
