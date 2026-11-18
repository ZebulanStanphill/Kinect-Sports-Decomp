typedef struct Writer_828EA2D8 {
    unsigned int bitPos;   /* 0x0 */
    unsigned int pos;      /* 0x4 */
    unsigned char *buffer; /* 0x8 */
    unsigned int capacity; /* 0xc */
} Writer_828EA2D8;

extern int fn_828E9F90(Writer_828EA2D8 *self, const void *src, int size);
extern void fn_828E9DB8(Writer_828EA2D8 *self, unsigned int value, int bits);

int fn_828EA2D8(Writer_828EA2D8 *self, const unsigned char *src, int size)
{
    int ok = 1;

    if (self->bitPos == 0) {
        ok = fn_828E9F90(self, src, size);
    } else if (((self->bitPos + 7) >> 3) + self->pos + size <= self->capacity) {
        while (size > 0) {
            fn_828E9DB8(self, *src, 8);
            src++;
            size--;
        }
    } else {
        ok = 0;
    }
    return ok;
}
