unsigned __int64 fn_82F022F0(int param_1,unsigned char param_2,unsigned char *param_3,unsigned char *param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  *param_3 = param_2;
  uVar1 = *(unsigned int *)(param_1 + 0x30);
  uVar2 = 1;
  if (uVar1 == 0) {
    if (param_2 != 0) {
      return uVar2;
    }
    *(unsigned int *)(param_1 + 0x30) = 1;
    return uVar2;
  }
  if (uVar1 != 1) {
    if (2 < uVar1) {
      return uVar2;
    }
    if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 2)) || (param_2 == 3)) {
      uVar2 = 2;
      *param_3 = 3;
      *param_4 = param_2;
    }
    *(unsigned int *)(param_1 + 0x30) = (unsigned int)LZCOUNT((unsigned int)param_2) >> 5;
    return uVar2;
  }
  *(unsigned int *)(param_1 + 0x30) = -(unsigned int)(param_2 == 0) & 2;
  return uVar2;
}

