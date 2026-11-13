#define NAN(x) ((x) != (x))
extern double _seed_nan;
extern int fn_82F6E018();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


double fn_82B80258(double param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = fn_82F6E018();
  if (iVar1 < 0x21) {
    if (iVar1 != 0x20) {
      if (0 < iVar1) {
        if (iVar1 < 3) {
          return -(_seed_nan);
        }
        if ((iVar1 == 4) || (iVar1 == 0x10)) goto LAB_82b8029c;
      }
LAB_82b802e0:
      dVar2 = (double)lbl_821AAD20;
      if ((dVar2 <= param_1) && (dVar2 = (double)lbl_82002AE0, param_1 <= dVar2)) {
        return param_1;
      }
      return dVar2;
    }
  }
  else if ((iVar1 != 0x40) && (iVar1 != 0x80)) {
    if (iVar1 == 0x200) {
      return (double)lbl_82002AE0;
    }
    goto LAB_82b802e0;
  }
LAB_82b8029c:
  return (double)lbl_821AAD20;
}

