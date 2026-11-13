unsigned __int64 fn_8307DE78(unsigned int *param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  if ((param_1[1] & 0x30000) != 0) {
    param_1[1] = param_1[1] | 0x10000;
    return 0;
  }
  uVar3 = 0;
  if (*param_1 != 0) {
    iVar4 = 0;
    do {
      uVar1 = *(unsigned short *)(param_1[2] + iVar4 + 0x50);
      uVar2 = 1 << (uVar1 & 0x1f);
      *(unsigned int *)(((uVar1 >> 5) + 0x1ffa8690) * 4) =
           uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
      enforceInOrderExecutionIO();
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x60;
    } while (uVar3 < *param_1);
  }
  param_1[1] = param_1[1] | 0x10000;
  return 0;
}

