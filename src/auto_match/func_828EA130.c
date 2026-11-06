extern unsigned int fn_828E9FF8(void *reader, int bits);

int fn_828EA130(void *reader, int bits)
{
    unsigned int v;

    v = fn_828E9FF8(reader, bits);
    if ((v & (1 << (bits - 1))) != 0) {
        v |= -1 << bits;
    }
    return v;
}
