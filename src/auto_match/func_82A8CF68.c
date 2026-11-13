extern unsigned int lbl_8217E9E8;
extern unsigned int lbl_832234FC;
extern unsigned int uRam8315fac8;


unsigned int * fn_82A8CF68(unsigned int *param_1)

{
  __int64 lVar1;
  
  *param_1 = &lbl_8217E9E8;
  param_1[1] = 0;
  if (param_1 != &lbl_832234FC) {
    lVar1 = KeTlsGetValue(uRam8315fac8);
    if (lVar1 == 0) {
      lVar1 = -0x7cddcb04;
    }
    param_1[1] = (int)lVar1;
    KeTlsSetValue(uRam8315fac8,param_1);
  }
  return param_1;
}

