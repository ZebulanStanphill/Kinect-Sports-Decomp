typedef struct Writer_828E9F18 {
    unsigned int bitPos;
    unsigned int pos;
    unsigned char *buffer;
    unsigned int capacity;
} Writer_828E9F18;

extern void fn_828E9DB8(Writer_828E9F18 *self, unsigned int value, int bits);

int fn_828E9F18(Writer_828E9F18 *self, unsigned __int64 value, int bits)
{
    int ok = 1;

    if (((self->bitPos + bits + 7) >> 3) + self->pos <= self->capacity) {
        if (bits > 32) {
            fn_828E9DB8(self, (unsigned int)(value >> 32), bits - 32);
            bits = 32;
        }
        fn_828E9DB8(self, (unsigned int)value, bits);
    } else
        ok = 0;
    return ok;
}
