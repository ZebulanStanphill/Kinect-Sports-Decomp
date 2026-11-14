typedef struct Coder_828AC330 {
    char pad0[8];
    unsigned char raw;
    char pad9[3];
    unsigned int base;
    int pad10;
    int bits;
} Coder_828AC330;

extern void fn_8223C478(void *stream, int value, int bits);
extern void fn_828E9DB8(void *stream, unsigned int value, int bits);
extern int fn_828EA268(unsigned int value);

static __forceinline void WriteValue(void *stream, unsigned int value, int bits)
{
    fn_8223C478(stream, bits, 0);
    fn_828E9DB8(stream, value, bits);
}

void fn_828AC330(Coder_828AC330 *self, void *stream, unsigned int *value)
{
    int bits;

    if (self->raw != 0) {
        bits = fn_828EA268(*value);
        if (bits == 0)
            bits = 1;
        bits--;
        WriteValue(stream, bits, 5);
        WriteValue(stream, *value, bits + 1);
    } else {
        WriteValue(stream, *value - self->base, self->bits);
    }
}
