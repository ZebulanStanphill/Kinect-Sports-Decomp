extern void fn_82FAFD70(void *p);
extern char lbl_8216D858[];
extern char lbl_8217C940[];
typedef struct Vec { int a, b, c; } Vec;
typedef struct Obj {
    void *vt;
    char pad4[0x18];
    void *vt2;
    char pad20[0xa0 - 0x20];
    Vec v;
} Obj;
static void Vec_init(Vec *v) { v->a = 0; v->b = 0; v->c = 0; }
Obj *fn_82FB63E0(Obj *p)
{
    fn_82FAFD70(p);
    p->vt = lbl_8216D858;
    p->vt2 = lbl_8217C940;
    Vec_init(&p->v);
    return p;
}
