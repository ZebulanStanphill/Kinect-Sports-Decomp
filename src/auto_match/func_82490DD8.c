extern int fn_82490CB8();


void fn_82490DD8(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  
  lVar3 = fn_82490CB8();
  if ((int)lVar3 < 1) {
    lVar3 = 1 - lVar3;
    do {
      puVar5 = *(unsigned int **)(param_1 + 4);
      puVar7 = *(unsigned int **)(param_1 + 0x24);
      uVar1 = *puVar5;
      for (puVar8 = *(unsigned int **)(param_1 + 0x20); puVar8 != puVar7; puVar8 = puVar8 + 1) {
        (**(int (***)())(*(int *)*puVar8 + 0x18))((int *)*puVar8,uVar1,uVar1);
      }
      puVar8 = *(unsigned int **)(param_1 + 8);
      puVar7 = puVar5 + 2;
      if (puVar5 + 2 != puVar8) {
        puVar5 = puVar5 + -2;
        do {
          puVar5[2] = *puVar7;
          puVar2 = puVar7 + 1;
          puVar7 = puVar7 + 2;
          puVar5[3] = *puVar2;
          puVar5 = puVar5 + 2;
        } while (puVar7 != puVar8);
      }
      iVar6 = *(int *)(param_1 + 8) + -8;
      for (iVar4 = iVar6; iVar4 != *(int *)(param_1 + 8); iVar4 = iVar4 + 8) {
      }
      lVar3 = lVar3 + -1;
      *(int *)(param_1 + 8) = iVar6;
    } while (lVar3 != 0);
  }
  return;
}

