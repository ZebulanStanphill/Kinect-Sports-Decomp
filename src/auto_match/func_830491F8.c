unsigned __int64 fn_830491F8(int param_1,int *param_2,unsigned char *param_3)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  sVar1 = *(short *)(param_1 + 0x1c);
  uVar3 = *param_2 + *(int *)(param_1 + 0x3c);
  *(unsigned int *)(param_1 + 0x3c) = uVar3;
  if (sVar1 == 1) {
    uVar2 = *(unsigned int *)(param_1 + 0x34);
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x24);
  }
  if (uVar3 < uVar2) {
    return 0x2d;
  }
  if (sVar1 != 1) {
    *(unsigned int *)(param_1 + 0x3c) = (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x24)) + uVar3 + -1;
    if (sVar1 != 0) {
      *(short *)(param_1 + 0x1c) = sVar1 + -1;
    }
    *param_3 = 1;
    return 0x2d;
  }
  *param_2 = (*param_2 - *(int *)(param_1 + 0x3c)) + uVar2;
  *(unsigned int *)(param_1 + 0x3c) = uVar2;
  return 0x11;
}

