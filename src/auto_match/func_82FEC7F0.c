extern void *fn_82FA5060(unsigned int heap, unsigned int size);
extern unsigned int lbl_831BC770;
extern unsigned int lbl_83264438;

void *fn_82FEC7F0(unsigned int size)
{
    unsigned int n;
    unsigned int *bin;

    if (size < 0x400) {
        size = 0x400;
    }
    bin = &lbl_83264438 + (size - 1 >> 10) * 3;
    n = *bin;
    if (n != 0) {
        void *p = (void *)bin[n];
        *bin = n - 1;
        return p;
    }
    return fn_82FA5060(lbl_831BC770, size);
}
