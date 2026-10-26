typedef struct Obj Obj;
typedef struct ObjVtbl {
    void *f[13];
    void (*fn34)(Obj *self, unsigned __int64 a);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };

void fn_82C04E00(Obj *p, unsigned int a)
{
    p->vt->fn34(p, a);
}
