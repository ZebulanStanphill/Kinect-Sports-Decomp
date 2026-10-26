typedef struct Obj Obj;
typedef struct ObjVt { void (*del)(Obj *self, int flags); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct S { char pad[0xb6c]; Obj *items[4]; } S;

void fn_82525810(S *s, int unused, int i)
{
    Obj *o = s->items[i];
    if (o) {
        o->vt->del(o, 1);
        s->items[i] = 0;
    }
}
