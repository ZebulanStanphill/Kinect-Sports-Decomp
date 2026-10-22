typedef struct Ref Ref;
extern void fn_822315A0(Ref *r);
extern void fn_82517978(void *dst, void *a, Ref *b, int flag);
extern void *fn_8265C9E0(int size);
extern void fn_827D9630(void *p, int arg);
extern void fn_827DE858(void *p, void *sp, int arg);
extern char lbl_821CBF50[];

typedef struct {
    void *a;
    Ref *b;
} SPtr;

typedef struct {
    int pad0;
    void *a;
    Ref *b;
} Src;

void **fn_826283B0(Src *src, int arg, int *pv)
{
    void **p = (void **)fn_8265C9E0(0x38);
    if (p != 0) {
        SPtr s1;
        SPtr s2;
        Ref *r;
        int v;
        s1.a = 0;
        s1.b = 0;
        fn_82517978(&s1, src->a, src->b, 1);
        r = s1.b;
        s2.a = 0;
        s2.b = 0;
        v = *pv;
        fn_82517978(&s2, s1.a, s1.b, 0);
        fn_827DE858(p, &s2, v);
        *p = lbl_821CBF50;
        fn_827D9630(p + 6, arg);
        if (r != 0) {
            fn_822315A0(r);
        }
        return p;
    }
    return 0;
}
