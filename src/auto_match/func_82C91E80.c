extern int fn_82C69500();


void fn_82C91E80(int param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  fn_82C69500(param_1 + 0xea8,param_1 + 0xea4);
  puVar1 = *(unsigned int **)(param_1 + 0xea8);
  piVar2 = *(int **)(param_1 + 0xea4);
  *(unsigned int *)(param_1 + 0xecc) = *puVar1;
  *(unsigned int *)(param_1 + 0xed0) = puVar1[1];
  *(unsigned int *)(param_1 + 0xed4) = puVar1[2];
  iVar4 = *piVar2;
  *(int *)(param_1 + 0xee8) = iVar4;
  *(int *)(param_1 + 0xeec) = piVar2[1];
  *(int *)(param_1 + 0xef0) = piVar2[2];
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xdc) + iVar4;
  }
  iVar3 = *(int *)(param_1 + 0xecc);
  *(int *)(param_1 + 0xef4) = iVar4;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xdc) + iVar3;
  }
  *(int *)(param_1 + 0xee4) = iVar4;
  *(int *)(param_1 + 0x39e8) = iVar3;
  *(unsigned int *)(param_1 + 0x39ec) = *(unsigned int *)(param_1 + 0xed0);
  *(unsigned int *)(param_1 + 0x39f0) = *(unsigned int *)(param_1 + 0xed4);
  return;
}

