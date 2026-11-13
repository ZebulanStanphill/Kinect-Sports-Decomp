#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern unsigned int lbl_8323B1A0;
extern unsigned int stack0x00000000;


void fn_82D1D8F0(int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  int iVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned int auStack_80 [4];
  unsigned char auStack_70 [16];
  unsigned char auStack_60 [16];
  unsigned char auStack_50 [80];
  
  iVar12 = param_1[1];
  puVar2 = (unsigned int *)((unsigned int)(&lbl_8323B1A0 + in_r0) & 0xfffffff0);
  uVar15 = *puVar2;
  uVar16 = puVar2[1];
  uVar17 = puVar2[2];
  uVar18 = puVar2[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_70 + in_r0) & 0xfffffff0);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  uVar14 = 0;
  puVar2 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  iVar6 = iVar12 + 3 >> 2;
  puVar2 = (unsigned int *)((int)auStack_80 + in_r0 & 0xfffffff0);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  puVar2 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar2 = uVar15;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  iVar5 = fn_82CE5410();
  iVar12 = param_2[1];
  iVar11 = iVar12 + iVar6;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar11) {
    iVar4 = (param_2[2] & 0x3fffffffU) << 1;
    if (iVar11 < iVar4) {
      iVar11 = iVar4;
    }
    fn_82CE6310(*(unsigned int *)(iVar5 + 0x10),param_2,iVar11,0x30);
  }
  param_2[1] = iVar6 + param_2[1];
  uVar1 = param_1[1];
  uVar13 = 0;
  iVar12 = iVar12 * 0x30 + *param_2;
  if (3 < (int)uVar1) {
    iVar6 = 0;
    lVar7 = (((unsigned __int64)uVar1 - 4 & 0xffffffff) >> 2) + 1;
    uVar13 = lVar7 * 4 & 0xfffffffc;
    do {
      uVar8 = uVar14 + 1;
      puVar2 = (unsigned int *)(iVar6 + *param_1 & 0xfffffff0);
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar3 = (unsigned int *)
               ((int)auStack_80 + in_r0 + (int)((uVar14 & 0xffffffff) << 4) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      if ((int)uVar8 == 4) {
        uVar8 = 0;
        puVar2 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar17 = puVar2[2];
        uVar18 = puVar2[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
        uVar22 = *puVar2;
        uVar23 = puVar2[1];
        uVar24 = puVar2[2];
        uVar25 = puVar2[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
        uVar19 = puVar2[1];
        uVar20 = puVar2[2];
        uVar21 = puVar2[3];
        puVar3 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar19;
        puVar3[2] = uVar20;
        puVar3[3] = uVar21;
        puVar2 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        puVar2 = (unsigned int *)(iVar12 + 0x20U & 0xfffffff0);
        *puVar2 = uVar22;
        puVar2[1] = uVar23;
        puVar2[2] = uVar24;
        puVar2[3] = uVar25;
        iVar12 = iVar12 + 0x30;
      }
      uVar9 = uVar8 + 1;
      puVar2 = (unsigned int *)(iVar6 + *param_1 + 0x10U & 0xfffffff0);
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar3 = (unsigned int *)
               ((int)auStack_80 + in_r0 + (int)((uVar8 & 0xffffffff) << 4) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      if ((int)uVar9 == 4) {
        uVar9 = 0;
        puVar2 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar17 = puVar2[2];
        uVar18 = puVar2[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
        uVar22 = *puVar2;
        uVar23 = puVar2[1];
        uVar24 = puVar2[2];
        uVar25 = puVar2[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
        uVar19 = puVar2[1];
        uVar20 = puVar2[2];
        uVar21 = puVar2[3];
        puVar3 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar19;
        puVar3[2] = uVar20;
        puVar3[3] = uVar21;
        puVar2 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        puVar2 = (unsigned int *)(iVar12 + 0x20U & 0xfffffff0);
        *puVar2 = uVar22;
        puVar2[1] = uVar23;
        puVar2[2] = uVar24;
        puVar2[3] = uVar25;
        iVar12 = iVar12 + 0x30;
      }
      uVar14 = uVar9 + 1;
      puVar2 = (unsigned int *)((iVar6 + 0x30 + *param_1) - 0x10U & 0xfffffff0);
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar3 = (unsigned int *)
               ((int)auStack_80 + in_r0 + (int)((uVar9 & 0xffffffff) << 4) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      if ((int)uVar14 == 4) {
        uVar14 = 0;
        puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar17 = puVar2[2];
        uVar18 = puVar2[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
        uVar19 = puVar2[1];
        uVar20 = puVar2[2];
        uVar21 = puVar2[3];
        puVar3 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar19;
        puVar3[2] = uVar20;
        puVar3[3] = uVar21;
        puVar2 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
        uVar19 = puVar2[1];
        uVar20 = puVar2[2];
        uVar21 = puVar2[3];
        puVar3 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar19;
        puVar3[2] = uVar20;
        puVar3[3] = uVar21;
        puVar2 = (unsigned int *)(iVar12 + 0x20U & 0xfffffff0);
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        iVar12 = iVar12 + 0x30;
      }
      iVar11 = (int)((uVar14 & 0xffffffff) << 4);
      uVar14 = uVar14 + 1;
      puVar2 = (unsigned int *)(iVar6 + 0x30 + *param_1 & 0xfffffff0);
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      *(unsigned int *)((int)auStack_80 + iVar11) = *puVar2;
      *(unsigned int *)((int)auStack_80 + iVar11 + 4) = uVar15;
      *(unsigned int *)((int)auStack_80 + iVar11 + 8) = uVar16;
      *(unsigned int *)((int)auStack_80 + iVar11 + 0xc) = uVar17;
      if ((int)uVar14 == 4) {
        uVar14 = 0;
        puVar2 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
        uVar15 = *puVar2;
        uVar16 = puVar2[1];
        uVar17 = puVar2[2];
        uVar18 = puVar2[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
        uVar19 = *puVar2;
        uVar20 = puVar2[1];
        uVar21 = puVar2[2];
        uVar22 = puVar2[3];
        puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
        uVar23 = puVar2[1];
        uVar24 = puVar2[2];
        uVar25 = puVar2[3];
        puVar3 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar23;
        puVar3[2] = uVar24;
        puVar3[3] = uVar25;
        puVar2 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        puVar2 = (unsigned int *)(iVar12 + 0x20U & 0xfffffff0);
        *puVar2 = uVar19;
        puVar2[1] = uVar20;
        puVar2[2] = uVar21;
        puVar2[3] = uVar22;
        iVar12 = iVar12 + 0x30;
      }
      iVar6 = iVar6 + 0x40;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  if ((int)uVar13 < (int)uVar1) {
    lVar10 = uVar1 - uVar13;
    lVar7 = (uVar13 & 0xfffffff) << 4;
    do {
      uVar13 = uVar14 & 0xffffffff;
      uVar14 = uVar14 + 1;
      puVar2 = (unsigned int *)((int)lVar7 + *param_1 & 0xfffffff0);
      uVar15 = puVar2[1];
      uVar16 = puVar2[2];
      uVar17 = puVar2[3];
      puVar3 = (unsigned int *)((int)auStack_80 + in_r0 + (int)(uVar13 << 4) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      if ((int)uVar14 == 4) {
        uVar14 = 0;
        puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
        uVar15 = puVar2[1];
        uVar16 = puVar2[2];
        uVar17 = puVar2[3];
        puVar3 = (unsigned int *)(iVar12 + 0x20U & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar15;
        puVar3[2] = uVar16;
        puVar3[3] = uVar17;
        puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
        uVar19 = puVar2[1];
        uVar20 = puVar2[2];
        uVar21 = puVar2[3];
        puVar3 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
        uVar15 = *puVar3;
        uVar16 = puVar3[1];
        uVar17 = puVar3[2];
        uVar18 = puVar3[3];
        puVar3 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar19;
        puVar3[2] = uVar20;
        puVar3[3] = uVar21;
        puVar2 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
        *puVar2 = uVar15;
        puVar2[1] = uVar16;
        puVar2[2] = uVar17;
        puVar2[3] = uVar18;
        iVar12 = iVar12 + 0x30;
      }
      lVar7 = lVar7 + 0x10;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if ((int)uVar14 != 0) {
    if ((int)uVar14 < 4) {
      lVar10 = 4 - uVar14;
      lVar7 = (uVar14 & 0xfffffff) * 0x10 + (ZEXT48(&stack0x00000000) - 0x80);
      do {
        puVar2 = (unsigned int *)((int)auStack_80 + in_r0 & 0xfffffff0);
        uVar15 = puVar2[1];
        uVar16 = puVar2[2];
        uVar17 = puVar2[3];
        puVar3 = (unsigned int *)(in_r0 + (int)lVar7 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar15;
        puVar3[2] = uVar16;
        puVar3[3] = uVar17;
        lVar10 = lVar10 + -1;
        lVar7 = lVar7 + 0x10;
      } while (lVar10 != 0);
    }
    puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    uVar18 = *puVar2;
    uVar19 = puVar2[1];
    uVar20 = puVar2[2];
    uVar21 = puVar2[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
    uVar15 = puVar2[1];
    uVar16 = puVar2[2];
    uVar17 = puVar2[3];
    puVar3 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar15;
    puVar3[2] = uVar16;
    puVar3[3] = uVar17;
    puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
    uVar15 = *puVar2;
    uVar16 = puVar2[1];
    uVar17 = puVar2[2];
    uVar22 = puVar2[3];
    puVar2 = (unsigned int *)(iVar12 + 0x10U & 0xfffffff0);
    *puVar2 = uVar18;
    puVar2[1] = uVar19;
    puVar2[2] = uVar20;
    puVar2[3] = uVar21;
    puVar2 = (unsigned int *)(iVar12 + 0x20U & 0xfffffff0);
    *puVar2 = uVar15;
    puVar2[1] = uVar16;
    puVar2[2] = uVar17;
    puVar2[3] = uVar22;
  }
  return;
}

