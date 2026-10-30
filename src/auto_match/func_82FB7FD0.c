typedef struct Obj { struct ObjVt *vt; } Obj;
typedef struct ObjVt { void (*f0)(Obj *); void (*f4)(Obj *); } ObjVt;
typedef struct Tgt { char pad[0x20]; Obj *cur; } Tgt;
typedef struct Pair { Tgt *t; Obj *saved; } Pair;
typedef struct S { char pad[0x1c]; Pair *begin; Pair *end; } S;
void fn_82FB7FD0(S *s)
{
  Pair *it = s->begin;
  if (it != s->end) {
    do {
      Tgt *t = it->t;
      Obj *o = it->saved;
      t->cur->vt->f4(t->cur);
      it++;
      t->cur = o;
    } while (it != s->end);
  }
  s->end = s->begin;
}
