extern unsigned int *auStack_50;
extern unsigned int iStack_54;


void fn_82CF7020(int param_1,int param_2,int *param_3)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar4;
  __int64 lVar3;
  int *piVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  int *piVar9;
  __int64 lVar10;
  int iStack_54;
  unsigned char auStack_50 [1];
  
  uVar8 = *(unsigned int *)(param_1 + 8);
  uVar1 = *(unsigned int *)((param_2 + 0x25) * 4 + param_1);
  if (uVar8 == 0) {
    (**(int (***)())(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_3,uVar1);
  }
  else {
    iVar4 = param_2 * 8 + param_1;
    lVar6 = (__int64)((int)uVar8 >> 1) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 1) != 0);
    piVar9 = (int *)(iVar4 + 0xc);
    uVar8 = *(unsigned int *)(iVar4 + 0x10);
    uVar7 = (unsigned __int64)uVar8;
    while ((int)lVar6 < (int)uVar8) {
      lVar3 = uVar7 - lVar6;
      if ((int)lVar3 < 5) {
        if (0 < (int)lVar3) goto LAB_82cf70b0;
      }
      else {
        lVar3 = 4;
LAB_82cf70b0:
        piVar2 = &iStack_54;
        lVar10 = lVar3;
        do {
          piVar5 = (int *)*piVar9;
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + -1;
            *piVar9 = *piVar5;
          }
          piVar2 = piVar2 + 1;
          *piVar2 = (int)piVar5;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      uVar7 = uVar7 - lVar3;
      (**(int (***)())(**(int **)(param_1 + 4) + 0x1c))(*(int **)(param_1 + 4),auStack_50,lVar3,uVar1);
      uVar8 = (unsigned int)uVar7;
    }
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    *param_3 = *piVar9;
    *piVar9 = (int)param_3;
  }
  return;
}

