void fn_82671620(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  
  puVar1 = *(unsigned int **)(param_2 + 4);
  puVar2 = param_3;
  while (puVar4 = puVar2 + 2, puVar4 != puVar1) {
    *puVar2 = *puVar4;
    puVar2[1] = puVar2[3];
    puVar2 = puVar4;
  }
  iVar5 = *(int *)(param_2 + 4) + -8;
  for (iVar3 = iVar5; iVar3 != *(int *)(param_2 + 4); iVar3 = iVar3 + 8) {
  }
  *(int *)(param_2 + 4) = iVar5;
  *param_1 = param_3;
  return;
}

