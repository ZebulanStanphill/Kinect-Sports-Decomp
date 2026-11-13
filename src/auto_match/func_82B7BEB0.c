typedef struct Buf_82B7BEB0 {
    char pad0[0x8];
    char *cur;          /* 0x08 */
    char pad0c[0x8];
    char *start;        /* 0x14 */
    int flushes;        /* 0x18 */
    int pad1c;
    int total;          /* 0x20 */
    char pad24[0x4];
    unsigned char active; /* 0x28 */
} Buf_82B7BEB0;

extern void *memset(void *dst, int value, unsigned int size);

void fn_82B7BEB0(Buf_82B7BEB0 *self, char *p)
{
    if (self->active && p == self->start) {
        memset(p, 0, self->cur - self->start);
        self->total += self->cur - self->start;
        self->flushes++;
        self->cur = self->start;
    }
}
