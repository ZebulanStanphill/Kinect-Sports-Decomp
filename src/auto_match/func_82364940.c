typedef struct Obj Obj;
typedef struct { void *s0; void *s1; void *s2; int (*get)(Obj *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { char pad[0x3ec]; Obj *o; } P;
extern void fn_82455A30(int a, int b);
void fn_82364940(P *p, int b)
{
    Obj *o = p->o;
    fn_82455A30(o->vt->get(o), b);
}
