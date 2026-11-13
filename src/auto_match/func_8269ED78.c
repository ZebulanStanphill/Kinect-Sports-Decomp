typedef unsigned __int64 unsigned;
extern int fn_826824B0();
struct Sub_8269ED78;
struct VT_8269ED78 { int pad[5]; unsigned (*f)(struct Sub_8269ED78 *, unsigned, unsigned, unsigned); };
struct Sub_8269ED78 { struct VT_8269ED78 *vt; };
struct Obj_8269ED78 { int a; int b; unsigned rc; int c; struct Sub_8269ED78 sub; };
unsigned fn_8269ED78(int param_1,unsigned param_2,unsigned param_3,unsigned param_4)
{
  struct Obj_8269ED78 *o; unsigned r; struct Sub_8269ED78 *s;
  o = (struct Obj_8269ED78*)(*(int (**)())(*(int *)(param_1 + -0x68) + 0xe4))(param_1 + -0x68);
  if (o != 0) {
    o->rc = (o->rc + 1) & 0x8fffffff;
    s = &o->sub;
    r = s->vt->f(s,param_2,param_3,param_4);
  } else r = 0;
  if (o != 0) fn_826824B0(o);
  return r;
}
