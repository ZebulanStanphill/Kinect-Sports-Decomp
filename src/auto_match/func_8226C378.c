void fn_8226C378(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x54) + param_2 * 0x14);
  iVar2 = *(int *)(param_1 + 0x54) + param_2 * 0x14;
  if (*(int *)(iVar2 + 4) < iVar1) {
    return;
  }
  iVar3 = *(int *)(iVar2 + 0xc);
  do {
    iVar5 = *(int *)(iVar2 + 8);
    if (iVar5 <= iVar3) {
      do {
        iVar3 = *(int *)(param_1 + 0x48) * iVar5;
        iVar5 = iVar5 + 1;
        iVar3 = (iVar3 + iVar1) * 0xf0;
        iVar4 = *(int *)(param_1 + 0x40) + iVar3;
        *(unsigned int *)(iVar4 + 0xe4) = *(unsigned int *)(iVar4 + 0xe4) | 1 << (param_2 & 0x3f);
        iVar3 = *(int *)(param_1 + 0x40) + iVar3;
        *(unsigned int *)(iVar3 + 0xe4) = *(unsigned int *)(iVar3 + 0xe4) & 0x7fffffff;
        iVar3 = *(int *)(iVar2 + 0xc);
      } while (iVar5 <= iVar3);
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 <= *(int *)(iVar2 + 4));
  return;
}

