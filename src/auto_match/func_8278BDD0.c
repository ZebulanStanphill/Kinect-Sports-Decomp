unsigned __int64 fn_8278BDD0(unsigned __int64 param_1,int param_2)

{
  unsigned short uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(unsigned short *)(param_2 + 0x16);
  uVar4 = 0;
  if (((uVar1 >> 6 & 1) != 0) && (piVar2 = *(int **)(param_2 + 8), piVar2 != (int *)0x0)) {
    uVar4 = 0x1505;
    iVar5 = (*piVar2 + 1) * 4;
    for (iVar6 = iVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar5 = iVar5 + -1;
      uVar4 = (unsigned __int64)*(unsigned char *)((int)piVar2 + iVar5) + (__int64)(int)uVar4 * 0x1003f;
    }
  }
  if ((uVar1 >> 1 & 1) != 0) {
    uVar4 = *(unsigned short *)(param_2 + 0xc) ^ uVar4;
  }
  if ((uVar1 >> 2 & 1) != 0) {
    uVar4 = ((__int64)*(short *)(param_2 + 0xe) & 0xffffffU) << 8 ^ uVar4;
  }
  if ((uVar1 >> 3 & 1) != 0) {
    uVar4 = ((__int64)*(short *)(param_2 + 0x10) & 0xfffffU) << 0xc ^ uVar4;
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar4 = (unsigned __int64)*(unsigned short *)(param_2 + 0x12) << 0x10 ^ uVar4;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    uVar4 = ((unsigned __int64)*(unsigned short *)(param_2 + 0x14) & 0x3fff) << 0x12 ^ uVar4;
  }
  if (((uVar1 >> 7 & 1) == 0) || (uVar3 = 1, (uVar1 & 0x8000) == 0)) {
    uVar3 = 0;
  }
  uVar1 = *(unsigned short *)(param_2 + 0x16);
  return ((unsigned __int64)(uVar1 >> 8) & 6 | (unsigned __int64)uVar1 << 9 | uVar3) ^
         (unsigned __int64)(uVar1 >> 1) & 0xc00 ^ uVar4;
}

