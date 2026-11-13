extern int fn_822ABA88();


void fn_82396F50(int param_1)

{
  int *piVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  
  piVar5 = *(int **)(param_1 + 0x20);
  if (piVar5 != *(int **)(param_1 + 0x24)) {
    iVar4 = 0;
    do {
      lVar6 = 0;
      puVar7 = *(unsigned int **)*piVar5;
      piVar1 = *(int **)(**(int **)(param_1 + 8) + iVar4);
      if (puVar7 != (unsigned int *)((int *)*piVar5)[1]) {
        do {
          uVar3 = (unsigned __int64)*puVar7;
          piVar2 = (int *)fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),lVar6);
          if ((unsigned __int64)(unsigned int)piVar2[9] != (uVar3 & 0xffffffff)) {
            piVar2[9] = (int)uVar3;
            *(unsigned int *)(*(int *)(piVar2[5] + 0x8c0) + 0x90) = (unsigned int)((uVar3 & 0xffffffff) != 0);
            (**(int (***)())(*piVar2 + 0x24))(piVar2,uVar3);
          }
          puVar7 = puVar7 + 1;
          lVar6 = lVar6 + 1;
        } while (puVar7 != *(unsigned int **)(*piVar5 + 4));
      }
      piVar5 = piVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (piVar5 != *(int **)(param_1 + 0x24));
  }
  return;
}

