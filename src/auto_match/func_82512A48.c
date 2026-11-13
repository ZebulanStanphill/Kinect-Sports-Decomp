extern int fn_82512C30();
extern int fn_82512CC8();


void fn_82512A48(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar3 = fn_82512C30();
  piVar6 = *(int **)(iVar3 + 0x24);
  do {
    piVar5 = piVar6;
    if (piVar5 == *(int **)(iVar3 + 0x28)) goto LAB_82512aec;
    piVar6 = piVar5 + 3;
  } while (*piVar5 != param_1);
  piVar1 = *(int **)(iVar3 + 0x28);
  for (; piVar6 != piVar1; piVar6 = piVar6 + 3) {
    *piVar5 = *piVar6;
    piVar5[1] = piVar6[1];
    piVar5[2] = piVar6[2];
    piVar5 = piVar5 + 3;
  }
  iVar2 = *(int *)(iVar3 + 0x28);
  for (iVar4 = iVar2 + -0xc; iVar4 != iVar2; iVar4 = iVar4 + 0xc) {
  }
  *(int *)(iVar3 + 0x28) = iVar2 + -0xc;
LAB_82512aec:
  fn_82512CC8();
  return;
}

