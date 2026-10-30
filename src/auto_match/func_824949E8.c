typedef struct Obj { struct ObjVt *vt; } Obj;
typedef struct ObjVt { void (*f[5])(Obj *); } ObjVt;
typedef struct S { int pad; Obj **begin; Obj **end; } S;
void fn_824949E8(S *s)
{
  Obj **it = s->begin;
  Obj **end = s->end;
  for (; it != end; it++) (*it)->vt->f[4](*it);
}
