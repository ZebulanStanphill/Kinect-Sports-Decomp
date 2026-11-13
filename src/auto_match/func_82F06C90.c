unsigned __int64 fn_82F06C90(int param_1,unsigned __int64 *param_2,unsigned __int64 *param_3,unsigned __int64 *param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 *puVar2;
  
  if (*(int *)(param_1 + 0x1c28) < 1) {
    return 0;
  }
  if (param_3 != (unsigned __int64 *)0x0) {
    *param_3 = param_3[2];
    param_3[1] = param_3[3];
    param_4[1] = param_4[3];
    *param_4 = param_4[2];
  }
  puVar2 = param_2 + 4;
  if (*(int *)(param_1 + 0x1c28) != 1) {
    if (*(int *)(param_1 + 0x1c28) != 2) {
      uVar1 = param_2[0xc];
      param_2[8] = uVar1;
      *puVar2 = uVar1;
      *param_2 = uVar1;
      uVar1 = param_2[0xd];
      param_2[9] = uVar1;
      param_2[5] = uVar1;
      param_2[1] = uVar1;
      uVar1 = param_2[0xe];
      param_2[10] = uVar1;
      param_2[6] = uVar1;
      param_2[2] = uVar1;
      uVar1 = param_2[0xf];
      param_2[0xb] = uVar1;
      param_2[7] = uVar1;
      param_2[3] = uVar1;
      return 1;
    }
    uVar1 = param_2[8];
    *puVar2 = uVar1;
    *param_2 = uVar1;
    param_2[5] = param_2[9];
    param_2[1] = param_2[9];
    param_2[6] = param_2[10];
    param_2[2] = param_2[10];
    param_2[7] = param_2[0xb];
    param_2[3] = param_2[0xb];
    return 1;
  }
  *param_2 = *puVar2;
  param_2[1] = param_2[5];
  param_2[2] = param_2[6];
  param_2[3] = param_2[7];
  return 1;
}

