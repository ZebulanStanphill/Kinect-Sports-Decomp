typedef struct Alloc_82AE7180 {
    char pad0[0x8];
    unsigned int used[8];   /* 0x8: bitmap */
} Alloc_82AE7180;

extern unsigned int fn_82AE5040(unsigned int *bits, unsigned int start);
extern unsigned int fn_82AE5400(Alloc_82AE7180 *self, unsigned int start, int set, int step);
extern void fn_82ADEDB8(Alloc_82AE7180 *self, unsigned int start, unsigned int count);

void fn_82AE7180(void *unused, Alloc_82AE7180 *self)
{
    unsigned int pos = 0;
    unsigned int next;
    unsigned int bit;
    unsigned int start;
    unsigned int end;

    do {
        bit = fn_82AE5040(self->used, pos * 4);
        if (bit == (unsigned int)-1)
            return;
        start = bit >> 2;
        if (start == (unsigned int)-1)
            return;
        end = fn_82AE5400(self, start, 1, 4);
        next = end == (unsigned int)-1 ? 0x100 : end >> 4;
        fn_82ADEDB8(self, start & ~3, ((next + 3) & ~3) - (start & ~3));
        pos = next;
    } while (pos < 0x100);
}
