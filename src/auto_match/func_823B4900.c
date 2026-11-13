extern int fn_828E9DA8(void *reader);
extern int fn_828E9D90(void *reader);
extern unsigned int fn_828EA0D0(void *reader, unsigned int bits);

unsigned int fn_823B4900(void *reader, unsigned int bits, unsigned char *ok)
{
    unsigned char valid;

    valid = fn_828E9DA8(reader) - fn_828E9D90(reader) >= (int)bits;
    if (ok != 0)
        *ok = valid;
    if (valid)
        return fn_828EA0D0(reader, bits);
    return 0;
}
