// Built with link-time code generation together with its "ltcg_units" (objects.json):
// the frame reserves the 8*(n+8) outgoing area LTCG gives calls to a compiled variadic function.
typedef struct { int first; int second; } Pair_8259B408;
typedef struct {
    int pad0[1];
    int f4;
    int f8;
    int pad[0x98 / 4 - 3];
    int f98;
} Src_8259B408;
extern void fn_822315A0(unsigned);
extern void fn_82517978(Pair_8259B408 *, int, int, int);
extern int fn_82526C70(void *, int, const char *, ...);
extern int fn_8265C9E0(int);
extern void fn_827D9630(void *, int);
extern int fn_827D96A0(int);
extern void fn_827DE858(int *, Pair_8259B408 *, int *);
extern char lbl_821CA774[];

int *fn_8259B408(Src_8259B408 *src, int name, int val, int unused, int **pctx)
{
    int *ctx = *pctx;
    int *obj;
    Pair_8259B408 a;
    Pair_8259B408 b;
    unsigned ref;
    int *c2;

    fn_82526C70((char *)ctx + 0x170, 0x2a, "%08x", fn_827D96A0(name));
    ctx[0x68 / 4] = src->f98;
    obj = (int *)fn_8265C9E0(0x70);
    if (obj != 0) {
        a.first = 0;
        a.second = 0;
        fn_82517978(&a, src->f4, src->f8, 1);
        b.first = 0;
        b.second = 0;
        ref = a.second;
        c2 = *pctx;
        fn_82517978(&b, a.first, ref, 0);
        fn_827DE858(obj, &b, c2);
        obj[0] = (int)lbl_821CA774;
        fn_827D9630(obj + 6, name);
        obj[0xc] = val;
        obj[0x16] = 0;
        obj[0x18] = 0;
        obj[0x1a] = 1;
        if (ref != 0)
            fn_822315A0(ref);
        return obj;
    }
    return 0;
}
