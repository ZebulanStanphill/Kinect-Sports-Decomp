typedef struct Writer_82A3AAB8 {
    char pad0[0x14];
    union {
        unsigned int w;
        unsigned char b[4];
    } bits;
    signed char count;
    unsigned char overflow;
    char pad1A[0x854 - 0x1a];
    unsigned char *start;
    unsigned char *cur;
    unsigned char *end;
} Writer_82A3AAB8;

void fn_82A3AAB8(Writer_82A3AAB8 *w, int n, unsigned int v)
{
    w->bits.w |= v << (w->count - n);
    w->count -= n;
    while (w->count <= 16) {
        if (w->cur >= w->end) {
            w->overflow = 1;
            w->cur = w->start;
        }
        *w->cur = w->bits.b[1];
        *++w->cur = w->bits.b[0];
        w->cur++;
        w->count += 16;
        w->bits.w <<= 16;
    }
}

