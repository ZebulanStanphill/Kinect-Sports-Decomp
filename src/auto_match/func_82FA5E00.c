int fn_82FA5E00(int param_1, unsigned int param_2)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *pf;
  iVar3 = param_1 + param_2;
  iVar2 = iVar3 + 4;
  *(unsigned int *)(iVar3 + 8) = ((*(unsigned int *)(param_1 + 4) & 0xfffffffc) - param_2 - 4) | (*(unsigned int *)(iVar3 + 8) & 3);
  *(unsigned int *)(param_1 + 4) = (*(unsigned int *)(param_1 + 4) & 3) | param_2;
  iVar1 = (*(unsigned int *)(iVar3 + 8) & 0xfffffffc) + iVar2;
  iVar4 = iVar1 + 4;
  *(int *)(iVar4) = iVar2;
  *(unsigned int *)(iVar4 + 4) = *(unsigned int *)(iVar4 + 4) | 2;
  *(unsigned int *)(iVar3 + 8) = *(unsigned int *)(iVar3 + 8) | 1;
  return iVar3 + 4;
}
