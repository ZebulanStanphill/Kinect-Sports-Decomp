struct Iface_82FB42A0;
typedef struct VT_82FB42A0 {
  void *s[7];
  unsigned char (*check)(struct Iface_82FB42A0 *);
} VT_82FB42A0;
typedef struct Iface_82FB42A0 { VT_82FB42A0 *vt; } Iface_82FB42A0;
typedef struct Obj_82FB42A0 {
  char pad[8];
  int m8;
  char pad2[0x10];
  Iface_82FB42A0 *iface;
  int m20;
  int a, b, c;
  unsigned int flags;
} Obj_82FB42A0;

void fn_82FB42A0(Obj_82FB42A0 *param_1, int *param_2, int param_3)
{
  Iface_82FB42A0 *i = param_1->iface;
  param_1->a = param_2[0];
  param_1->b = param_2[1];
  param_1->c = param_2[2];
  if (i->vt->check(i) != 0) {
    param_1->a = 0;
  }
  if (*param_2 > 0) {
    param_1->c = param_1->c - param_3;
  }
  param_1->m20 = param_3;
  param_1->flags |= 0x80000000;
  if (param_3 < param_1->m8) {
    param_1->m8 = param_3;
  }
}
