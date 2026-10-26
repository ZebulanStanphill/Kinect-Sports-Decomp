extern void fn_828BDDA0(void *p);
extern char lbl_82025CC8[];
extern char lbl_82025CD0[];
typedef struct Vec { int a, b, c; } Vec;
typedef struct Obj {
    void *vt;
    char pad4[0x4c];
    void *vt2;
    char pad54[0x2c];
    int x80;
    int x84;
    Vec v;
} Obj;
static void Vec_init(Vec *v) { v->a = 0; v->b = 0; v->c = 0; }
Obj *fn_828DCAD8(Obj *p, int a, int b)
{
    fn_828BDDA0(p);
    p->x80 = a;
    p->x84 = b;
    p->vt = lbl_82025CD0;
    p->vt2 = lbl_82025CC8;
    Vec_init(&p->v);
    return p;
}
