typedef unsigned __int64 unsigned;
extern int fn_826824B0();
struct Sub_8269ECF0;
struct VT_8269ECF0 { int pad[7]; unsigned (*f)(struct Sub_8269ECF0 *, unsigned, unsigned, unsigned); };
struct Sub_8269ECF0 { struct VT_8269ECF0 *vt; };
struct Obj_8269ECF0 { int a; int b; unsigned rc; int c; struct Sub_8269ECF0 sub; };
unsigned int fn_8269ECF0(int param_1,unsigned param_2,unsigned param_3,unsigned param_4)
{
  struct Obj_8269ECF0 *o; unsigned int r; struct Sub_8269ECF0 *s;
  o = (struct Obj_8269ECF0*)(*(int (**)())(*(int *)(param_1 + -0x68) + 0xe4))(param_1 + -0x68);
  if (o != 0) {
    o->rc = (o->rc + 1) & 0x8fffffff;
    s = &o->sub;
    r = s->vt->f(s,param_2,param_3,param_4);
    fn_826824B0(o);
    return r;
  }
  return 0;
}
