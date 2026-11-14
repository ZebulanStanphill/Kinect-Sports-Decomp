typedef struct Iface_82930430 Iface_82930430;
typedef struct Vtbl_82930430 {
  int (*check)(Iface_82930430 *self, int value);
} Vtbl_82930430;
struct Iface_82930430 { Vtbl_82930430 *vt; };

int fn_82930430(Iface_82930430 *obj, int value)
{
  if (obj != 0)
    return obj->vt->check(obj, value);
  return 0 == value;
}
