extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


unsigned __int64 fn_8297FBF0(unsigned __int64 param_1,double *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  double dVar3;
  
  uVar1 = *param_3;
  if (uVar1 == 0) {
    dVar3 = lbl_82005710;
    if (param_3[2] != 0) {
      dVar3 = lbl_82005758;
    }
  }
  else {
    if (uVar1 == 1) {
      uVar2 = (unsigned __int64)(int)param_3[2];
    }
    else {
      if (2 < uVar1) {
        if (uVar1 != 3) {
          return 0xffffffff80004005;
        }
        dVar3 = *(double *)(param_3 + 2);
        goto LAB_8297fc64;
      }
      uVar2 = (unsigned __int64)param_3[2];
    }
    dVar3 = (double)(__int64)uVar2;
  }
LAB_8297fc64:
  *param_2 = dVar3;
  return 0;
}

