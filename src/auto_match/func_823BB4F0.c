typedef struct { char pad[0x28]; int c; char pad2[0x54 - 0x2c]; } Sub;
typedef struct {
    int pad0;
    int v4;
    int pad8;
    int c;
    char *src;
    char pad14[0x48 - 0x14];
    char a[0x9c - 0x48];
    Sub s1;
    Sub s2;
    char b[0x198 - 0x144];
    char d[0x1ec - 0x198];
    char e[4];
} Obj;

extern void fn_8224F2B8(void *d, Obj *o, void *s);
extern int fn_82897B18(void *s);
extern void fn_82897600(Obj *o, Sub *sub, int v);
extern void fn_82898220(Sub *sub, Obj *o, void *s, int v);

static void initSub(Obj *o, Sub *sub, void *src)
{
    fn_82897600(o, sub, fn_82897B18(src));
    sub->c = o->c;
    fn_82898220(sub, o, src, o->v4);
}

void fn_823BB4F0(Obj *o)
{
    char *src = o->src;

    fn_8224F2B8(o->a, o, src + 0x34);
    initSub(o, &o->s1, src + 0x8c);
    initSub(o, &o->s2, src + 0xe4);
    fn_8224F2B8(o->b, o, src + 0x13c);
    fn_8224F2B8(o->d, o, src + 0x194);
    fn_8224F2B8(o->e, o, src + 0x1ec);
}
