typedef struct { int a, b; } P8;
extern P8 *fn_826AF838(void *);
extern void fn_826AB218(void *);

P8 *fn_826B0BC8(P8 *out, int p2, int p3, unsigned char flag)
{
    P8 l50;
    P8 l58;
    P8 *p;
    int t[2];
    if (flag) {
        fn_826AB218(&l50);
        p = &l50;
    } else {
        p = fn_826AF838(&l58);
    }
    t[0] = p->a;
    t[1] = p->b;
    out->a = t[0];
    out->b = t[1];
    return out;
}
