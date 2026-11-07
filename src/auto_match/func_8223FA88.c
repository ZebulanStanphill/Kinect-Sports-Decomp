char *fn_8223FA88(void *self, char *fmt, const unsigned char *spec, int flags)
{
    char *p = fmt;
    int base;

    *p++ = '%';
    if (flags & 0x20)
        *p++ = '+';
    if (flags & 0x8)
        *p++ = '#';
    if (spec[0] != 'L') {
        *p++ = spec[0];
    } else {
        *p++ = 'I';
        *p++ = '6';
        *p++ = '4';
    }
    base = flags & 0xe00;
    *p++ = base == 0x400 ? 'o'
         : base != 0x800 ? spec[1]
         : (flags & 4) ? 'X' : 'x';
    *p = '\0';
    return fmt;
}
