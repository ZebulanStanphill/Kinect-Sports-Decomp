typedef struct {
    void *vt;
    int a4, a8, ac, a10, a14, a18, a1c, a20, a24, a28;
} T;
extern char lbl_8202F0F8[];
void fn_82930AB8(T *p, int b, int c, int d, int e, int f, int g, int h)
{
    p->a14 = c;
    p->a10 = b;
    p->a18 = d;
    p->a4 = 4;
    p->a8 = 0;
    p->vt = lbl_8202F0F8;
    p->ac = 0;
    p->a1c = e;
    p->a24 = f;
    p->a20 = g;
    p->a28 = h;
}
