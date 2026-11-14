extern void fn_8223C478(void *stream, int bits, int ctx);
extern unsigned char fn_828E9DB8(void *stream, unsigned int value, int bits);

static __forceinline unsigned char WriteBits(void *stream, unsigned int value, int bits, int ctx)
{
    fn_8223C478(stream, bits, ctx);
    return fn_828E9DB8(stream, value, bits);
}

unsigned char fn_828D2958(void *stream, const unsigned char *data, unsigned int count, int ctx)
{
    unsigned char ok = 1;
    unsigned int i;

    for (i = 0; i < count; i++) {
        unsigned char zero = data[i] == 0;
        ok = ok && WriteBits(stream, zero != 0, 1, ctx);
        if (!zero) {
            ok = ok && WriteBits(stream, data[i], 8, ctx);
        }
    }
    return ok;
}
