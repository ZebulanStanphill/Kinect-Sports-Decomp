extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F65E18();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82015428;
extern float lbl_82015430;


void fn_827797D8(unsigned __int64 param_1,double param_2,double param_3)

{
  double *in_r6;
  double *in_r7;
  double *in_r8;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)fn_82F6A548();
  dVar4 = (dVar2 + param_2 + param_3) * lbl_82015430;
  dVar1 = lbl_82005758;
  if (dVar4 != lbl_82005710) {
    dVar1 = param_2;
    if (dVar2 < param_2) {
      dVar1 = dVar2;
    }
    if (param_3 <= dVar1) {
      dVar1 = param_3;
    }
    dVar1 = lbl_82005758 - dVar1 / dVar4;
  }
  if ((dVar2 != param_2) || (dVar3 = lbl_82005710, param_2 != param_3)) {
    dVar3 = dVar2 - param_2;
    dVar3 = (double)fn_82F65E18((((dVar3 + dVar2) - param_3) * 0.5) /
                                 SQRT((dVar2 - param_3) * (param_2 - param_3) + dVar3 * dVar3));
    if (param_2 <= param_3) {
      dVar3 = lbl_82015428 - dVar3;
    }
  }
  *in_r6 = dVar3;
  *in_r7 = dVar1;
  *in_r8 = dVar4;
  fn_82F6A594();
  return;
}

