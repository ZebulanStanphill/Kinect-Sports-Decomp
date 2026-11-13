/* Accepts a flags word whose 0xf00 field holds exactly one of the four kind bits. */
long fn_82EED830(void *self, unsigned int flags, void *out)
{
    unsigned int kind;

    if (out == 0)
        return 0x8000ffff; /* E_UNEXPECTED */
    kind = flags & 0xf00;
    if (kind == 0x100 || kind == 0x200 || kind == 0x400 || kind == 0x800)
        return 1;
    return 0x8000ffff;
}
