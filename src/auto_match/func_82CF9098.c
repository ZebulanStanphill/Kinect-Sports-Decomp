extern int fn_82D01B18();
extern int fn_82D02610();


void fn_82CF9098(int param_1,unsigned int *param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned int *puVar10;
  
  RtlEnterCriticalSection(param_1 + 4);
  if ((int)param_4 < 0x221) {
    puVar8 = param_2 + param_3;
    puVar3 = *(unsigned int **)((((int)param_4 + 0xf >> 4) + 0x3c) * 4 + param_1);
    iVar1 = puVar3[10];
    puVar9 = param_2;
    for (puVar10 = (unsigned int *)*puVar3;
        (puVar6 = puVar10, puVar9 < puVar8 &&
        (puVar6 = (unsigned int *)0x0, puVar10 != (unsigned int *)0x0));
        puVar10 = (unsigned int *)*puVar10) {
      *puVar9 = puVar10;
      puVar9 = puVar9 + 1;
    }
    *puVar3 = puVar6;
    puVar3[10] = puVar3[10] - ((int)puVar9 - (int)param_2 >> 2);
    while (puVar9 < puVar8) {
      puVar10 = puVar9;
      if ((unsigned int)puVar3[8] < (unsigned int)puVar3[9]) {
        do {
          if (puVar8 <= puVar10) break;
          *puVar10 = puVar3[8];
          puVar10 = puVar10 + 1;
          iVar2 = puVar3[8];
          puVar3[8] = puVar3[1] + iVar2;
        } while ((unsigned int)(puVar3[1] + iVar2) < (unsigned int)puVar3[9]);
        puVar3[10] = puVar3[10] - ((int)puVar10 - (int)puVar9 >> 2);
        puVar9 = puVar10;
      }
      else {
        uVar4 = fn_82D01B18(puVar3);
        *puVar9 = uVar4;
        puVar9 = puVar9 + 1;
      }
    }
    *(int *)(param_1 + 0x20) = (puVar3[10] - iVar1) * puVar3[1] + *(int *)(param_1 + 0x20);
  }
  else if (0 < param_3) {
    param_2 = param_2 + -1;
    do {
      uVar4 = (**(int (***)())(*(int *)(param_1 + 0x2c) + 4))((int *)(param_1 + 0x2c),param_4);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      *param_2 = uVar4;
    } while (param_3 != 0);
  }
  uVar7 = *(int *)(param_1 + 0xec) - *(int *)(param_1 + 0x20);
  uVar5 = *(unsigned int *)(param_1 + 0x24);
  if (*(unsigned int *)(param_1 + 0x24) < uVar7) {
    uVar5 = uVar7;
  }
  *(unsigned int *)(param_1 + 0x24) = uVar5;
  if (*(unsigned int *)(param_1 + 0x8fc) <= uVar7) {
    fn_82D02610(1);
  }
  RtlLeaveCriticalSection(param_1 + 4);
  return;
}

