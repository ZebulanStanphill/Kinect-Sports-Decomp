typedef struct Obj Obj;
typedef struct ObjVt { void *s[0x134 / 4]; int (*get)(Obj *o); } ObjVt;
struct Obj { ObjVt *vt; };
extern void fn_83004B48(Obj *o, int v, int z, int a, int b);

void fn_83009398(Obj *o, unsigned int flag, int a, int b)
{
    int v;
    if (flag == 0) {
        v = o->vt->get(o);
        fn_83004B48(o, v, 0, a, b);
    }
}
