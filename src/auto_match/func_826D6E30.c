typedef unsigned int size_t;
extern void *memcpy(void *d, const void *s, size_t n);

unsigned int fn_826D6E30(int p, void *dst, unsigned int n)
{
    if (dst == 0) {
        return *(unsigned int *)(p + 0x70);
    }
    if (n >= *(unsigned int *)(p + 0x70)) {
        n = *(unsigned int *)(p + 0x70);
    }
    if (*(void **)(p + 0x6c) != 0) {
        memcpy(dst, *(void **)(p + 0x6c), n);
    }
    return n;
}
