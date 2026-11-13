extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


void fn_82B80FE0(double *param_1,double *param_2,unsigned __int64 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = lbl_82005758;
  dVar3 = lbl_82005710;
  if ((param_3 & 1) != 0) {
    if (lbl_82005710 <= *param_1) {
      if (lbl_82005758 < *param_1) {
        *param_1 = lbl_82005758;
      }
    }
    else {
      *param_1 = lbl_82005710;
    }
    if (dVar3 <= *param_2) {
      if (dVar2 < *param_2) {
        *param_2 = dVar2;
      }
    }
    else {
      *param_2 = dVar3;
    }
  }
  if (((param_3 & 2) != 0) && (dVar2 = *param_1, dVar2 < dVar3)) {
    dVar1 = *param_2;
    if (dVar3 <= dVar1) {
      *param_1 = dVar3;
      if (dVar1 < -dVar2) {
        *param_2 = -dVar2;
      }
    }
    else {
      *param_1 = -dVar1;
      *param_2 = -dVar2;
    }
  }
  if ((param_3 & 4) == 0) {
    return;
  }
  dVar3 = *param_1;
  *param_1 = -*param_2;
  *param_2 = -dVar3;
  return;
}

