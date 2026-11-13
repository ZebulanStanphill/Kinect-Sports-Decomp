extern unsigned int *auStack_60;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D41D58();
extern int fn_82D441E8();
extern int fn_82D48E38();
extern unsigned int lbl_821385C8;
extern unsigned int lbl_821385EC;


unsigned int * fn_82D43378(unsigned int *param_1,int param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  int in_r0;
  int iVar8;
  unsigned int uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  int iVar12;
  unsigned short *puVar14;
  __int64 lVar13;
  int iVar15;
  unsigned int *puVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  unsigned int auStack_60;
  
  fn_82D48E38(param_1,0xe,1);
  *param_1 = &lbl_821385EC;
  param_1[4] = &lbl_821385C8;
  *(unsigned char *)(param_1 + 8) = 0;
  *(unsigned char *)((int)param_1 + 0x21) = 1;
  *(unsigned short *)(param_1 + 10) = 0;
  *(unsigned short *)((int)param_1 + 0x22) = 0;
  puVar17 = param_1 + 0x2d;
  *(unsigned short *)((int)param_1 + 0x2a) = 1;
  puVar16 = param_1 + 0x33;
  param_1[0xb] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  *(unsigned char *)((int)param_1 + 0x69) = 0;
  puVar4 = (unsigned int *)((int)param_1 + in_r0 + 0x50 & 0xfffffff0);
  *puVar4 = in_register_000100d0;
  puVar4[1] = in_register_000100d4;
  puVar4[2] = in_register_000100d8;
  puVar4[3] = in_vr13;
  param_1[0x1c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x80000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x80000000;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0x80000000;
  puVar4 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uVar9 = puVar4[1];
  uVar18 = puVar4[2];
  uVar19 = puVar4[3];
  puVar5 = (unsigned int *)((unsigned int)(param_1 + 0x20) & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar9;
  puVar5[2] = uVar18;
  puVar5[3] = uVar19;
  param_1[0x39] = *(unsigned int *)(param_2 + 0x50);
  param_1[0x2c] = *(unsigned int *)(param_2 + 0x30);
  *(unsigned char *)(param_1 + 0x36) = *(unsigned char *)(param_2 + 0x4c);
  iVar8 = fn_82CE5410();
  uVar2 = param_1[0x35] & 0x3fffffff;
  piVar1 = *(int **)(iVar8 + 0x10);
  if ((int)uVar2 < *(int *)(param_2 + 0x44)) {
    if ((param_1[0x35] & 0x80000000) == 0) {
      (**(int (***)())(*piVar1 + 0x10))(piVar1,*puVar16,uVar2,2);
    }
    auStack_60 = *(unsigned int *)(param_2 + 0x44);
    uVar9 = (**(int (***)())(*piVar1 + 0xc))(piVar1,&auStack_60,2);
    *puVar16 = uVar9;
    param_1[0x35] = auStack_60;
  }
  uVar2 = *(unsigned int *)(param_2 + 0x44);
  uVar10 = (unsigned __int64)uVar2;
  puVar14 = (unsigned short *)*puVar16;
  param_1[0x34] = uVar2;
  if (0 < (int)uVar2) {
    iVar8 = *(int *)(param_2 + 0x40) - (int)puVar14;
    do {
      *puVar14 = *(unsigned short *)((int)puVar14 + iVar8);
      puVar14 = puVar14 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar2 = *(unsigned int *)(param_2 + 0x38);
  if (uVar2 == 1) {
    *puVar17 = (unsigned int)(param_1 + 8);
    param_1[0x2e] = 1;
    param_1[0x2f] = 0x80000001;
  }
  else {
    iVar8 = fn_82CE5410();
    if ((int)(param_1[0x2f] & 0x3fffffff) < (int)uVar2) {
      uVar10 = ((unsigned __int64)(unsigned int)param_1[0x2f] & 0x3fffffff) << 1;
      if ((int)uVar10 <= (int)uVar2) {
        uVar10 = (unsigned __int64)uVar2;
      }
      fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),puVar17,uVar10,0x60);
    }
    uVar3 = param_1[0x2e];
    lVar11 = (unsigned __int64)uVar2 - (unsigned __int64)uVar3;
    if (0 < lVar11) {
      lVar13 = ((unsigned __int64)uVar3 + ((unsigned __int64)uVar3 & 0x7fffffff) * 2 & 0x7ffffff) * 0x20 +
               (unsigned __int64)*puVar17 + 8;
      do {
        if (lVar13 != 8) {
          puVar14 = (unsigned short *)lVar13;
          *(unsigned char *)(puVar14 + -4) = 0;
          *(unsigned char *)((int)puVar14 + -7) = 1;
          *puVar14 = 0;
          puVar14[-3] = 0;
          puVar14[1] = 1;
          *(unsigned int *)(puVar14 + 2) = 0;
          *(unsigned int *)(puVar14 + -2) = 0;
          *(unsigned int *)(puVar14 + 4) = 0;
          *(unsigned char *)((int)puVar14 + 0x41) = 0;
          puVar4 = (unsigned int *)((unsigned int)(puVar14 + 0x14) & 0xfffffff0);
          *puVar4 = in_register_000100d0;
          puVar4[1] = in_register_000100d4;
          puVar4[2] = in_register_000100d8;
          puVar4[3] = in_vr13;
          *(unsigned int *)(puVar14 + 0x24) = 0;
        }
        lVar13 = lVar13 + 0x60;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    param_1[0x2e] = uVar2;
  }
  param_1[0x37] = 0;
  iVar8 = 0;
  if (0 < *(int *)(param_2 + 0x38)) {
    iVar15 = 0;
    iVar12 = 0;
    do {
      iVar8 = iVar8 + 1;
      *(unsigned int *)(*puVar17 + iVar15 + 0x14) =
           *(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 0x1c);
      *(unsigned int *)(*puVar17 + iVar15 + 4) =
           *(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 0x20);
      *(short *)(*puVar17 + iVar15 + 8) =
           (short)*(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 0x24);
      *(unsigned char *)(*puVar17 + iVar15 + 1) =
           *(unsigned char *)(*(int *)(param_2 + 0x34) + iVar12 + 0x11);
      *(unsigned int *)(*puVar17 + iVar15 + 0xc) =
           *(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 0x28);
      *(short *)(*puVar17 + iVar15 + 2) =
           (short)*(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 0x2c);
      *(short *)(*puVar17 + iVar15 + 10) =
           (short)*(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 0x30);
      *(unsigned int *)(*puVar17 + iVar15 + 0x18) = *(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12)
      ;
      *(unsigned int *)(*puVar17 + iVar15 + 0x1c) =
           *(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 4);
      *(unsigned int *)(*puVar17 + iVar15 + 0x20) =
           *(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 8);
      *(unsigned int *)(*puVar17 + iVar15 + 0x40) =
           *(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 0xc);
      *(unsigned char *)(*puVar17 + iVar15 + 0x48) =
           *(unsigned char *)(*(int *)(param_2 + 0x34) + iVar12 + 0x10);
      *(unsigned int *)(*puVar17 + iVar15 + 0x44) =
           *(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 0x14);
      *(unsigned int *)(*puVar17 + iVar15 + 0x4c) =
           *(unsigned int *)(*(int *)(param_2 + 0x34) + iVar12 + 0x34);
      puVar4 = (unsigned int *)(in_r0 + *puVar17 + iVar15 + 0x30 & 0xfffffff0);
      *puVar4 = in_register_000100d0;
      puVar4[1] = in_register_000100d4;
      puVar4[2] = in_register_000100d8;
      puVar4[3] = in_vr13;
      iVar6 = *(int *)(param_2 + 0x34) + iVar12;
      iVar7 = *puVar17 + iVar15;
      iVar12 = iVar12 + 0x38;
      iVar15 = iVar15 + 0x60;
      *(char *)(iVar7 + 0x49) = (char)*(unsigned int *)(iVar6 + 0x18);
    } while (iVar8 < *(int *)(param_2 + 0x38));
  }
  fn_82D41D58(param_1);
  uVar9 = fn_82D441E8(param_1 + 4);
  param_1[0x38] = uVar9;
  return param_1;
}

