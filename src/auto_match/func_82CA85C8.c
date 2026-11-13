extern unsigned int lbl_820FDF70;
extern unsigned int lbl_820FDF88;


void fn_82CA85C8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned char *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned char *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned int uVar13;
  int iVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  
  iVar7 = *(int *)(param_1 + 0x3a2c);
  iVar2 = (*(int *)(param_1 + 0x3a28) + iVar7) * 4;
  iVar1 = *(int *)(&lbl_820FDF70 + iVar2);
  iVar2 = *(int *)(&lbl_820FDF88 + iVar2);
  iVar3 = *(int *)((iVar7 + 0xb2) * 0x54 + param_1);
  iVar7 = iVar7 * 0x54 + param_1;
  uVar16 = *(unsigned int *)(iVar7 + 0x3a30);
  uVar15 = *(unsigned int *)(iVar7 + 0x3a38);
  iVar7 = *(int *)(iVar7 + 0x3a64);
  if (iVar2 == 2) {
    uVar16 = uVar16 + 0x1f & 0xffffffe0;
  }
  if (iVar1 == 2) {
    uVar15 = uVar15 + 0x1f & 0xffffffe0;
  }
  if (*(int *)(param_1 + 0xf8c) == 0) {
    iVar14 = (int)uVar16 >> 1;
    uVar13 = (int)uVar15 >> 1;
  }
  else {
    iVar14 = (int)uVar16 >> 2;
    uVar13 = uVar15;
  }
  iVar6 = param_5;
  iVar12 = param_6;
  iVar5 = param_7;
  if (iVar2 == 2) {
    (**(int (***)())(param_1 + 0x3e04))(param_2,param_3,param_4,param_5,param_6,param_7,uVar16,uVar15);
    iVar6 = param_2;
    param_2 = param_5;
    iVar12 = param_3;
    param_3 = param_6;
    iVar5 = param_4;
    param_4 = param_7;
  }
  iVar9 = param_5;
  iVar10 = param_6;
  iVar11 = param_7;
  if (iVar1 == 2) {
    (**(int (***)())(param_1 + 0x3e08))(param_2,param_3,param_4,iVar6,iVar12,iVar5,uVar16,uVar15);
    iVar9 = iVar6;
    iVar10 = iVar12;
    iVar11 = iVar5;
  }
  iVar6 = 0;
  if (0 < (int)uVar15) {
    do {
      iVar12 = 0;
      if (0 < (int)uVar16) {
        puVar8 = (unsigned char *)(param_5 + -1);
        do {
          puVar4 = (unsigned char *)(iVar12 + iVar9);
          iVar12 = iVar12 + iVar2;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar4;
        } while (iVar12 < (int)uVar16);
      }
      iVar6 = iVar6 + iVar1;
      iVar9 = iVar1 * iVar7 + iVar9;
      param_5 = param_5 + *(int *)(param_1 + 0xcc);
    } while (iVar6 < (int)uVar15);
  }
  iVar7 = 0;
  if (0 < (int)uVar13) {
    do {
      iVar6 = 0;
      if (0 < iVar14) {
        puVar8 = (unsigned char *)(param_6 + -1);
        do {
          puVar4 = (unsigned char *)(iVar6 + iVar10);
          iVar6 = iVar6 + iVar2;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar4;
        } while (iVar6 < iVar14);
      }
      iVar7 = iVar7 + iVar1;
      iVar10 = iVar1 * iVar3 + iVar10;
      param_6 = param_6 + *(int *)(param_1 + 0xd0);
    } while (iVar7 < (int)uVar13);
  }
  iVar7 = 0;
  if (0 < (int)uVar13) {
    do {
      iVar6 = 0;
      if (0 < iVar14) {
        puVar8 = (unsigned char *)(param_7 + -1);
        do {
          puVar4 = (unsigned char *)(iVar6 + iVar11);
          iVar6 = iVar6 + iVar2;
          puVar8 = puVar8 + 1;
          *puVar8 = *puVar4;
        } while (iVar6 < iVar14);
      }
      iVar7 = iVar7 + iVar1;
      iVar11 = iVar1 * iVar3 + iVar11;
      param_7 = param_7 + *(int *)(param_1 + 0xd0);
    } while (iVar7 < (int)uVar13);
  }
  return;
}

