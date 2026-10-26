typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f[19];
    void (*fn4c)(Obj *self, int a, int b, int c);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

void fn_82C0C5A8(Obj *p, int a, int b)
{
    p->vt->fn4c(p, a, b, 0);
}
