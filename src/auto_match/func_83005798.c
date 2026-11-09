typedef struct Obj Obj;
typedef struct { void *s[77]; int (*get)(Obj *o); } Vt;
struct Obj { Vt *vt; };
extern void fn_83004C68(Obj *o, int id, float f, int a, int b, int c);

void fn_83005798(Obj *o, int id, int a, float f, int b, int c)
{
    fn_83004C68(o, o->vt->get(o), f, a, b, c);
}
