extern void *fn_826957D0(void *a, int b);
extern void *fn_826959C8(unsigned char *p);
extern void *fn_82696AD0(void *a, int b);
extern unsigned char fn_8271FEE8(int a, int b, void *c);

typedef struct S {
    int x0;
    unsigned char *out;
    int x8;
    int xc;
    int x10;
    int x14;
    int x18;
    int x1c;
} S;

void fn_82720528(S *s)
{
    int v;
    void *r;
    unsigned char b;
    unsigned char *p;

    if (s->x1c >= 1) {
        v = s->x18;
        r = fn_82696AD0(fn_826957D0(s, 0), v);
        b = fn_8271FEE8(s->x18, s->x8, r);
        p = s->out;
        fn_826959C8(p);
        p[4] = b;
        p[0] = 2;
    }
}
