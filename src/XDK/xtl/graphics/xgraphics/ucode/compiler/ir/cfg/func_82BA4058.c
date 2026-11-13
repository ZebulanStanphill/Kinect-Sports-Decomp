extern int fn_82B7BD28();
extern int fn_82BA3FB0();
extern int fn_82BBFE28();


unsigned int fn_82BA4058(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  
  if (*(unsigned int *)(param_1 + 0x9c) == 0) {
    iVar1 = fn_82BBFE28(param_1 + 0x80);
    uVar2 = fn_82B7BD28(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5ac),iVar1 * 4 + 4);
    *(unsigned int *)(param_1 + 0x9c) = uVar2;
    puVar3 = (unsigned int *)fn_82BA3FB0(param_1);
    **(unsigned int **)(param_1 + 0x9c) = *puVar3;
    for (iVar4=1; iVar4<=iVar1; ++iVar4) { ((unsigned int *)*(int *)(param_1 + 0x9c))[iVar4] = puVar3[iVar1-iVar4+1]; }
  }
  return *(unsigned int *)(param_1 + 0x9c);
}

