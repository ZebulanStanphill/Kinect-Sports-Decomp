extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;


unsigned __int64
fn_82C83C40(int param_1,unsigned int *param_2,unsigned int *param_3,int param_4,int param_5,int param_6,
             int param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  int iVar10;
  short sVar12;
  int iVar11;
  __int64 lVar13;
  short sVar15;
  unsigned int uVar14;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  int iVar18;
  __int64 lVar19;
  unsigned int uVar20;
  __int64 lVar21;
  __int64 lVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int auStack_c0 [4];
  unsigned int auStack_b0 [4];
  unsigned int auStack_a0 [4];
  unsigned int auStack_90 [36];
  
  uVar1 = *param_3;
  uVar2 = *param_2;
  lVar21 = 0;
  auStack_b0[0] = 0;
  auStack_c0[0] = 0;
  lVar19 = 0;
  lVar22 = 0;
  uVar16 = ((__int64)*(int *)(param_1 + 0x88) * (__int64)(int)uVar1 & 0x7fffffffU) * 2 +
           (unsigned __int64)uVar2;
  iVar18 = *(int *)(param_1 + 0x88) * 0x40 + -4;
  if (param_7 == 0) {
    if (uVar2 == 0) {
      if (*(int *)(param_1 + 0x88) == 1) {
        iVar5 = (int)((uVar16 - 2 & 0xffffffff) << 1);
        auStack_a0[0] = (unsigned int)*(short *)(iVar5 + param_4);
        auStack_90[0] = (unsigned int)*(short *)(iVar5 + param_5);
        goto LAB_82c83ce8;
      }
      uVar25 = 0;
      uVar23 = 0;
    }
    else {
      iVar5 = (int)((uVar16 & 0xffffffff) << 1);
      lVar22 = 1;
      uVar25 = (unsigned int)*(short *)(iVar5 + param_4 + -2);
      uVar23 = (unsigned int)*(short *)(iVar5 + param_5 + -2);
    }
    uVar20 = (unsigned int)LZCOUNT(uVar25 - 0x4000) >> 5;
    if (uVar20 != 0) {
      uVar23 = 0;
      uVar25 = 0;
    }
    iVar5 = (int)((uVar16 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * -2 & 0xffffffff)
                 << 1);
    sVar15 = *(short *)(iVar5 + param_4);
    uVar27 = (unsigned int)sVar15;
    uVar24 = (unsigned int)*(short *)(iVar5 + param_5);
    uVar6 = (unsigned int)LZCOUNT(sVar15 + -0x4000) >> 5;
    if (uVar6 != 0) {
      uVar24 = 0;
      uVar27 = 0;
    }
    if (param_6 == 0) {
      if (uVar2 == 0) {
        iVar5 = (int)((uVar16 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * -2 &
                      0xffffffff) << 1);
        sVar15 = *(short *)(iVar5 + param_4 + 2);
        sVar12 = *(short *)(iVar5 + param_5 + 2);
      }
      else {
        if ((((uVar1 ^ uVar2) & 1) == 0) ||
           (lVar13 = 0, *(int *)(param_1 + 0x88) * 2 + -1 <= (int)uVar2)) {
          lVar13 = 1;
        }
        iVar5 = (int)((lVar13 * -2 + 1 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * -2 +
                       uVar16 & 0xffffffff) << 1);
        sVar15 = *(short *)(iVar5 + param_4);
        sVar12 = *(short *)(iVar5 + param_5);
      }
    }
    else if (uVar2 == *(int *)(param_1 + 0x88) * 2 - 2U) {
      iVar5 = (int)((uVar16 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) + 1 & 0x7fffffff) * -2 &
                    0xffffffff) << 1);
      sVar15 = *(short *)(iVar5 + param_4);
      sVar12 = *(short *)(iVar5 + param_5);
    }
    else {
      iVar5 = (int)((uVar16 + ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x7fffffff) * -2 + 2 &
                    0xffffffff) << 1);
      sVar15 = *(short *)(iVar5 + param_4);
      sVar12 = *(short *)(iVar5 + param_5);
    }
    uVar17 = (unsigned int)sVar15;
    uVar14 = (unsigned int)sVar12;
    uVar9 = (unsigned int)LZCOUNT(sVar15 + -0x4000) >> 5;
    if (uVar9 != 0) {
      uVar14 = 0;
      uVar17 = 0;
    }
    if (lVar22 != -2) {
      if (((int)lVar22 != 0) && (uVar20 == 0)) {
        if ((uVar23 & 4) == 0) {
          lVar21 = 1;
          auStack_c0[0] = uVar25;
          auStack_b0[0] = uVar23;
        }
        else {
          lVar19 = 1;
          auStack_a0[0] = uVar25;
          auStack_90[0] = uVar23;
        }
      }
      if (uVar6 == 0) {
        if ((uVar24 & 4) == 0) {
          iVar5 = (int)(lVar21 << 2);
          puVar8 = auStack_c0;
          puVar4 = auStack_b0;
          lVar21 = lVar21 + 1;
        }
        else {
          iVar5 = (int)(lVar19 << 2);
          puVar8 = auStack_a0;
          puVar4 = auStack_90;
          lVar19 = lVar19 + 1;
        }
        *(unsigned int *)(iVar5 + (int)puVar4) = uVar24;
        *(unsigned int *)(iVar5 + (int)puVar8) = uVar27;
      }
      uVar20 = (unsigned int)lVar19;
      uVar6 = (unsigned int)lVar21;
      if (uVar9 == 0) {
        if ((uVar14 & 4) == 0) {
          iVar5 = (int)(lVar21 << 2);
          puVar8 = auStack_c0;
          puVar4 = auStack_b0;
          uVar6 = uVar6 + 1;
        }
        else {
          iVar5 = (int)(lVar19 << 2);
          puVar8 = auStack_a0;
          puVar4 = auStack_90;
          uVar20 = uVar20 + 1;
        }
        *(unsigned int *)(iVar5 + (int)puVar4) = uVar14;
        *(unsigned int *)(iVar5 + (int)puVar8) = uVar17;
      }
      if ((uVar6 == 3) || (uVar20 == 3)) {
        uVar9 = uVar27 - uVar17 ^ uVar27 - uVar25;
        uVar6 = uVar17 - uVar25 ^ uVar27 - uVar25;
        uVar26 = uVar24 - uVar14 ^ uVar24 - uVar23;
        uVar20 = uVar14 - uVar23 ^ uVar24 - uVar23;
        auStack_a0[0] =
             uVar17 & ~((int)(uVar9 | uVar6) >> 0x1f) | (int)uVar9 >> 0x1f & uVar27 |
             (int)uVar6 >> 0x1f & uVar25;
        auStack_90[0] =
             uVar14 & ~((int)(uVar26 | uVar20) >> 0x1f) | (int)uVar26 >> 0x1f & uVar24 |
             (int)uVar20 >> 0x1f & uVar23;
      }
      else if ((uVar20 < uVar6) || (uVar20 <= uVar6)) {
        auStack_a0[0] = auStack_c0[0];
        auStack_90[0] = auStack_b0[0];
      }
LAB_82c83ce8:
      if (auStack_a0[0] != 0x4000) goto LAB_82c83fe8;
    }
    *param_2 = 0;
    uVar3 = 1;
    *param_3 = 0;
  }
  else {
    if (uVar2 != 0) {
      iVar5 = (int)((uVar16 & 0xffffffff) << 1);
      auStack_90[0] = (unsigned int)*(short *)(iVar5 + param_5 + -2);
      auStack_a0[0] = (unsigned int)*(short *)(iVar5 + param_4 + -2);
      goto LAB_82c83ce8;
    }
    auStack_90[0] = 0;
    auStack_a0[0] = 0;
LAB_82c83fe8:
    iVar5 = *(int *)(param_1 + 0x8c) * 0x40;
    if ((auStack_90[0] & 4) == 0) {
      iVar7 = -0x78;
      iVar5 = iVar5 + -4;
    }
    else {
      iVar7 = -0x7c;
      iVar5 = iVar5 + -8;
    }
    iVar11 = auStack_a0[0] + uVar2 * 0x20;
    iVar10 = auStack_90[0] + uVar1 * 0x20;
    if (iVar11 < -0x3c) {
      auStack_a0[0] = (auStack_a0[0] - iVar11) - 0x3c;
    }
    else if (iVar18 < iVar11) {
      auStack_a0[0] = (auStack_a0[0] - iVar11) + iVar18;
    }
    if (iVar10 < iVar7) {
      *param_2 = auStack_a0[0];
      uVar3 = 0;
      *param_3 = (iVar7 - iVar10) + auStack_90[0];
    }
    else {
      if (iVar5 < iVar10) {
        auStack_90[0] = (iVar5 - iVar10) + auStack_90[0];
      }
      *param_2 = auStack_a0[0];
      uVar3 = 0;
      *param_3 = auStack_90[0];
    }
  }
  return uVar3;
}

