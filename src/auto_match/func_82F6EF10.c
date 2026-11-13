typedef unsigned char bool;
extern int fn_82F64A40();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_82005758;
extern unsigned int lbl_821683A0;
extern unsigned int lbl_821683A8;
extern unsigned int lbl_821683B8;
extern unsigned int lbl_821683C8;
extern unsigned int lbl_821683D0;
extern unsigned int lbl_821683D8;
extern unsigned int lbl_821683E8;
extern unsigned int lbl_821683F0;


double fn_82F6EF10(double param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = ABS(param_1);
  if (param_1 != lbl_82005710) {
    if (dVar2 <= lbl_821683A8) {
      dVar3 = dVar2 * dVar2;
      dVar3 = (((-(dVar3 * lbl_821683F0 - lbl_821683B8) * dVar3 - lbl_821683E8) * dVar3) /
               (((dVar3 + lbl_821683D8) * dVar3 + lbl_821683D0) * dVar3 + lbl_821683C8) +
              lbl_82005758) * dVar2;
    }
    else {
      dVar3 = lbl_82005758;
      if (dVar2 <= lbl_821683A0) {
        dVar3 = lbl_82002C40;
        dVar2 = (double)fn_82F64A40(dVar2 * lbl_82002C40);
        dVar3 = (lbl_82005730 - lbl_82005758 / (dVar2 + lbl_82005758)) * dVar3;
      }
    }
    bVar1 = param_1 < 0.0;
    param_1 = dVar3;
    if (bVar1) {
      param_1 = -dVar3;
    }
  }
  return param_1;
}

