extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEA160();
extern int fn_82CEA280();
extern int fn_82CEA4B8();
extern int fn_82CEAAA0();
extern int fn_82CEAB00();
extern int fn_82D16610();
extern int fn_82D166F8();
extern int fn_82D16868();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned int * fn_82D16968(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar3;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned int *puVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  int iVar13;
  int *piVar14;
  unsigned int *puVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;

  iVar4 = fn_82CE5410();
  iVar4 = (**(int (***)())(**(int **)(iVar4 + 0x10) + 4))(*(int **)(iVar4 + 0x10),0x1c0);
  if (iVar4 == 0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    puVar5 = (unsigned int *)fn_82D16868();
  }
  *puVar5 = *param_1;
  puVar5[1] = param_1[1];
  puVar5[2] = param_1[2];
  puVar5[3] = param_1[3];
  puVar10 = (unsigned int *)((unsigned int)(param_1 + 0x34) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((unsigned int)(puVar5 + 0x34) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  piVar14 = puVar5 + 0x12;
  puVar10 = (unsigned int *)((unsigned int)(param_1 + 0x38) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((unsigned int)(puVar5 + 0x38) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (unsigned int *)((unsigned int)(param_1 + 0x3c) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((unsigned int)(puVar5 + 0x3c) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (unsigned int *)((unsigned int)(param_1 + 0x40) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((unsigned int)(puVar5 + 0x40) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (unsigned int *)((unsigned int)(param_1 + 0x44) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((unsigned int)(puVar5 + 0x44) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (unsigned int *)((int)param_1 + in_r0 + 0x120 & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((int)puVar5 + in_r0 + 0x120 & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (unsigned int *)((unsigned int)(param_1 + 0x4c) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((unsigned int)(puVar5 + 0x4c) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (unsigned int *)((unsigned int)(param_1 + 0x50) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((unsigned int)(puVar5 + 0x50) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (unsigned int *)((unsigned int)(param_1 + 0x54) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((unsigned int)(puVar5 + 0x54) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar10 = (unsigned int *)((unsigned int)(param_1 + 0x58) & 0xfffffff0);
  uVar7 = puVar10[1];
  uVar17 = puVar10[2];
  uVar18 = puVar10[3];
  puVar15 = (unsigned int *)((unsigned int)(puVar5 + 0x58) & 0xfffffff0);
  *puVar15 = *puVar10;
  puVar15[1] = uVar7;
  puVar15[2] = uVar17;
  puVar15[3] = uVar18;
  puVar5[0x68] = param_1[0x68];
  puVar5[0x69] = param_1[0x69];
  puVar5[0x6a] = param_1[0x6a];
  puVar5[0x6b] = param_1[0x6b];
  *(unsigned char *)(puVar5 + 0x6d) = *(unsigned char *)(param_1 + 0x6d);
  *(unsigned char *)((int)puVar5 + 0x1b5) = *(unsigned char *)((int)param_1 + 0x1b5);
  uVar1 = param_1[0x13];
  iVar4 = fn_82CE5410();
  if ((int)(puVar5[0x14] & 0x3fffffff) < (int)uVar1) {
    uVar11 = ((unsigned __int64)(unsigned int)puVar5[0x14] & 0x3fffffff) << 1;
    if ((int)uVar11 <= (int)uVar1) {
      uVar11 = (unsigned __int64)uVar1;
    }
    fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),piVar14,uVar11,0x40);
  }
  uVar7 = lbl_821AAD20;
  lVar12 = (unsigned __int64)uVar1 - (unsigned __int64)(unsigned int)puVar5[0x13];
  if (0 < lVar12) {
    puVar10 = (unsigned int *)(puVar5[0x13] * 0x40 + *piVar14 + 0x34);
    do {
      if (puVar10 != (unsigned int *)0x34) {
        puVar10[-2] = uVar7;
        *puVar10 = 0xffffffff;
      }
      puVar10 = puVar10 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  puVar5[0x13] = uVar1;
  iVar4 = 0;
  if (0 < (int)param_1[0x13]) {
    iVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      iVar13 = param_1[0x12] + iVar6;
      iVar9 = *piVar14 + iVar6;
      iVar6 = iVar6 + 0x40;
      puVar10 = (unsigned int *)(iVar13 + 0x10U & 0xfffffff0);
      uVar7 = puVar10[1];
      uVar17 = puVar10[2];
      uVar18 = puVar10[3];
      puVar15 = (unsigned int *)(iVar9 + 0x10U & 0xfffffff0);
      *puVar15 = *puVar10;
      puVar15[1] = uVar7;
      puVar15[2] = uVar17;
      puVar15[3] = uVar18;
      *(unsigned int *)(iVar9 + 0x20) = *(unsigned int *)(iVar13 + 0x20);
      *(unsigned int *)(iVar9 + 0x24) = *(unsigned int *)(iVar13 + 0x24);
      *(unsigned int *)(iVar9 + 0x28) = *(unsigned int *)(iVar13 + 0x28);
      *(unsigned int *)(iVar9 + 0x2c) = *(unsigned int *)(iVar13 + 0x2c);
      *(unsigned int *)(iVar9 + 0x30) = *(unsigned int *)(iVar13 + 0x30);
      *(unsigned int *)(iVar9 + 0x34) = *(unsigned int *)(iVar13 + 0x34);
    } while (iVar4 < (int)param_1[0x13]);
  }
  iVar4 = param_1[0x16];
  iVar6 = fn_82CE5410();
  if ((int)(puVar5[0x17] & 0x3fffffff) < iVar4) {
    iVar9 = (puVar5[0x17] & 0x3fffffff) << 1;
    if (iVar9 <= iVar4) {
      iVar9 = iVar4;
    }
    fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),puVar5 + 0x15,iVar9,0x10);
  }
  puVar5[0x16] = iVar4;
  iVar4 = 0;
  if (0 < (int)param_1[0x16]) {
    iVar6 = 0;
    do {
      iVar4 = iVar4 + 1;
      puVar10 = (unsigned int *)(iVar6 + param_1[0x15] & 0xfffffff0);
      uVar7 = puVar10[1];
      uVar17 = puVar10[2];
      uVar18 = puVar10[3];
      puVar15 = (unsigned int *)(puVar5[0x15] + iVar6 & 0xfffffff0);
      *puVar15 = *puVar10;
      puVar15[1] = uVar7;
      puVar15[2] = uVar17;
      puVar15[3] = uVar18;
      iVar6 = iVar6 + 0x10;
    } while (iVar4 < (int)param_1[0x16]);
  }
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  uStack_58 = 0xffffffff;
  iVar4 = fn_82CE5410();
  fn_82CEAB00(&stack_pair_60.first,*(unsigned int *)(iVar4 + 0x10),0);
  iVar4 = param_1[10];
  if (iVar4 != 0) {
    iVar6 = fn_82CE5410();
    fn_82CEAB00(&stack_pair_60.first,*(unsigned int *)(iVar6 + 0x10),iVar4);
    puVar10 = (unsigned int *)param_1[9];
    if (puVar10 != (unsigned int *)0x0) {
      for (puVar15 = (unsigned int *)*puVar10; puVar15 != (unsigned int *)0x0;
          puVar15 = (unsigned int *)*puVar15) {
        puVar10 = puVar15;
      }
      if (puVar10 != (unsigned int *)0x0) {
        do {
          uVar3 = fn_82D16610(puVar5 + 6,puVar10);
          iVar4 = fn_82CE5410();
          fn_82CEA160(&stack_pair_60.first,*(unsigned int *)(iVar4 + 0x10),puVar10,uVar3);
          puVar10 = (unsigned int *)puVar10[1];
        } while (puVar10 != (unsigned int *)0x0);
      }
    }
  }
  if (param_1[0x10] != 0) {
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    uStack_68 = 0xffffffff;
    iVar4 = fn_82CE5410();
    fn_82CEAB00(&stack_pair_70.first,*(unsigned int *)(iVar4 + 0x10),0);
    uVar7 = param_1[0x10];
    iVar4 = fn_82CE5410();
    fn_82CEAB00(&stack_pair_70.first,*(unsigned int *)(iVar4 + 0x10),uVar7);
    puVar10 = (unsigned int *)param_1[0xf];
    if (puVar10 != (unsigned int *)0x0) {
      puVar15 = (unsigned int *)*puVar10;
      while (puVar2 = puVar15, puVar2 != (unsigned int *)0x0) {
        puVar10 = puVar2;
        puVar15 = (unsigned int *)*puVar2;
      }
    }
    if (puVar10 != (unsigned int *)0x0) {
      do {
        iVar4 = fn_82D166F8(puVar5 + 0xc,puVar10);
        lVar12 = 3;
        puVar15 = (unsigned int *)(iVar4 + 4);
        do {
          uVar7 = fn_82CEA280(&stack_pair_60.first,puVar15[1],0);
          lVar12 = lVar12 + -1;
          puVar15 = puVar15 + 1;
          *puVar15 = uVar7;
        } while (lVar12 != 0);
        lVar12 = 3;
        puVar16 = (unsigned int *)(iVar4 + 0x14);
        iVar6 = iVar4;
        do {
          uVar8 = fn_82CEA280(&stack_pair_70.first,(*puVar16 & 3) + (*puVar16 & 0xfffffffc),0);
          uVar1 = uVar8 & 0xfffffffc;
          if (uVar1 == 0) {
            iVar9 = fn_82CE5410();
            fn_82CEA160(&stack_pair_70.first,*(unsigned int *)(iVar9 + 0x10),
                              (int)puVar10 + (iVar6 - iVar4),iVar6);
          }
          else {
            fn_82CEAAA0(&stack_pair_70.first,(*puVar16 & 3) + (*puVar16 & 0xfffffffc));
            *puVar16 = (uVar8 & 3) + uVar1;
            *(int *)(((uVar8 & 3) + 5) * 4 + uVar1) = iVar6;
          }
          lVar12 = lVar12 + -1;
          puVar16 = puVar16 + 1;
          iVar6 = iVar6 + 1;
        } while (lVar12 != 0);
        puVar10 = (unsigned int *)puVar10[1];
      } while (puVar10 != (unsigned int *)0x0);
    }
    iVar4 = fn_82CE5410();
    fn_82CEA4B8(&stack_pair_70.first,*(unsigned int *)(iVar4 + 0x10));
    fn_82BA02A8(&stack_pair_70.first);
  }
  iVar4 = fn_82CE5410();
  fn_82CEA4B8(&stack_pair_60.first,*(unsigned int *)(iVar4 + 0x10));
  fn_82BA02A8(&stack_pair_60.first);
  return puVar5;
}
