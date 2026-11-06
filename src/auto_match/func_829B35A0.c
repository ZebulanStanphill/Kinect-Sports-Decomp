extern void *fn_82930318(int);
extern void *fn_829B3488(void *);

typedef struct Iface_829B35A0 Iface_829B35A0;
typedef struct IVt_829B35A0 {
  int pad0;
  Iface_829B35A0 *(*clone)(Iface_829B35A0 *);
} IVt_829B35A0;
struct Iface_829B35A0 {
  IVt_829B35A0 *vt;
};

typedef struct Blk_829B35A0 {
  long long v[4];
} Blk_829B35A0;

typedef struct Obj_829B35A0 {
  char pad0[0x10];
  int f10;
  int f14;
  int f18;
  int f1c;
  int f20;
  int f24;
  Iface_829B35A0 *f28;
  Iface_829B35A0 *f2c;
  Blk_829B35A0 f30;
} Obj_829B35A0;

Obj_829B35A0 *fn_829B35A0(Obj_829B35A0 *param_1)
{
  Obj_829B35A0 *iVar1;
  void *mem;

  mem = fn_82930318(0x50);
  if (mem != 0) {
    iVar1 = (Obj_829B35A0 *)fn_829B3488(mem);
  }
  else {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    return 0;
  }
  iVar1->f10 = param_1->f10;
  iVar1->f14 = param_1->f14;
  iVar1->f18 = param_1->f18;
  iVar1->f1c = param_1->f1c;
  iVar1->f20 = param_1->f20;
  iVar1->f24 = param_1->f24;
  if (param_1->f28 != 0) {
    iVar1->f28 = param_1->f28->vt->clone(param_1->f28);
    if (iVar1->f28 == 0) {
      return 0;
    }
  }
  if (param_1->f2c != 0) {
    iVar1->f2c = param_1->f2c->vt->clone(param_1->f2c);
    if (iVar1->f2c == 0) {
      return 0;
    }
  }
  iVar1->f30 = param_1->f30;
  return iVar1;
}
