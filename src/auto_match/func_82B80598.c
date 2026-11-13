#define NAN(x) ((x) != (x))
extern unsigned int INFINITY;
extern double _seed_nan;
extern int fn_82B16720();
extern int fn_82F6E018();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


double fn_82B80598(double param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
  if (param_1 == lbl_82005758) {
    return lbl_82005758;
  }
  dVar3 = lbl_82005758;
  iVar1 = fn_82F6E018(param_1);
  if (iVar1 < 1) {
LAB_82b80634:
    dVar3 = (double)fn_82B16720(dVar3 / param_1);
  }
  else {
    if (iVar1 < 3) {
      fVar2 = -(_seed_nan);
    }
    else if (iVar1 == 4) {
      fVar2 = -0.0;
    }
    else if (iVar1 == 0x20) {
      fVar2 = -INFINITY;
    }
    else {
      if (iVar1 != 0x40) {
        if (iVar1 == 0x200) {
          return lbl_82005710;
        }
        goto LAB_82b80634;
      }
      fVar2 = INFINITY;
    }
    dVar3 = (double)fVar2;
  }
  return dVar3;
}

