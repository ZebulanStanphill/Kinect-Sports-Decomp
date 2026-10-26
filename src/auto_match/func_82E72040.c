typedef struct Obj Obj;
typedef struct { void *s[13]; int (*get)(Obj *o); } Vt;
struct Obj { Vt *vt; };
extern void fn_82E71990(Obj *o, int a, int b, int c, int d, int e);

void fn_82E72040(Obj *o, int a, int b, int d, int e)
{
    fn_82E71990(o, a, b, o->vt->get(o), d, e);
}
