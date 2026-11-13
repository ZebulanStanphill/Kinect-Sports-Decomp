extern int fn_82AE5AC8();


void fn_82AC8E50(int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  *param_1 = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar1 = (unsigned __int64)*(unsigned int *)(param_2 + 0x318);
  if (uVar1 == 0) {
    uVar1 = 0x20;
  }
  if (uVar1 < 0x40) {
    fn_82AE5AC8(param_1,uVar1,0x40 - uVar1);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}

