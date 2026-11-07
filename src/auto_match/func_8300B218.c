extern void fn_8300BBC0(void **, void *, int);
static __forceinline int notNull(void *p) { if (p) return 1; return 0; }
int fn_8300B218(char *p)
{
    void **h = (void **)(p + 0x5c);
    while (notNull(*h))
        fn_8300BBC0(h, *h, 0);
    return 1;
}
