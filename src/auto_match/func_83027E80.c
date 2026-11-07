extern void *fn_82FA5100(unsigned int heap, unsigned int size, unsigned int align);
extern void *fn_83027A10(void *mem, unsigned int count, unsigned int flags);
extern unsigned int lbl_831BC768;

void *fn_83027E80(unsigned int count, unsigned int flags, int mode)
{
    unsigned int bits;
    unsigned int n;
    void *p;

    if (mode != 3) {
        count = 1;
    }
    bits = flags & ~8u;
    n = 0;
    while (bits != 0) {
        n++;
        bits &= bits - 1;
    }
    if (n == 0) {
        return 0;
    }
    p = fn_82FA5100(lbl_831BC768, ((unsigned short)count * n - 1) * 64 + 0x70, 0x10);
    if (p == 0) {
        return 0;
    }
    return fn_83027A10(p, count, flags);
}
