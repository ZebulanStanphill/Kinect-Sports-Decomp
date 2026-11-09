typedef struct Obj Obj;
typedef struct { void *s[77]; int (*get)(Obj *o); } Vt;
struct Obj { Vt *vt; };
extern void fn_83004750(Obj *o, int id, float f, int a, int b, int c);

void fn_82FFFD68(Obj *o, int id, int a, float f, int b, int c)
{
    fn_83004750(o, o->vt->get(o), f, a, b, c);
}
