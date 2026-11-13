extern unsigned int lbl_82005710;


unsigned __int64 fn_82B80F70(unsigned __int64 param_1,unsigned __int64 *param_2,unsigned __int64 *param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = lbl_82005710;
  if ((param_1 & 3) == 0) {
    return 0;
  }
  if ((param_1 & 1) == 0) {
    *param_2 = lbl_82005710;
    *param_3 = 0x7ff0000000000000;
  }
  else {
    if ((param_1 & 2) == 0) {
      *param_2 = 0xfff0000000000000;
      uVar1 = lbl_82005710;
    }
    else {
      *param_2 = lbl_82005710;
    }
    *param_3 = uVar1;
  }
  return 1;
}

