typedef unsigned int size_t;
extern void *memcpy(void *d, const void *s, size_t n);
extern int lbl_8320A7B0[];

void fn_82837010(void *dst, int *count)
{
    int n = lbl_8320A7B0[0x3b];
    memcpy(dst, lbl_8320A7B0, n * 16);
    *count = n;
}
