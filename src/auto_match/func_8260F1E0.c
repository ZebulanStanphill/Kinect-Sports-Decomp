extern int fn_82586B60();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8260F1E0(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (param_5 == 0) {
    uVar1 = *(unsigned int *)(param_3 + 0x50);
    uStack_38 = 1;
    uStack_34 = 8;
    if (uVar1 == 0) {
      iVar2 = **(int **)(param_1 + 0x60);
      iVar4 = fn_82586B60(param_3 + 0x10);
      puVar3 = *(unsigned int **)(iVar2 + 0x314);
      for (puVar7 = *(unsigned int **)(iVar2 + 0x310); puVar7 < puVar3; puVar7 = puVar7 + 2) {
        if (puVar7[1] == iVar4) {
          (**(int (***)())(*(int *)*puVar7 + 0xc))((int *)*puVar7,&uStack_38);
        }
      }
      return;
    }
    if ((uVar1 & 0xffff) == 0) {
      return;
    }
    for (puVar7 = *(unsigned int **)(**(int **)(param_1 + 0x60) + 0x310);
        puVar7 < *(unsigned int **)(**(int **)(param_1 + 0x60) + 0x314); puVar7 = puVar7 + 2) {
      piVar6 = (int *)*puVar7;
      if ((unsigned int)*(unsigned short *)(piVar6 + 0x22e) == (uVar1 & 0xffff)) goto LAB_8260f460;
    }
    piVar6 = (int *)0x0;
LAB_8260f460:
    if (piVar6 == (int *)0x0) {
      return;
    }
    puVar7 = &uStack_38;
  }
  else {
    if (param_5 != 1) {
      if (param_5 != 3) {
        return;
      }
      uVar1 = *(unsigned int *)(param_3 + 0x50);
      uStack_4c = 8;
      uStack_50 = 1;
      uStack_48 = 2;
      uStack_44 = 8;
      if (uVar1 == 0) {
        iVar2 = **(int **)(param_1 + 0x60);
        iVar4 = fn_82586B60(param_3 + 0x10);
        puVar3 = *(unsigned int **)(iVar2 + 0x314);
        for (puVar7 = *(unsigned int **)(iVar2 + 0x310); puVar7 < puVar3; puVar7 = puVar7 + 2) {
          if (puVar7[1] == iVar4) {
            (**(int (***)())(*(int *)*puVar7 + 0xc))((int *)*puVar7,&uStack_50);
          }
        }
        iVar2 = **(int **)(param_1 + 0x60);
        iVar4 = fn_82586B60(param_3 + 0x10);
        puVar3 = *(unsigned int **)(iVar2 + 0x314);
        for (puVar7 = *(unsigned int **)(iVar2 + 0x310); puVar7 < puVar3; puVar7 = puVar7 + 2) {
          if (puVar7[1] == iVar4) {
            (**(int (***)())(*(int *)*puVar7 + 0xc))((int *)*puVar7,&uStack_48);
          }
        }
        return;
      }
      if ((uVar1 & 0xffff) == 0) {
        return;
      }
      for (piVar5 = *(int **)(**(int **)(param_1 + 0x60) + 0x310);
          piVar5 < *(int **)(**(int **)(param_1 + 0x60) + 0x314); piVar5 = piVar5 + 2) {
        piVar6 = (int *)*piVar5;
        if ((unsigned int)*(unsigned short *)(piVar6 + 0x22e) == (uVar1 & 0xffff)) goto LAB_8260f26c;
      }
      piVar6 = (int *)0x0;
LAB_8260f26c:
      if (piVar6 == (int *)0x0) {
        return;
      }
      (**(int (***)())(*piVar6 + 0xc))(piVar6,&uStack_50);
      iVar2 = *piVar6;
      puVar7 = &uStack_48;
      goto LAB_8260f474;
    }
    uVar1 = *(unsigned int *)(param_3 + 0x50);
    stack_pair_40.first = 2;
    stack_pair_40.second = 8;
    if (uVar1 == 0) {
      iVar2 = **(int **)(param_1 + 0x60);
      iVar4 = fn_82586B60(param_3 + 0x10);
      puVar3 = *(unsigned int **)(iVar2 + 0x314);
      for (puVar7 = *(unsigned int **)(iVar2 + 0x310); puVar7 < puVar3; puVar7 = puVar7 + 2) {
        if (puVar7[1] == iVar4) {
          (**(int (***)())(*(int *)*puVar7 + 0xc))((int *)*puVar7,&stack_pair_40.first);
        }
      }
      return;
    }
    if ((uVar1 & 0xffff) == 0) {
      return;
    }
    for (puVar7 = *(unsigned int **)(**(int **)(param_1 + 0x60) + 0x310);
        puVar7 < *(unsigned int **)(**(int **)(param_1 + 0x60) + 0x314); puVar7 = puVar7 + 2) {
      piVar6 = (int *)*puVar7;
      if ((unsigned int)*(unsigned short *)(piVar6 + 0x22e) == (uVar1 & 0xffff)) goto LAB_8260f3a0;
    }
    piVar6 = (int *)0x0;
LAB_8260f3a0:
    if (piVar6 == (int *)0x0) {
      return;
    }
    puVar7 = &stack_pair_40.first;
  }
  iVar2 = *piVar6;
LAB_8260f474:
  (**(int (***)())(iVar2 + 0xc))(piVar6,puVar7);
  return;
}

