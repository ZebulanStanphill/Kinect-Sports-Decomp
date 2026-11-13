#define NAN(x) ((x) != (x))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int INFINITY;
extern double _seed_nan;
extern int fn_82B16720();
extern int fn_82F6E018();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


double fn_82B80438(double param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  
  if (param_1 == lbl_82005758) {
    return lbl_82005758;
  }
  if (lbl_82005710 <= param_1) {
    iVar1 = fn_82F6E018(param_1);
    if (iVar1 < 1) {
LAB_82b804ac:
      dVar3 = (double)fn_82B16720(SQRT(param_1));
      return dVar3;
    }
    if ((2 < iVar1) && (iVar1 != 4)) {
      if (iVar1 != 0x200) goto LAB_82b804ac;
      fVar2 = INFINITY;
      goto LAB_82b80470;
    }
  }
  fVar2 = -(_seed_nan);
LAB_82b80470:
  return (double)fVar2;
}

