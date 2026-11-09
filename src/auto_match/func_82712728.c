double sqrt(double x);

extern int fn_826957D0(void *self, int index);
extern double fn_826972E0(int value, int arg);
extern void fn_82681898(void *target, double value);

typedef struct Obj_82712728 { int pad0; void *target; char pad8[0x10]; int arg18; } Obj_82712728;

void fn_82712728(Obj_82712728 *o)
{
  int arg = o->arg18;
  int value = fn_826957D0(o, 0);
  fn_82681898(o->target, sqrt(fn_826972E0(value, arg)));
}
