extern unsigned int lbl_8201EB08;
extern unsigned int lbl_8201EB10;
extern unsigned int lbl_8201EB18;
extern unsigned int lbl_8201EB24;
extern unsigned int lbl_8201EB28;
extern unsigned int lbl_8201EB30;
extern unsigned int lbl_8201EB38;
extern unsigned int lbl_8201EB40;
extern unsigned int lbl_8201EB48;
extern unsigned int lbl_8201EB50;
extern unsigned int lbl_8201EB58;
extern unsigned int lbl_8201EB60;
extern unsigned int lbl_8201EB68;
extern unsigned int lbl_8201EB70;
extern unsigned int lbl_8201EB78;


double fn_82809950(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = ABS(param_1);
  dVar4 = (double)lbl_8201EB24;
  if (param_1 < 0.0) {
    dVar4 = (double)lbl_8201EB28;
  }
  dVar2 = (double)(__int64)(lbl_8201EB08 * dVar5);
  dVar3 = -(lbl_8201EB38 * dVar2 - -(lbl_8201EB30 * dVar2 - dVar5));
  dVar1 = dVar3 * dVar3;
  dVar3 = ((((((((lbl_8201EB78 * dVar1 + lbl_8201EB70) * dVar1 + lbl_8201EB68) * dVar1 +
               lbl_8201EB60) * dVar1 + lbl_8201EB58) * dVar1 + lbl_8201EB50) * dVar1 + lbl_8201EB48)
            * dVar1 + lbl_8201EB40) * dVar1 + (double)lbl_8201EB24) * dVar3;
  if (((__int64)dVar2 & 1U) != 0) {
    dVar3 = -dVar3;
  }
  if (dVar5 != 0.0) {
    dVar1 = lbl_8201EB18;
    if (dVar5 - lbl_8201EB10 < 0.0) {
      dVar1 = dVar3 * dVar4;
    }
    param_1 = (double)(float)dVar1;
  }
  return param_1;
}

