extern unsigned int lbl_82005710;
extern unsigned int lbl_82005F78;


unsigned __int64 fn_82980328(unsigned __int64 param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  double dVar2;
  
  uVar1 = *param_3;
  if (uVar1 == 0) {
    uVar1 = (unsigned int)(param_3[2] != 0);
  }
  else {
    if ((uVar1 != 1) && (2 < uVar1)) {
      if (uVar1 == 3) {
        dVar2 = *(double *)(param_3 + 2);
        if (dVar2 < lbl_82005710) {
          dVar2 = dVar2 - lbl_82005F78;
        }
        else {
          dVar2 = dVar2 + lbl_82005F78;
        }
        *param_2 = (unsigned int)(__int64)dVar2;
        return 0;
      }
      return 0xffffffff80004005;
    }
    uVar1 = param_3[2];
  }
  *param_2 = uVar1;
  return 0;
}

