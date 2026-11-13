extern unsigned int lbl_821AAD20;


unsigned __int64
fn_82A8B7B0(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4,
             unsigned int param_5,unsigned int *param_6)

{
  unsigned int uVar1;
  
  if (param_6 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  param_6[1] = (float)param_1;
  param_6[2] = param_4;
  param_6[3] = param_5;
  param_6[4] = 0;
  param_6[6] = 0;
  uVar1 = lbl_821AAD20;
  *param_6 = lbl_821AAD20;
  param_6[5] = uVar1;
  param_6[7] = uVar1;
  return 0;
}

