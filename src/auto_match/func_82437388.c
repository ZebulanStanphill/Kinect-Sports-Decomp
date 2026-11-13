extern int fn_8225F160();
extern int fn_822ABA88();
extern int fn_82436130();
extern float lbl_82005748;
extern unsigned int lbl_8328D41C;


void fn_82437388(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int aiStack_40;
  
  iVar5 = *(int *)(param_1 + 0x40);
  uVar6 = 0;
  iVar1 = *(int *)(iVar5 + 0x114);
  puVar2 = *(unsigned int **)(*(int *)(*(int *)(iVar5 + 4) + 0x40) + 0x208);
  uVar3 = *puVar2;
  if (uVar3 == 0) {
    uVar6 = puVar2[1];
  }
  else if (uVar3 == 1) {
    uVar6 = puVar2[2];
  }
  else if (uVar3 < 3) {
    uVar6 = puVar2[3];
  }
  else if (uVar3 == 3) {
    uVar6 = puVar2[4];
  }
  if (iVar1 == 1) {
    uVar6 = uVar6 + 0x34;
  }
  else if (iVar1 == 2) {
    uVar6 = uVar6 + 0x5c;
  }
  else if (iVar1 == 3) {
    uVar6 = uVar6 + 0xc4;
  }
  else if (iVar1 == 4) {
    uVar6 = uVar6 + 0xa4;
  }
  else if (iVar1 == 5) {
    uVar6 = uVar6 + 0x84;
  }
  *(int *)(iVar5 + 0x118) = (int)(*(float *)(uVar6 + 4) * lbl_82005748);
  iVar5 = fn_8225F160();
  if (((*(int *)(iVar5 + 0x14) == 2) || (iVar5 = fn_8225F160(), *(int *)(iVar5 + 0x14) == 3))
     || (iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x40) + 4) + 0x40),
        (*(int *)(iVar5 + 0x1c8) - *(int *)(iVar5 + 0x1c4) & 0xfffffffcU) == 4)) {
    piVar7 = *(int **)(param_1 + 0x40);
    iVar8 = 0;
    iVar1 = *piVar7;
    iVar5 = piVar7[0x46];
    if (0 < *(int *)(*(int *)(iVar1 + 0x174) + 0xbc)) {
      iVar9 = 0;
      do {
        piVar7 = *(int **)(**(int **)(iVar1 + 8) + iVar9);
        uVar4 = fn_822ABA88(*(unsigned int *)(piVar7[4] * 4 + *piVar7),0);
        fn_82436130(&aiStack_40,param_1,uVar4);
        if (aiStack_40 != lbl_8328D41C) {
          if (*(int *)(*(int *)(param_1 + 0x40) + 0xf8) == 0) {
            if (iVar5 < aiStack_40) goto LAB_82437524;
          }
          else if (aiStack_40 < iVar5) {
LAB_82437524:
            iVar5 = aiStack_40;
          }
        }
        piVar7 = *(int **)(param_1 + 0x40);
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
        iVar1 = *piVar7;
      } while (iVar8 < *(int *)(*(int *)(iVar1 + 0x174) + 0xbc));
    }
    piVar7[0x46] = iVar5;
  }
  return;
}

