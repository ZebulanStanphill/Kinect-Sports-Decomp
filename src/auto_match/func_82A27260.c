extern unsigned int *auStack_60;
extern int fn_82A26920();
extern int fn_82A26C08();
extern int fn_82A27010();
extern int fn_82F691F0();


unsigned __int64
fn_82A27260(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned short *puVar6;
  unsigned short *puVar7;
  int iVar8;
  unsigned short *puVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned short uVar13;
  unsigned int *puVar12;
  unsigned __int64 uVar14;
  __int64 lVar15;
  __int64 lVar16;
  unsigned int auStack_60 [24];
  
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) < (param_5 & 0xffffffff)) {
    return 0;
  }
  puVar9 = (unsigned short *)param_3;
  uVar13 = *puVar9;
  bVar1 = *(unsigned char *)((int)puVar9 + 5);
  lVar15 = (unsigned __int64)uVar13 * 0x10 + param_3;
  if ((bVar1 & 0x10) == 0) {
    puVar6 = (unsigned short *)lVar15;
    bVar2 = *(unsigned char *)((int)puVar6 + 5);
    if ((bVar2 & 1) != 0) {
      return 0;
    }
    auStack_60[0] = (unsigned int)*puVar6 + (unsigned int)uVar13;
    if ((unsigned __int64)auStack_60[0] < (param_5 & 0xffffffff)) {
      return 0;
    }
    puVar3 = *(unsigned int **)(puVar6 + 6);
    puVar4 = *(unsigned int **)(puVar6 + 4);
    if (((unsigned __int64)*puVar3 == (unsigned __int64)puVar4[1]) &&
       ((unsigned __int64)*puVar3 == (lVar15 + 8U & 0xffffffff))) {
      *puVar3 = (unsigned int)puVar4;
      puVar4[1] = (unsigned int)puVar3;
      if ((puVar4 == puVar3) && (uVar13 = *puVar6, uVar13 < 0x80)) {
        iVar8 = ((uVar13 >> 5) + 0x58) * 4;
        *(unsigned int *)(iVar8 + param_1) = 1 << (uVar13 & 0x1f) ^ *(unsigned int *)(iVar8 + param_1);
      }
    }
    if ((*(unsigned char *)((int)puVar6 + 5) & 4) != 0) {
      uVar11 = (unsigned __int64)*puVar6 * 0x10 - 0x18;
      if (((*(unsigned char *)((int)puVar6 + 5) & 2) != 0) && (4 < (uVar11 & 0xffffffff))) {
        uVar11 = (unsigned __int64)*puVar6 * 0x10 - 0x1c;
      }
      RtlCompareMemoryUlong(lVar15 + 0x18,uVar11,0xfffffffffeeefeee);
    }
    uVar11 = (unsigned __int64)auStack_60[0];
    *(unsigned int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (unsigned int)*puVar6;
  }
  else {
    auStack_60[0] = (int)((param_5 - uVar13 & 0xffffffff) << 4) + 0xffffU & 0xffff0000;
    lVar15 = fn_82A26920(param_1,*(unsigned int *)((*(unsigned char *)(puVar9 + 2) + 0x18) * 4 + param_1),
                           auStack_60,lVar15);
    if (lVar15 == 0) {
      return 0;
    }
    auStack_60[0] = auStack_60[0] >> 4;
    iVar8 = fn_82A26C08(param_1,lVar15,auStack_60,0);
    bVar2 = *(unsigned char *)(iVar8 + 5);
    uVar11 = (unsigned __int64)*puVar9 + (unsigned __int64)auStack_60[0];
    if ((uVar11 & 0xffffffff) < (param_5 & 0xffffffff)) {
      fn_82A27010(param_1,iVar8);
      *(unsigned int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + auStack_60[0];
      return 0;
    }
  }
  uVar11 = uVar11 - param_5;
  auStack_60[0] = (unsigned int)uVar11;
  uVar14 = (unsigned __int64)*puVar9 * 0x10 - (unsigned __int64)*(unsigned char *)(puVar9 + 3);
  if ((uVar11 & 0xffffffff) < 3) {
    param_5 = uVar11 + param_5;
    uVar11 = 0;
    auStack_60[0] = 0;
  }
  if ((bVar1 & 2) != 0) {
    uVar13 = *puVar9;
    iVar8 = (int)((param_5 & 0xffffffff) << 4);
    *(unsigned __int64 *)((int)puVar9 + iVar8 + -0x10) = *(unsigned __int64 *)(puVar9 + (unsigned int)uVar13 * 8 + -8);
    *(unsigned __int64 *)((int)puVar9 + iVar8 + -8) = *(unsigned __int64 *)(puVar9 + (unsigned int)uVar13 * 8 + -4);
    uVar11 = (unsigned __int64)auStack_60[0];
  }
  uVar13 = (unsigned short)param_5;
  if ((uVar11 & 0xffffffff) == 0) {
    *(unsigned char *)((int)puVar9 + 5) = *(unsigned char *)((int)puVar9 + 5) | bVar2 & 0x10;
    *(char *)(puVar9 + 3) = (char)((param_5 & 0xffffffff) << 4) - (char)param_4;
    *puVar9 = uVar13;
    if ((bVar2 & 0x10) == 0) {
      *(unsigned short *)((int)puVar9 + (int)((param_5 & 0xffff) << 4) + 2) = uVar13;
    }
    else {
      *(unsigned short **)(*(int *)((*(unsigned char *)(puVar9 + 2) + 0x18) * 4 + param_1) + 0x40) = puVar9;
    }
    goto LAB_82a277a4;
  }
  lVar15 = (param_5 & 0xfffffff) * 0x10;
  lVar16 = lVar15 + param_3;
  *puVar9 = uVar13;
  *(char *)(puVar9 + 3) = (char)lVar15 - (char)param_4;
  puVar6 = (unsigned short *)lVar16;
  puVar6[1] = uVar13;
  bVar1 = *(unsigned char *)(puVar9 + 2);
  *(unsigned char *)(puVar6 + 2) = bVar1;
  uVar13 = (unsigned short)auStack_60[0];
  if ((bVar2 & 0x10) == 0) {
    lVar15 = ((unsigned __int64)auStack_60[0] & 0xfffffff) * 0x10 + lVar16;
    puVar7 = (unsigned short *)lVar15;
    bVar1 = *(unsigned char *)((int)puVar7 + 5);
    if ((bVar1 & 1) == 0) {
      puVar3 = *(unsigned int **)(puVar7 + 6);
      puVar4 = *(unsigned int **)(puVar7 + 4);
      if (((unsigned __int64)*puVar3 == (unsigned __int64)puVar4[1]) &&
         ((unsigned __int64)*puVar3 == (lVar15 + 8U & 0xffffffff))) {
        *puVar3 = (unsigned int)puVar4;
        puVar4[1] = (unsigned int)puVar3;
        if ((puVar4 == puVar3) && (uVar13 = *puVar7, uVar13 < 0x80)) {
          iVar8 = ((uVar13 >> 5) + 0x58) * 4;
          *(unsigned int *)(iVar8 + param_1) = 1 << (uVar13 & 0x1f) ^ *(unsigned int *)(iVar8 + param_1);
        }
      }
      if ((*(unsigned char *)((int)puVar7 + 5) & 4) != 0) {
        uVar11 = (unsigned __int64)*puVar7 * 0x10 - 0x18;
        if (((*(unsigned char *)((int)puVar7 + 5) & 2) != 0) && (4 < (uVar11 & 0xffffffff))) {
          uVar11 = (unsigned __int64)*puVar7 * 0x10 - 0x1c;
        }
        RtlCompareMemoryUlong(lVar15 + 0x18,uVar11,0xfffffffffeeefeee);
      }
      *(unsigned int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) - (unsigned int)*puVar7;
      auStack_60[0] = *puVar7 + auStack_60[0];
      *(unsigned char *)((int)puVar6 + 5) = bVar1;
      if (0xf000 < auStack_60[0]) {
        fn_82A27010(param_1,lVar16);
        goto LAB_82a277a4;
      }
      *puVar6 = (unsigned short)auStack_60[0];
      if ((bVar1 & 0x10) == 0) {
        puVar6[auStack_60[0] * 8 + 1] = (unsigned short)auStack_60[0];
      }
      else {
        *(unsigned short **)(*(int *)((*(unsigned char *)(puVar6 + 2) + 0x18) * 4 + param_1) + 0x40) = puVar6;
      }
      *(unsigned char *)((int)puVar6 + 5) = *(unsigned char *)((int)puVar6 + 5) & 0xf8;
      uVar10 = auStack_60[0] & 0xffff;
      if (0x7f < uVar10) {
        for (puVar12 = *(unsigned int **)(param_1 + 0x180);
            ((unsigned int *)(param_1 + 0x180) != puVar12 && (*(unsigned short *)(puVar12 + -2) < uVar10));
            puVar12 = (unsigned int *)*puVar12) {
        }
        goto LAB_82a2776c;
      }
      goto LAB_82a2770c;
    }
    *(unsigned char *)((int)puVar6 + 5) = bVar2 & 0xef;
    *puVar6 = uVar13;
    puVar6[auStack_60[0] * 8 + 1] = uVar13;
    *(unsigned char *)((int)puVar6 + 5) = *(unsigned char *)((int)puVar6 + 5) & 0xf8;
    if ((auStack_60[0] & 0xffff) < 0x80) goto LAB_82a275bc;
    for (puVar12 = *(unsigned int **)(param_1 + 0x180);
        ((unsigned int *)(param_1 + 0x180) != puVar12 &&
        ((unsigned int)*(unsigned short *)(puVar12 + -2) < (auStack_60[0] & 0xffff)));
        puVar12 = (unsigned int *)*puVar12) {
    }
  }
  else {
    *(unsigned short **)(*(int *)((bVar1 + 0x18) * 4 + param_1) + 0x40) = puVar6;
    *(unsigned char *)((int)puVar6 + 5) = bVar2;
    *(unsigned char *)((int)puVar6 + 5) = bVar2 & 0xf8;
    *puVar6 = uVar13;
    if ((auStack_60[0] & 0xffff) < 0x80) {
LAB_82a275bc:
      uVar10 = auStack_60[0] & 0xffff;
LAB_82a2770c:
      puVar12 = (unsigned int *)((uVar10 + 0x30) * 8 + param_1);
      if ((unsigned int *)*puVar12 == puVar12) {
        iVar8 = ((*puVar6 >> 5) + 0x58) * 4;
        *(unsigned int *)(iVar8 + param_1) = 1 << (*puVar6 & 0x1f) | *(unsigned int *)(iVar8 + param_1);
      }
    }
    else {
      for (puVar12 = *(unsigned int **)(param_1 + 0x180);
          ((unsigned int *)(param_1 + 0x180) != puVar12 &&
          ((unsigned int)*(unsigned short *)(puVar12 + -2) < (auStack_60[0] & 0xffff)));
          puVar12 = (unsigned int *)*puVar12) {
      }
    }
  }
LAB_82a2776c:
  puVar5 = (unsigned int *)puVar12[1];
  *(unsigned int **)(puVar6 + 4) = puVar12;
  *(unsigned int **)(puVar6 + 6) = puVar5;
  *puVar5 = puVar6 + 4;
  puVar12[1] = puVar6 + 4;
  *(unsigned int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + auStack_60[0];
LAB_82a277a4:
  if (((param_2 & 8) != 0) && ((uVar14 & 0xffffffff) < (param_4 & 0xffffffff))) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar14 + param_3 + 0x10,0,param_4 - uVar14);
  }
  *(unsigned char *)((int)puVar9 + 5) =
       (unsigned char)((param_2 & 0xffffffff) >> 4) & 0xe0 | *(unsigned char *)((int)puVar9 + 5) & 0x1f;
  return 1;
}

