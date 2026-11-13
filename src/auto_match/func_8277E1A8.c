extern int fn_8267BE38();
extern int fn_8277C9C8();
extern int fn_8277CAA0();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_58;


void fn_8277E1A8(int param_1,unsigned int param_2,unsigned char param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  struct { int first; int second; } stack_pair_60;

  unsigned int uStack_58;
  
  uVar1 = *(unsigned int *)(param_1 + 0x28);
  if (uVar1 <= param_2) {
    if (*(unsigned int *)(param_1 + 0x2c) <= param_2) {
      stack_pair_60.first = 0;
      stack_pair_60.second = 0;
      uStack_58 = 0;
      fn_8277CAA0(&stack_pair_60.first,*(unsigned int *)(param_1 + 0x28),0);
      iVar3 = stack_pair_60.first;
      piVar9 = (int *)(param_1 + 0x24);
      uVar6 = 0;
      iVar8 = stack_pair_60.second;
      if (*(int *)(param_1 + 0x28) != 0) {
        do {
          puVar5 = (unsigned char *)(iVar8 + stack_pair_60.first);
          iVar8 = iVar8 + 1;
          puVar4 = (unsigned char *)(*piVar9 + uVar6);
          uVar6 = uVar6 + 1;
          *puVar5 = *puVar4;
        } while (uVar6 < *(unsigned int *)(param_1 + 0x28));
      }
      fn_8277C9C8(piVar9,param_2 + 1,0x20);
      iVar7 = 0;
      for (; iVar8 != 0; iVar8 = iVar8 + -1) {
        iVar2 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar2 + 1;
        puVar4 = (unsigned char *)(iVar3 + iVar7);
        iVar7 = iVar7 + 1;
        *(unsigned char *)(*piVar9 + iVar2) = *puVar4;
      }
      fn_8267BE38(iVar3);
    }
    if (*(unsigned int *)(param_1 + 0x28) <= param_2) {
      iVar8 = (param_2 - *(unsigned int *)(param_1 + 0x28)) + 1;
      do {
        iVar3 = *(int *)(param_1 + 0x28);
        *(int *)(param_1 + 0x28) = iVar3 + 1;
        *(unsigned char *)(*(int *)(param_1 + 0x24) + iVar3) = 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  *(unsigned char *)(*(int *)(param_1 + 0x24) + param_2) = param_3;
  if ((uVar1 == 0) && (param_2 != 0)) {
    **(unsigned char **)(param_1 + 0x24) = 0;
  }
  return;
}

