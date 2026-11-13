typedef struct Obj_828D4578 Obj_828D4578;
typedef struct { void *s[12]; void *(*get)(Obj_828D4578 *o); } Vt_828D4578;
struct Obj_828D4578 { Vt_828D4578 *vt; };
extern int fn_828D3D70(void *p, int a, int b, int c, float f, int d, int e, int g);

int fn_828D4578(Obj_828D4578 *o, int a, int b, int c, float f, int d, int e, int g)
{
    void *p = o->vt->get(o);
    if (p != 0) {
        return fn_828D3D70(p, a, b, c, f, d, e, g);
    }
    return 1;
}
