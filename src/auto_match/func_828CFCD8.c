extern int fn_8288A398(void);
extern void fn_828AC498(void *, int, int, int, int);
extern int fn_828E9D90(void *);
extern int fn_828E9DA8(void *);
extern unsigned fn_828E9FF8(void *, int);

static __forceinline unsigned Rd(void *r, int n)
{
    int avail = fn_828E9DA8(r);
    int pos = fn_828E9D90(r);
    unsigned v;

    if (avail - pos >= n) {
        v = fn_828E9FF8(r, n);
    } else {
        v = 0;
    }
    return v;
}

void fn_828CFCD8(unsigned char *p, void *r)
{
    int a, b, c, d;

    *(unsigned short *)(p + 4) = Rd(r, 0x10);
    if (*(unsigned short *)(p + 4) == *(unsigned *)(fn_8288A398() + 0x38)) {
        p[0x20] = Rd(r, 8);
        if (Rd(r, 1) != 0) {
            p[1] = Rd(r, 8);
        } else {
            p[1] = 0;
        }
        if (Rd(r, 1) != 0) {
            p[2] = Rd(r, 8);
        } else {
            p[2] = 0;
        }
        a = Rd(r, 6);
        b = Rd(r, 6);
        c = Rd(r, 6);
        d = Rd(r, 6);
        fn_828AC498(p + 8, c, d, a, b);
        *p = 1;
    } else {
        *p = 0;
    }
}
