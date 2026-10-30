typedef struct Obj Obj;
typedef struct { void *s[28]; int (*get)(Obj *, int *, int *, int *); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { int x, y; } Pair;

void fn_82BFEDE8(Obj *o, Pair *out)
{
    int a, b, c;
    if (o->vt->get(o, &a, &b, &c) >= 0) {
        if (b == 1)
            out->x = a;
        else
            out->x = b;
        out->y = c;
    }
}
