extern void fn_82FF3EE0(void *p);
extern char lbl_8217C620[];
extern char lbl_8217C940[];
typedef struct Vec { int a, b, c; } Vec;
typedef struct Obj {
    void *vt;
    char pad4[0x18];
    void *vt2;
    char pad20[0x88 - 0x20];
    Vec v;
} Obj;
static void Vec_init(Vec *v) { v->a = 0; v->b = 0; v->c = 0; }
Obj *fn_83028EF8(Obj *p)
{
    fn_82FF3EE0(p);
    p->vt = lbl_8217C620;
    p->vt2 = lbl_8217C940;
    Vec_init(&p->v);
    return p;
}
