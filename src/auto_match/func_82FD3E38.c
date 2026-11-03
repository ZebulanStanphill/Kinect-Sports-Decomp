typedef struct Obj_82FD3E38 Obj_82FD3E38;
struct Obj_82FD3E38 {
  int p0;
  void (*f4)(Obj_82FD3E38 *, int);
  struct { char pad[8]; float a; float b; } *cfg; /* 8 */
  char s0c[0x118];
  char s124[0x2c];
  float v150;
  float v154;
};
extern void fn_82FC9D50(void *, float);
extern void fn_82FC8FD0(void *, float);

void fn_82FD3E38(Obj_82FD3E38 *o, int arg)
{
  float v;
  v = o->cfg->a;
  if (v != o->v150) {
    fn_82FC9D50(o->s0c, v);
    o->v150 = v;
  }
  v = o->cfg->b;
  if (v != o->v154) {
    fn_82FC8FD0(o->s124, v);
    o->v154 = v;
  }
  o->f4(o, arg);
}
