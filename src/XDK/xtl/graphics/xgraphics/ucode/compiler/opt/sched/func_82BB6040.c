typedef struct Obj Obj;
typedef struct ObjVt { void *s[4]; unsigned char (*f10)(Obj *o); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct { int a; int b; Obj *objs[2]; } S;

int fn_82BB6040(S *s)
{
    int i;
    for (i = 0; i < 2; i++) {
        if (s->objs[i]->vt->f10(s->objs[i])) {
            return 1;
        }
    }
    return 0;
}
