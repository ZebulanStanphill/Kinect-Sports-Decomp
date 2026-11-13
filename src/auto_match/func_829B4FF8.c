typedef unsigned int size_t;
void *memset(void *d, int c, size_t n);
extern void *fn_8265C940(unsigned int size, unsigned int flags);

void *fn_829B4FF8(int kind)
{
    unsigned int size;
    void *p;
    if (kind == 2) {
        size = 0x40;
    } else if (kind == 1) {
        size = 0x6a0;
    } else {
        return 0;
    }
    p = fn_8265C940(size, 0x24810000);
    if (p != 0) {
        memset(p, 0, size);
    }
    return p;
}
