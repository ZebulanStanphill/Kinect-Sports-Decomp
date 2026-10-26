extern void fn_83033978(void *p);
extern char lbl_8217CC20[];
extern char lbl_8217C940[];
typedef struct Vec { int a, b, c; } Vec;
typedef struct Obj {
    void *vt;
    char pad4[0x18];
    void *vt2;
    char pad20[0xa8 - 0x20];
    Vec v;
} Obj;
static void Vec_init(Vec *v) { v->a = 0; v->b = 0; v->c = 0; }
Obj *fn_830318C0(Obj *p)
{
    fn_83033978(p);
    p->vt = lbl_8217CC20;
    p->vt2 = lbl_8217C940;
    Vec_init(&p->v);
    return p;
}
