extern int fn_82AC6560();
extern int fn_82AD6090();


void fn_82AE7208(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x9b4) == 0) {
    puVar3 = (unsigned int *)fn_82AC6560(param_1,8,0x2e);
    *(unsigned int **)(param_1 + 0x9b4) = puVar3;
    puVar3[1] = (unsigned int)puVar3 | 1;
    *puVar3 = (unsigned int)(puVar3 + 1) | 1;
  }
  puVar3 = *(unsigned int **)(param_1 + 0x9b4);
  if ((puVar3[1] & 1) == 0) {
    uVar2 = *puVar3 & 0xfffffffe;
    iVar4 = uVar2 - 4;
    if ((iVar4 == 0) || (*(unsigned int *)(uVar2 + 8) < *(int *)(uVar2 + 4) + 1U)) goto LAB_82ae7284;
  }
  else {
LAB_82ae7284:
    iVar4 = fn_82AD6090(puVar3,1);
  }
  iVar1 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar1 + 1;
  *(unsigned int *)((iVar1 + 4) * 4 + iVar4) = param_2;
  puVar3 = *(unsigned int **)(param_1 + 0x9b4);
  if ((puVar3[1] & 1) == 0) {
    uVar2 = *puVar3 & 0xfffffffe;
    iVar4 = uVar2 - 4;
    if (iVar4 != 0) {
      if (*(int *)(uVar2 + 4) + 1U <= *(unsigned int *)(uVar2 + 8)) goto LAB_82ae72e8;
    }
  }
  iVar4 = fn_82AD6090(puVar3,1);
LAB_82ae72e8:
  iVar1 = *(int *)(iVar4 + 8);
  *(int *)(iVar4 + 8) = iVar1 + 1;
  *(unsigned int *)((iVar1 + 4) * 4 + iVar4) = param_3;
  return;
}

