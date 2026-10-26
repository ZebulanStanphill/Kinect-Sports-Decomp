typedef struct Obj Obj;
typedef struct ObjVt { void (*del)(Obj *self, int flags); } ObjVt;
struct Obj { ObjVt *vt; };
typedef struct S { char pad[0xa54]; Obj *items[4]; } S;

void fn_827DA528(S *s, int i)
{
    Obj *o = s->items[i]; if (o) o->vt->del(o, 1); s->items[i] = 0;
}
