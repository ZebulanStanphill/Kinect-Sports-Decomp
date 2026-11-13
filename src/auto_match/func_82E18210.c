extern int *fn_82CE5410(void);
extern void fn_82CFDFE0(void *, void *, unsigned, int);

void fn_82E18210(void *a, unsigned type, int count, unsigned *src)
{
    int *top;
    int base;
    unsigned __int64 *dst;
    int i;

    if (type == 4) {
        fn_82CFDFE0(a, src, 4, count);
    } else {
        top = fn_82CE5410();
        base = *top;
        *top = ((count * 8 + 0x7f) & ~0x7f) + base;
        dst = (unsigned __int64 *)base;
        for (i = 0; i < count; i++) {
            dst[i] = src[i];
        }
        fn_82CFDFE0(a, (void *)base, type, count);
        top = fn_82CE5410();
        *top = base;
    }
}
