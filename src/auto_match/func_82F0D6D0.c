extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;


unsigned __int64
fn_82F0D6D0(int param_1,unsigned int *param_2,unsigned int *param_3,int param_4,int param_5,int param_6,
             int param_7)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar11;
  __int64 lVar10;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  __int64 lVar18;
  unsigned int uVar19;
  __int64 lVar20;
  unsigned int uVar21;
  __int64 lVar22;
  unsigned int *puVar23;
  unsigned int uVar24;
  unsigned int auStack_b0 [4];
  unsigned int auStack_a0 [4];
  unsigned int auStack_90 [4];
  unsigned int auStack_80 [32];
  
  uVar2 = *param_3;
  uVar3 = *param_2;
  lVar20 = 0;
  auStack_a0[0] = 0;
  auStack_b0[0] = 0;
  lVar18 = 0;
  lVar22 = 0;
  uVar13 = ((__int64)*(int *)(param_1 + 0x2d0) * (__int64)(int)uVar2 & 0x7fffffffU) * 2 +
           (unsigned __int64)uVar3;
  iVar15 = *(int *)(param_1 + 0x2d0) * 0x40 + -4;
  if (param_7 == 0) {
    if (uVar3 == 0) {
      if (*(int *)(param_1 + 0x2d0) == 1) {
        iVar6 = (int)((uVar13 - 2 & 0xffffffff) << 1);
        auStack_b0[0] = (unsigned int)*(short *)(iVar6 + param_4);
        auStack_a0[0] = (int)*(short *)(iVar6 + param_5);
        goto LAB_82f0da40;
      }
      uVar24 = 0;
      uVar16 = 0;
    }
    else {
      iVar6 = (int)((uVar13 & 0xffffffff) << 1);
      lVar22 = 1;
      uVar24 = (unsigned int)*(short *)(iVar6 + param_4 + -2);
      uVar16 = (unsigned int)*(short *)(iVar6 + param_5 + -2);
    }
    uVar19 = (unsigned int)LZCOUNT(uVar24 - 0x4000) >> 5;
    if (uVar19 != 0) {
      uVar16 = 0;
      uVar24 = 0;
    }
    iVar6 = (int)((uVar13 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) * -2 & 0xffffffff)
                 << 1);
    sVar1 = *(short *)(iVar6 + param_4);
    uVar9 = (unsigned int)sVar1;
    uVar17 = (unsigned int)*(short *)(iVar6 + param_5);
    uVar21 = (unsigned int)LZCOUNT(sVar1 + -0x4000) >> 5;
    if (uVar21 != 0) {
      uVar17 = 0;
      uVar9 = 0;
    }
    if (param_6 == 0) {
      if (uVar3 == 0) {
        iVar6 = (int)((uVar13 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) * -2 &
                      0xffffffff) << 1);
        uVar11 = (unsigned int)*(short *)(iVar6 + param_4 + 2);
        uVar14 = (unsigned int)*(short *)(iVar6 + param_5 + 2);
      }
      else {
        if ((((uVar2 ^ uVar3) & 1) == 0) ||
           (lVar10 = 0, *(int *)(param_1 + 0x2d0) * 2 + -1 <= (int)uVar3)) {
          lVar10 = 1;
        }
        iVar6 = (int)((lVar10 * -2 + 1 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) * -2 +
                       uVar13 & 0xffffffff) << 1);
        uVar14 = (unsigned int)*(short *)(iVar6 + param_5);
        uVar11 = (unsigned int)*(short *)(iVar6 + param_4);
      }
    }
    else if (uVar3 == *(int *)(param_1 + 0x2d0) * 2 - 2U) {
      iVar6 = (int)((uVar13 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) + 1 & 0x7fffffff) * -2 &
                    0xffffffff) << 1);
      uVar14 = (unsigned int)*(short *)(iVar6 + param_5);
      uVar11 = (unsigned int)*(short *)(iVar6 + param_4);
    }
    else {
      iVar6 = (int)((uVar13 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x7fffffff) * -2 + 2 &
                    0xffffffff) << 1);
      uVar14 = (unsigned int)*(short *)(iVar6 + param_5);
      uVar11 = (unsigned int)*(short *)(iVar6 + param_4);
    }
    uVar4 = (unsigned int)LZCOUNT(uVar11 - 0x4000) >> 5;
    if (uVar4 != 0) {
      uVar14 = 0;
      uVar11 = 0;
    }
    if (lVar22 == -2) goto LAB_82f0da48;
    if (((int)lVar22 != 0) && (uVar19 == 0)) {
      if ((uVar16 & 4) == 0) {
        lVar20 = 1;
        auStack_b0[0] = uVar24;
        auStack_a0[0] = uVar16;
      }
      else {
        lVar18 = 1;
        auStack_90[0] = uVar24;
        auStack_80[0] = uVar16;
      }
    }
    if (uVar21 == 0) {
      if ((uVar17 & 4) == 0) {
        iVar6 = (int)(lVar20 << 2);
        puVar5 = auStack_b0;
        puVar23 = auStack_a0;
        lVar20 = lVar20 + 1;
      }
      else {
        iVar6 = (int)(lVar18 << 2);
        puVar5 = auStack_90;
        puVar23 = auStack_80;
        lVar18 = lVar18 + 1;
      }
      *(unsigned int *)(iVar6 + (int)puVar23) = uVar17;
      *(unsigned int *)(iVar6 + (int)puVar5) = uVar9;
    }
    uVar19 = (unsigned int)lVar18;
    uVar21 = (unsigned int)lVar20;
    if (uVar4 == 0) {
      if ((uVar14 & 4) == 0) {
        iVar6 = (int)(lVar20 << 2);
        puVar23 = auStack_b0;
        puVar5 = auStack_a0;
        uVar21 = uVar21 + 1;
      }
      else {
        iVar6 = (int)(lVar18 << 2);
        puVar23 = auStack_90;
        puVar5 = auStack_80;
        uVar19 = uVar19 + 1;
      }
      *(unsigned int *)(iVar6 + (int)puVar5) = uVar14;
      *(unsigned int *)(iVar6 + (int)puVar23) = uVar11;
    }
    if ((uVar21 == 3) || (uVar19 == 3)) {
      auStack_b0[0] = uVar24;
      if ((int)uVar9 < (int)uVar24) {
        auStack_b0[0] = uVar9;
        uVar9 = uVar24;
      }
      if (((int)auStack_b0[0] <= (int)uVar11) && (auStack_b0[0] = uVar9, (int)uVar11 < (int)uVar9))
      {
        auStack_b0[0] = uVar11;
      }
      if ((int)uVar17 < (int)uVar16) {
        auStack_a0[0] = uVar17;
        if (((int)uVar17 <= (int)uVar14) && (auStack_a0[0] = uVar14, (int)uVar16 <= (int)uVar14)) {
LAB_82f0da3c:
          auStack_a0[0] = uVar16;
        }
      }
      else {
        if ((int)uVar14 < (int)uVar16) goto LAB_82f0da3c;
        auStack_a0[0] = uVar14;
        if ((int)uVar17 <= (int)uVar14) {
          auStack_a0[0] = uVar17;
        }
      }
    }
    else if ((uVar21 <= uVar19) && (uVar21 < uVar19)) {
      auStack_b0[0] = auStack_90[0];
      auStack_a0[0] = auStack_80[0];
    }
