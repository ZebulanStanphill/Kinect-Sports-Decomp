extern int abs(int);


unsigned int fn_82F2AC28(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
  int iVar1;
  unsigned int uVar2;
  int lVar3;
  
  uVar2 = abs((int)param_2);
  if ((*(int *)(param_1 + 0x624) == 0) || (2 < *(int *)(param_5 + 0x60))) {
    if (uVar2 >= param_4) {
      return (unsigned int)*(unsigned int *)(param_4 * 8 + param_3 + 4) + 9;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      return (unsigned int)*(unsigned int *)((int)((uVar2 & 0xffffffff) << 3) + param_3 + 4) + 1;
    }
  }
  else {
    lVar3 = 1;
    iVar1 = 1;
    if (*(int *)(param_5 + 0x60) == 1) {
      lVar3 = 2;
      iVar1 = 3;
    }
    if (((unsigned int)(iVar1 + (int)uVar2) >> lVar3) >= param_4) {
      return (unsigned int)*(unsigned int *)(param_4 * 8 + param_3 + 4) + lVar3 + 9;
    }
    if ((uVar2 & 0xffffffff) != 0) {
      return (unsigned int)*(unsigned int *)((int)((uVar2 & 0xffffffff) << 3) + param_3 + 4) + lVar3 + 1;
    }
  }
  return (unsigned int)*(unsigned int *)(param_3 + 4);
}

