extern unsigned int lbl_82161138;
extern unsigned int lbl_82161150;


void fn_82F02E20(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned char *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x6a4);
  iVar3 = (*(int *)(param_1 + 0x10) + iVar1) * 4;
  iVar2 = *(int *)(&lbl_82161138 + iVar3);
  iVar3 = *(int *)(&lbl_82161150 + iVar3);
  iVar7 = *(int *)((iVar1 + 0x14) * 0x58 + param_1);
  iVar4 = 0;
  iVar1 = *(int *)(iVar1 * 0x58 + param_1 + 0x6e4);
  if (0 < *(int *)(param_1 + 0x550)) {
    iVar5 = *(int *)(param_1 + 0x548);
    iVar9 = param_5;
    do {
      iVar8 = 0;
      if (0 < iVar5) {
        puVar6 = (unsigned char *)(param_2 + -1);
        do {
          puVar6 = puVar6 + 1;
          *(unsigned char *)(iVar8 + iVar9) = *puVar6;
          iVar8 = iVar8 + iVar3;
          iVar5 = *(int *)(param_1 + 0x548);
        } while (iVar8 < iVar5);
      }
      iVar4 = iVar4 + iVar2;
      param_2 = param_2 + iVar7;
      iVar9 = *(int *)(param_1 + 0x564) * iVar2 + iVar9;
    } while (iVar4 < *(int *)(param_1 + 0x550));
  }
  iVar7 = *(int *)(param_1 + 0x55c);
  iVar4 = 0;
  if (0 < iVar7) {
    iVar5 = *(int *)(param_1 + 0x554);
    iVar9 = param_6;
    do {
      iVar7 = 0;
      if (0 < iVar5) {
        puVar6 = (unsigned char *)(param_3 + -1);
        do {
          puVar6 = puVar6 + 1;
          *(unsigned char *)(iVar7 + iVar9) = *puVar6;
          iVar7 = iVar7 + iVar3;
          iVar5 = *(int *)(param_1 + 0x554);
        } while (iVar7 < iVar5);
      }
      iVar4 = iVar4 + iVar2;
      iVar7 = *(int *)(param_1 + 0x55c);
      param_3 = param_3 + iVar1;
      iVar9 = *(int *)(param_1 + 0x568) * iVar2 + iVar9;
    } while (iVar4 < iVar7);
  }
  iVar4 = 0;
  if (0 < iVar7) {
    iVar7 = *(int *)(param_1 + 0x554);
    iVar5 = param_7;
    do {
      iVar9 = 0;
      if (0 < iVar7) {
        puVar6 = (unsigned char *)(param_4 + -1);
        do {
          puVar6 = puVar6 + 1;
          *(unsigned char *)(iVar9 + iVar5) = *puVar6;
          iVar9 = iVar9 + iVar3;
          iVar7 = *(int *)(param_1 + 0x554);
        } while (iVar9 < iVar7);
      }
      iVar4 = iVar4 + iVar2;
      param_4 = param_4 + iVar1;
      iVar5 = *(int *)(param_1 + 0x568) * iVar2 + iVar5;
    } while (iVar4 < *(int *)(param_1 + 0x55c));
  }
  if (iVar3 == 2) {
    (**(int (***)())(param_1 + 0x820))
              (param_5,param_6,param_7,iVar2,*(unsigned int *)(param_1 + 0x548),
               *(unsigned int *)(param_1 + 0x550),*(unsigned int *)(param_1 + 0x554));
  }
  if (iVar2 == 2) {
    (**(int (***)())(param_1 + 0x824))
              (param_5,param_6,param_7,*(unsigned int *)(param_1 + 0x548),
               *(unsigned int *)(param_1 + 0x550),*(unsigned int *)(param_1 + 0x554),
               *(unsigned int *)(param_1 + 0x55c),*(unsigned int *)(param_1 + 0x564));
  }
  return;
}

