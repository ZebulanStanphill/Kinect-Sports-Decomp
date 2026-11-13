extern unsigned int lbl_82005710;
extern unsigned int lbl_82005F78;


unsigned __int64 fn_829803A8(double param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  double dVar1;
  unsigned int uVar2;
  
  uVar2 = *param_3;
  if (uVar2 == 0) {
    param_3[2] = (unsigned int)(param_1 != lbl_82005710);
  }
  else {
    if (uVar2 == 1) {
      dVar1 = param_1 + lbl_82005F78;
      if (param_1 < 0.0) {
        dVar1 = param_1 - lbl_82005F78;
      }
      uVar2 = (unsigned int)dVar1;
    }
    else {
      if (2 < uVar2) {
        if (uVar2 == 3) {
          *(double *)(param_3 + 2) = param_1;
          return 0;
        }
        return 0xffffffff80004005;
      }
      dVar1 = param_1 + lbl_82005F78;
      if (param_1 < 0.0) {
        dVar1 = param_1 - lbl_82005F78;
      }
      uVar2 = (unsigned int)(__int64)dVar1;
    }
    param_3[2] = uVar2;
  }
  return 0;
}

