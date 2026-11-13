#define NAN(x) ((x) != (x))
extern unsigned int INFINITY;
extern double _seed_nan;
extern int fn_82F65E20();
extern int fn_82F6E018();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;


double fn_82B803A0(double param_1)

{
  int iVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  if (param_1 == lbl_82005710) {
    fVar2 = -INFINITY;
  }
  else if ((param_1 < lbl_82005710) || (iVar1 = fn_82F6E018(param_1), iVar1 == 4)) {
    fVar2 = -(_seed_nan);
  }
  else {
    if (iVar1 != 0x200) {
      dVar3 = (double)fn_82F65E20(param_1);
      dVar4 = (double)fn_82F65E20(lbl_82002C40);
      return dVar3 / dVar4;
    }
    fVar2 = INFINITY;
  }
  return (double)fVar2;
}

