typedef struct Obj Obj;
typedef struct { void *s[77]; int (*get)(Obj *o); } Vt;
struct Obj { Vt *vt; };
extern void fn_830048A8(Obj *o, int id, float f, int a, int b, int c);

void fn_82FFFDC8(Obj *o, int id, int a, float f, int b, int c)
{
    fn_830048A8(o, o->vt->get(o), f, a, b, c);
}
