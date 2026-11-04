typedef struct { int a, b; } P8;
extern P8 *fn_826C0760(void *);
extern void fn_826BF1D8(void *);

P8 *fn_826C0FB8(P8 *out, int p2, int p3, unsigned char flag)
{
    P8 l50;
    P8 l58;
    P8 *p;
    int t[2];
    if (flag) {
        fn_826BF1D8(&l50);
        p = &l50;
    } else {
        p = fn_826C0760(&l58);
    }
    t[0] = p->a;
    t[1] = p->b;
    out->a = t[0];
    out->b = t[1];
    return out;
}
