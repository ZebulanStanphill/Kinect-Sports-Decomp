typedef struct Obj Obj;
typedef void (*VFn)(Obj *);
struct Obj {
  VFn *vt;
};
typedef struct { int a; Obj **pobj; } S;

void fn_82692FD8(S *s)
{
  Obj *o = *s->pobj;
  o->vt[6](o);
}
