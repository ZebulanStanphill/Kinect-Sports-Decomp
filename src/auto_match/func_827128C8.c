/* Script Math.min(a, b): converts both arguments to numbers and returns the min (func_827127C8 shape). */
typedef struct Obj_827128C8 { int f00; void *owner; char pad8[0x10]; int key; } Obj_827128C8;
extern void *fn_826957D0(Obj_827128C8 *o, int index);
extern double fn_826972E0(void *p, int key);
extern void fn_82681898(void *owner, double v);

void fn_827128C8(Obj_827128C8 *o)
{
  double a = fn_826972E0(fn_826957D0(o, 0), o->key);
  double b = fn_826972E0(fn_826957D0(o, 1), o->key);
  fn_82681898(o->owner, a < b ? a : b);
}
