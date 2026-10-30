typedef struct Rep_8227F818 Rep_8227F818;
typedef struct {
    void *ptr;
    Rep_8227F818 *rep;
} Ref_8227F818;
typedef struct {
    int a;
    int b;
    unsigned int c;
    int d;
} Val_8227F818;

extern void fn_822794D0(void *, void *, int, int, int);
extern void fn_82273CD8(Val_8227F818 *, int);
extern void fn_82273C88(Val_8227F818 *);
extern void **fn_82279C58(Ref_8227F818 *, void *);
extern void fn_82672C20(void *, const char *, Val_8227F818 *, int);
extern void fn_8266F678(void *, int);
extern void fn_822315A0(Rep_8227F818 *);
extern void *lbl_821A89BC;

void *fn_8227F818(void *self, void *p2, unsigned int val)
{
    Ref_8227F818 t1;
    Ref_8227F818 t2;
    Val_8227F818 v;

    fn_822794D0(self, p2, 1, 1, 0);
    *(void **)self = &lbl_821A89BC;
    if (val != 0) {
        v.a = 0;
        v.b = 0;
        fn_82273CD8(&v, 5);
        v.c = val;
        fn_82672C20(*fn_82279C58(&t1, self), "_root.setTitleText", &v, 1);
        if (t1.rep != 0) {
            fn_822315A0(t1.rep);
        }
        fn_82273C88(&v);
    }
    fn_8266F678(*fn_82279C58(&t2, self), 1);
    if (t2.rep != 0) {
        fn_822315A0(t2.rep);
    }
    return self;
}
