typedef struct Obj_827127C8 { int f00; void *owner; char pad8[0x10]; int key; } Obj_827127C8;
extern void *fn_826957D0(Obj_827127C8 *o, int index);
extern float fn_826972E0(void *p, int key);
extern void fn_82F65018(float a, float b);
extern void fn_82681898(void *owner);

void fn_827127C8(Obj_827127C8 *o)
{
  float a = fn_826972E0(fn_826957D0(o, 0), o->key);
  fn_82F65018(a, fn_826972E0(fn_826957D0(o, 1), o->key));
  fn_82681898(o->owner);
}
