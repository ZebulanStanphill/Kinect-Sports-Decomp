extern int fn_82AD6090();


void fn_82AFA378(int param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  if ((*(unsigned int *)(param_2 + 8) >> 0x1a & 1) != 0) {
    return;
  }
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) | 0x4000000;
  puVar1 = *(unsigned int **)(param_1 + 0x28c);
  if ((puVar1[1] & 1) == 0) {
    uVar3 = *puVar1 & 0xfffffffe;
    iVar4 = uVar3 - 4;
    if ((iVar4 != 0) && (*(int *)(uVar3 + 4) + 1U <= *(unsigned int *)(uVar3 + 8))) goto LAB_82afa3e0;
  }
  iVar4 = fn_82AD6090(puVar1,1);
LAB_82afa3e0:
  iVar2 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar2 + 1;
  *(int *)((iVar2 + 4) * 4 + iVar4) = param_2;
  return;
}

