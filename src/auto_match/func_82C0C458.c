typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f[14];
    void (*fn38)(Obj *self, int a, int b, Obj *c);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

void fn_82C0C458(Obj *p, int a, int b)
{
    p->vt->fn38(p, a, b, p);
}
