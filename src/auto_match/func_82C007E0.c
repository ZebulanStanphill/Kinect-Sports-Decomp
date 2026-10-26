typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f[12];
    void (*fn30)(Obj *self, int a, int b, Obj *c);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

void fn_82C007E0(Obj *p, int a, int b)
{
    p->vt->fn30(p, a, b, p);
}