LAB_82f0da40:
    if (auStack_b0[0] == 0x4000) {
LAB_82f0da48:
      *param_2 = 0;
      *param_3 = 0;
      return 1;
    }
  }
  else {
    if (uVar3 != 0) {
      iVar6 = (int)((uVar13 & 0xffffffff) << 1);
      auStack_b0[0] = (unsigned int)*(short *)(iVar6 + param_4 + -2);
      auStack_a0[0] = (int)*(short *)(iVar6 + param_5 + -2);
      goto LAB_82f0da40;
    }
    auStack_a0[0] = 0;
    auStack_b0[0] = 0;
  }
  if (*(int *)(param_1 + 0x6de4) == 0) {
    iVar6 = *(int *)(param_1 + 0x2d4) * 0x40;
    if ((auStack_a0[0] & 4) == 0) {
      iVar7 = -0x78;
      iVar6 = iVar6 + -8;
      goto LAB_82f0daf0;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x2d4) * 0x40;
    if ((auStack_a0[0] & 4) != 0) {
      iVar7 = -0x78;
      iVar6 = iVar6 + -8;
      goto LAB_82f0daf0;
    }
  }
  iVar6 = iVar6 + -4;
  iVar7 = -0x74;
LAB_82f0daf0:
  iVar12 = auStack_b0[0] + uVar3 * 0x20;
  iVar8 = auStack_a0[0] + uVar2 * 0x20;
  if (iVar12 < -0x3c) {
    auStack_b0[0] = (auStack_b0[0] - iVar12) - 0x3c;
  }
  else if (iVar15 < iVar12) {
    auStack_b0[0] = (auStack_b0[0] - iVar12) + iVar15;
  }
  if (iVar8 < iVar7) {
    *param_2 = auStack_b0[0];
    *param_3 = (iVar7 - iVar8) + auStack_a0[0];
  }
  else {
    if (iVar6 < iVar8) {
      auStack_a0[0] = (iVar6 - iVar8) + auStack_a0[0];
    }
    *param_2 = auStack_b0[0];
    *param_3 = auStack_a0[0];
  }
  return 0;
}

