unsigned __int64 fn_82C07F20(int param_1,__int64 param_2,unsigned int *param_3,int *param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = (int)param_2;
  uVar1 = 0;
  if (*param_4 != 0) {
    return uVar1;
  }
  if (iVar2 < 0x90061) {
    if (iVar2 == 0x90060) {
      return uVar1;
    }
    if (iVar2 < 0x90031) {
      if (iVar2 == 0x90030) {
        *(short *)(param_1 + 0x36) = (short)param_3;
        return uVar1;
      }
      if (iVar2 == 0x90000) {
        return uVar1;
      }
      if (iVar2 == 0x90010) {
        *param_3 = 0xffffffff;
        return uVar1;
      }
      if (iVar2 != 0x90020) {
        return 0xffffffff805000b2;
      }
      *(unsigned int **)(param_1 + 0x30) = param_3;
      return uVar1;
    }
    uVar3 = param_2 - 0x90040;
    if (uVar3 == 0) {
      *(short *)(param_1 + 0x34) = (short)param_3;
      return uVar1;
    }
  }
  else {
    if (iVar2 < 0x90091) {
      if (iVar2 == 0x90090) {
        return uVar1;
      }
      if (param_2 - 0x90070U == 0) {
        *(unsigned int *)(param_1 + 0x28) = param_3[2] * param_3[1];
        return uVar1;
      }
      if ((param_2 - 0x90070U & 0xffffffff) != 0x10) {
        return 0xffffffff805000b2;
      }
      if (param_3 == *(unsigned int **)(*(int *)(param_1 + 0x48) + 0x228)) {
        *(unsigned int **)(param_1 + 0x2c) = param_3;
        return uVar1;
      }
      return 0xffffffff805000b7;
    }
    uVar3 = param_2 - 0x900a0;
    if (uVar3 == 0) {
      return uVar1;
    }
  }
  if ((uVar3 & 0xffffffff) != 0x10) {
    return 0xffffffff805000b2;
  }
  return uVar1;
}

