extern int fn_82C58F30();
extern int fn_82C69500();


void fn_82C5F9C8(int param_1,int param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  fn_82C69500(param_1 + 0xea0,param_1 + 0xea8);
  puVar1 = *(unsigned int **)(param_1 + 0xea0);
  piVar2 = *(int **)(param_1 + 0xea8);
  *(unsigned int *)(param_1 + 0xec0) = *puVar1;
  *(unsigned int *)(param_1 + 0xec4) = puVar1[1];
  *(unsigned int *)(param_1 + 0xec8) = puVar1[2];
  iVar3 = *piVar2;
  *(int *)(param_1 + 0xecc) = iVar3;
  *(int *)(param_1 + 0xed0) = piVar2[1];
  *(int *)(param_1 + 0xed4) = piVar2[2];
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0xdc) + iVar3;
  }
  *(int *)(param_1 + 0xee4) = iVar4;
  *(int *)(param_1 + 0xf10) = *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0xec0);
  *(int *)(param_1 + 0xf14) = *(int *)(param_1 + 0xec4) + *(int *)(param_1 + 0xe0);
  *(int *)(param_1 + 0xf18) = *(int *)(param_1 + 0xec8) + *(int *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x39e8) = iVar3;
  *(unsigned int *)(param_1 + 0x39ec) = *(unsigned int *)(param_1 + 0xed0);
  *(unsigned int *)(param_1 + 0x39f0) = *(unsigned int *)(param_1 + 0xed4);
  if (param_2 != 0) {
    fn_82C58F30(param_1);
  }
  return;
}

