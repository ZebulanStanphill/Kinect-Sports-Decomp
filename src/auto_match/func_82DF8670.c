unsigned int fn_82DF8670(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  if (0 < (int)uVar1) {
    iVar2 = *(int *)(param_1 + 4);
    uVar5 = (param_2 >> 4) * -0x61c8864f & uVar1;
    iVar4 = uVar5 * 8;
    uVar3 = *(unsigned int *)(iVar4 + iVar2);
    while (uVar3 != 0xffffffff) {
      if (uVar3 == param_2) {
        return *(unsigned int *)(iVar4 + iVar2 + 4);
      }
      uVar5 = uVar5 + 1 & uVar1;
      iVar4 = uVar5 * 8;
      uVar3 = *(unsigned int *)(iVar4 + iVar2);
    }
  }
  return 0;
}

