typedef struct Obj Obj;
typedef struct ObjVt { void *s[5]; unsigned char (*f)(Obj *o); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { int a; int b; Obj *objs[2]; } S;

int fn_82BB60B0(S *s)
{
    int i;
    for (i = 0; i < 2; i++) {
        if (!s->objs[i]->vt->f(s->objs[i])) {
            return 0;
        }
    }
    return 1;
}
