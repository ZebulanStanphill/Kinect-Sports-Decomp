extern int fn_825A24C0();


void fn_82489248(int param_1,int *param_2)

{
  unsigned int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  int *piVar5;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xd54) + 0x14);
  if ((iVar1 != 0) && (*(int *)(*(int *)(param_1 + 0xd54) + 0x18) == 0)) {
    if (*(int **)(iVar1 + 0x18) != (int *)0x0) {
      (*(int (**)())(**(int **)(iVar1 + 0x18) + 0x48))(*(int **)(iVar1 + 0x18));
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    if (iVar1 != 0) {
      puVar4 = *(unsigned int **)(iVar1 + 0x20);
      puVar2 = *(unsigned int **)(iVar1 + 0x24);
      for (; puVar4 != puVar2; puVar4 = puVar4 + 1) {
        (*(int (**)())(*(int *)*puVar4 + 0x1c))((int *)*puVar4,param_2);
      }
    }
  }
  param_1 += 0x7a4;
  if ((*param_2 == 0x44) && (iVar1 = *(int *)(param_1 + 0x2c), iVar1 != 0)) {
    piVar5 = *(int **)(*(unsigned int *)(param_1 + 0x2c) + 4);
    piVar3 = *(int **)(*(unsigned int *)(param_1 + 0x2c) + 8);
    for (; piVar5 < piVar3; piVar5 = piVar5 + 1) {
      if ((unsigned int)*piVar5 == (unsigned int)param_2[2]) {
        fn_825A24C0(*(unsigned int *)(param_1 + 0x2c),piVar5);
        piVar5 = piVar5 + -1;
        piVar3 = piVar3 + -1;
      }
    }
  }
  return;
}

