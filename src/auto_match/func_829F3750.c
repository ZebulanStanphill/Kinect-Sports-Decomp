extern int fn_829F3590();
extern unsigned int iStack00000014;
extern unsigned int iStack0000001c;
extern unsigned int iStack00000044;
extern unsigned int iStack_bc;
extern unsigned int lbl_820116D8;
extern float lbl_82079FBC;


__int64 fn_829F3750(int param_1,int param_2,int param_3,__int64 param_4,int param_5,int param_6,
                      int param_7,__int64 param_8)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int in_r0;
  __int64 lVar7;
  int iVar9;
  __int64 lVar8;
  __int64 lVar10;
  __int64 lVar11;
  int iVar12;
  unsigned int uVar13;
  __int64 lVar14;
  __int64 lVar15;
  __int64 lVar16;
  int iVar17;
  int iVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  __int64 lVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  __int64 lVar24;
  unsigned __int64 uVar25;
  __int64 lVar26;
  __int64 lVar27;
  __int64 lVar28;
  __int64 lVar29;
  unsigned __int64 uVar30;
  __int64 lVar31;
  __int64 lVar32;
  __int64 lVar33;
  __int64 lVar34;
  double dVar35;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  int iStack00000014;
  int iStack0000001c;
  int iStack00000044;
  int iStack_bc;
  
  uVar19 = 10000;
  uVar2 = *(unsigned int *)(param_6 + 0x58);
  uVar30 = (unsigned __int64)uVar2;
  uVar13 = 10000;
  uVar3 = *(unsigned int *)(param_6 + 0x5c);
  uVar25 = (unsigned __int64)uVar3;
  lVar7 = 0;
  lVar10 = 0;
  lVar15 = 0;
  iStack_bc = 0;
  lVar16 = 0;
  uVar23 = 10000;
  lVar14 = 0xc;
  lVar11 = 0;
  lVar28 = 0xc;
  if ((int)uVar2 < 5) {
    lVar16 = 5 - uVar30;
  }
  if (0x49 < (int)uVar2) {
    lVar14 = 0x55 - uVar30;
  }
  if ((int)uVar3 < 5) {
    lVar11 = 5 - uVar25;
  }
  if (0x35 < (int)uVar3) {
    lVar28 = 0x41 - uVar25;
  }
  iVar12 = (int)lVar11;
  iVar17 = (int)lVar16;
  if (iVar12 < (int)lVar28) {
    lVar26 = lVar11 * 0xc;
    lVar21 = lVar28 - lVar11;
    lVar31 = (__int64)(int)(uVar3 + iVar12 + -5) * (__int64)(int)param_4 + uVar30 + -5;
    do {
      if (iVar17 < (int)lVar14) {
        lVar33 = lVar14 - lVar16;
        lVar24 = lVar16;
        uVar22 = uVar23;
        uVar20 = uVar13;
        do {
          uVar13 = uVar20;
          uVar23 = uVar22;
          uVar6 = uVar19;
          if ((((*(int *)((int)((lVar26 + lVar24 & 0xffffffffU) << 2) + (int)param_8) != 0) &&
               (uVar1 = *(unsigned short *)((int)((lVar31 + lVar24 & 0xffffffffU) << 1) + param_3),
               uVar4 = (int)(unsigned int)uVar1 >> 3, (uVar1 & 7) == *(unsigned short *)(param_5 + 0x144))) &&
              (uVar13 = uVar19, uVar23 = uVar20, uVar6 = uVar4, uVar19 <= uVar4)) &&
             ((uVar13 = uVar4, uVar6 = uVar19, uVar20 <= uVar4 &&
              (uVar13 = uVar20, uVar23 = uVar22, uVar4 < uVar22)))) {
            uVar23 = uVar4;
          }
          uVar19 = uVar6;
          lVar24 = lVar24 + 1;
          lVar33 = lVar33 + -1;
          uVar22 = uVar23;
          uVar20 = uVar13;
        } while (lVar33 != 0);
      }
      lVar21 = lVar21 + -1;
      lVar26 = lVar26 + 0xc;
      lVar31 = lVar31 + param_4;
    } while (lVar21 != 0);
  }
  iVar9 = (int)(*(float *)(param_5 + 0x140) * lbl_82079FBC);
  if (0x6d < iVar9) {
    iVar9 = 0x6e;
  }
  iVar18 = iVar9 + uVar19;
  if (uVar23 == 10000) {
    if (uVar13 != 10000) {
      iVar18 = iVar9 + uVar13;
    }
  }
  else {
    iVar18 = iVar9 + uVar23;
  }
  if (iVar12 < (int)lVar28) {
    lVar31 = ((uVar25 + lVar11) - 5 & 0x3fffffff) * 4 + ((unsigned __int64)uVar3 & 0x3fffffff) * -4;
    lVar21 = (lVar11 * 0xc + lVar16 & 0x3fffffffU) * 4 + param_8;
    lVar28 = lVar28 - lVar11;
    lVar11 = lVar16;
    iVar12 = iVar17;
    lVar26 = lVar21;
    do {
      while (iVar12 < (int)lVar14) {
        if (*(int *)lVar21 != 0) {
          lVar33 = 4;
          lVar29 = ((lVar11 + uVar30) - 5 & 0x3fffffff) * 4;
          lVar24 = lVar31;
          do {
            lVar32 = lVar24 + ((unsigned __int64)uVar3 & 0x3fffffff) * 4;
            lVar34 = 4;
            lVar8 = lVar29;
            lVar27 = lVar29 - (unsigned __int64)(uVar2 << 2);
            do {
              if ((int)lVar27 * (int)lVar27 + (int)lVar24 * (int)lVar24 <
                  *(int *)((int)param_8 + 0x244)) {
                uVar1 = *(unsigned short *)
                         ((int)(((__int64)(int)lVar32 * (__int64)param_2 + lVar8 & 0xffffffffU) <<
                               1) + param_1);
                uVar13 = (unsigned int)(uVar1 >> 3);
                if (((int)uVar13 < iVar18) && (*(unsigned short *)(param_5 + 0x144) == (uVar1 & 7))) {
                  lVar10 = lVar8 + lVar10;
                  lVar7 = lVar32 + lVar7;
                  iStack_bc = uVar13 + iStack_bc;
                  lVar15 = lVar15 + 1;
                }
              }
              lVar8 = lVar8 + 1;
              lVar27 = lVar27 + 1;
              lVar34 = lVar34 + -1;
            } while (lVar34 != 0);
            lVar33 = lVar33 + -1;
            lVar24 = lVar24 + 1;
          } while (lVar33 != 0);
        }
        lVar11 = lVar11 + 1;
        lVar21 = lVar21 + 4;
        iVar12 = (int)lVar11;
      }
      lVar28 = lVar28 + -1;
      lVar21 = lVar26 + 0x30;
      lVar31 = lVar31 + 4;
      lVar11 = lVar16;
      iVar12 = iVar17;
      lVar26 = lVar21;
    } while (lVar28 != 0);
    if ((int)lVar15 != 0) {
      dVar35 = (double)(__int64)(int)lVar15;
      iStack00000014 = param_1;
      iStack0000001c = param_2;
      iStack00000044 = param_7;
      fn_829F3590((double)(float)((double)(__int64)(int)lVar10 / dVar35),
                        (double)(float)((double)(__int64)(int)lVar7 / dVar35),
                        (double)((float)(__int64)iStack_bc / (float)(dVar35 * lbl_820116D8)));
      return lVar15;
    }
  }
  altv207_13(in_vs32,in_vs40);
  puVar5 = (unsigned int *)(in_r0 + param_7 & 0xfffffff0);
  *puVar5 = in_register_000103f0;
  puVar5[1] = in_register_000103f4;
  puVar5[2] = in_register_000103f8;
  puVar5[3] = in_vr63;
  return lVar15;
}

