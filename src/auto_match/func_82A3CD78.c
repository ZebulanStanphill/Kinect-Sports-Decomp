__int64 fn_82A3CD78(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
  __int64 lVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  lVar1 = 0;
  if (param_4 <= param_2) {
    return lVar1;
  }
  iVar2 = param_4 - param_2;
  param_3 = param_3 << 2;
  do {
    if ((1 << (param_2 & 7) & (unsigned int)*(unsigned char *)((param_2 >> 3) + *(int *)(param_1 + 0x2c))) == 0) {
      lVar1 = lVar1 + 1;
      iVar4 = (*(unsigned char *)(*(int *)(param_1 + 0x28) + param_2) + 0x1474) * 2;
      *(short *)(iVar4 + param_1) = *(short *)(iVar4 + param_1) + 1;
    }
    else {
      uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x24) + param_3);
      if (*(unsigned char *)(*(int *)(param_1 + 0x28) + param_2) < 7) {
        if (uVar3 < 0x400) {
          uVar3 = (unsigned int)*(unsigned char *)(uVar3 + param_1 + 0x454);
        }
        else if (uVar3 < 0x80000) {
          uVar3 = *(unsigned char *)((uVar3 >> 9) + param_1 + 0x454) + 0x12;
        }
        else {
          uVar3 = (uVar3 >> 0x11 & 0xff) + 0x22;
        }
        iVar4 = (unsigned int)*(unsigned char *)(*(int *)(param_1 + 0x28) + param_2) + uVar3 * 8 + 0x1574;
      }
      else {
        if (uVar3 < 0x400) {
          uVar3 = (unsigned int)*(unsigned char *)(*(int *)(*(int *)(param_1 + 0x24) + param_3) + param_1 + 0x454);
        }
        else if (uVar3 < 0x80000) {
          uVar3 = *(unsigned char *)((uVar3 >> 9) + param_1 + 0x454) + 0x12;
        }
        else {
          uVar3 = (uVar3 >> 0x11 & 0xff) + 0x22;
        }
        iVar4 = uVar3 * 0x10 + param_1;
        *(short *)(iVar4 + 0x2af6) = *(short *)(iVar4 + 0x2af6) + 1;
        iVar4 = *(unsigned char *)(*(int *)(param_1 + 0x28) + param_2) + 0x1e00;
      }
      param_3 = param_3 + 4;
      *(short *)(iVar4 * 2 + param_1) = *(short *)(iVar4 * 2 + param_1) + 1;
      lVar1 = (unsigned __int64)*(unsigned char *)(*(int *)(param_1 + 0x28) + param_2) + lVar1 + 2;
    }
    param_2 = param_2 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return lVar1;
}

