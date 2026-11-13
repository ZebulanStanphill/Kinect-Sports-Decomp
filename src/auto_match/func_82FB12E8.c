extern int fn_82FA5190();
extern int fn_82FAF408();
extern unsigned int lbl_831BC768;


void fn_82FB12E8(int param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int *piVar7;
  __int64 lVar8;
  
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 != *(int *)(param_1 + 0x9c)) {
    do {
      if ((unsigned __int64)*(unsigned int *)(iVar3 + 4) == (param_2 & 0xffffffff)) {
        param_3 = (*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98)) / 0x18;
        if (1 < param_3) {
          puVar5 = (unsigned int *)(*(int *)(param_1 + 0x9c) + -0x1c);
          puVar4 = (unsigned int *)(iVar3 + -4);
          lVar8 = 6;
          do {
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
            *puVar4 = *puVar5;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + -0x18;
      }
      else {
        iVar3 = iVar3 + 0x18;
      }
    } while (iVar3 != *(int *)(param_1 + 0x9c));
  }
  uVar2 = lbl_831BC768;
  for (puVar6 = *(unsigned int **)(param_1 + 0x88);
      (puVar6 != *(unsigned int **)(param_1 + 0x8c) && ((unsigned __int64)*puVar6 != (param_2 & 0xffffffff)));
      puVar6 = puVar6 + 2) {
  }
  uVar1 = (unsigned int)(*(unsigned int **)(param_1 + 0x8c) != puVar6);
  piVar7 = (int *)(-(unsigned int)(uVar1 != 0) & (unsigned int)(puVar6 + 1));
  if (piVar7 != (int *)0x0) {
    puVar5 = (unsigned int *)*piVar7;
    if (puVar5 != (unsigned int *)0x0) {
      (**(int (***)())*puVar5)(puVar5,0,param_3,-uVar1);
      fn_82FA5190(uVar2,puVar5);
    }
    fn_82FAF408(param_1 + 0x88,param_2);
  }
  return;
}

