typedef struct Obj Obj;

typedef struct {
    char pad0[0x28];
    int x28;
    char pad2c[0x28];
} Sub;

struct Obj {
    int pad0;
    int x4;
    int pad8;
    int xc;
    char *data;
    char pad14[0xdc];
    char a[6][0x148];
    Sub s1;
    Sub s2;
};

extern void fn_8236DB30(Obj *p);
extern void fn_822B1F78(void *a, Obj *p, void *d);
extern int fn_82897B18(void *d);
extern void fn_82897600(Obj *p, Sub *s, int v);
extern void fn_82898220(Sub *s, Obj *p, void *d, int x);

static void setup(Obj *p, Sub *s, void *d)
{
    fn_82897600(p, s, fn_82897B18(d));
    s->x28 = p->xc;
    fn_82898220(s, p, d, p->x4);
}

void fn_8243CC00(Obj *p)
{
    char *d;

    fn_8236DB30(p);
    d = p->data;
    fn_822B1F78(p->a[0], p, d + 0xe4);
    fn_822B1F78(p->a[1], p, d + 0x20c);
    fn_822B1F78(p->a[2], p, d + 0x334);
    fn_822B1F78(p->a[3], p, d + 0x45c);
    fn_822B1F78(p->a[4], p, d + 0x584);
    fn_822B1F78(p->a[5], p, d + 0x6ac);
    setup(p, &p->s1, d + 0x7d4);
    setup(p, &p->s2, d + 0x82c);
}
