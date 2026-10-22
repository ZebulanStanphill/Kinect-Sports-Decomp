extern void *fn_82FA5060(int heap, int size);
extern void fn_82FF3EE0(void *p, int a);
extern int fn_82FFF750(void *p);
extern void fn_83008600(void *p);
extern int lbl_831BC768;
extern char lbl_8217C7E8[];
extern char lbl_8217C940[];

typedef struct Obj {
    void (**vtbl)(struct Obj *);
    int f4[6];
    void *vtbl2;
    int f20[26];
    int f88[1];
} Obj;

Obj *fn_8302C0F0(int a)
{
    Obj *p;

    p = (Obj *)fn_82FA5060(lbl_831BC768, 0xb0);
    if (p == 0)
        return 0;
    fn_82FF3EE0(p, a);
    p->vtbl = (void (**)(Obj *))lbl_8217C7E8;
    p->vtbl2 = lbl_8217C940;
    fn_83008600(p->f88);
    if (fn_82FFF750(p) != 1) {
        p->vtbl[2](p);
        return 0;
    }
    return p;
}
