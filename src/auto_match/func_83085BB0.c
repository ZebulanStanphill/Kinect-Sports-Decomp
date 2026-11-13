typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F69148();


unsigned __int64
fn_83085BB0(unsigned int *param_1,unsigned __int64 param_2,__int64 param_3,unsigned int *param_4,unsigned int *param_5,
             short *param_6)

{
  unsigned int uVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned short *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  bool bVar7;
  bool bVar8;
  int in_r0;
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  __int64 lVar12;
  __int64 lVar13;
  int iVar15;
  __int64 lVar14;
  int iVar16;
  unsigned int uVar17;
  int iVar18;
  __int64 lVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  unsigned int uVar22;
  short sVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned short uVar26;
  __int64 lVar27;
  unsigned short uVar28;
  __int64 lVar29;
  __int64 lVar30;
  int iVar31;
  unsigned __int64 uVar32;
  int iVar33;
  __int64 lVar34;
  unsigned int uVar35;
  unsigned int uVar36;
  unsigned int uVar37;
  
  uVar32 = param_3 - param_2;
  lVar27 = (param_2 & 0xfffffff) * 0x10;
  lVar11 = (unsigned __int64)*param_1 + lVar27;
  if ((unsigned short)(param_6[5] - param_6[1]) < (unsigned short)(param_6[4] - *param_6)) {
    uVar22 = -(unsigned int)((unsigned short)(param_6[4] - *param_6) <= (unsigned short)(param_6[6] - param_6[2])) & 2;
  }
  else {
    uVar22 = 2 - ((unsigned short)(param_6[6] - param_6[2]) < (unsigned short)(param_6[5] - param_6[1]));
  }
  iVar18 = 0;
  iVar15 = 0;
  lVar30 = 0;
  lVar29 = 0;
  iVar31 = 0;
  iVar16 = 0;
  iVar33 = (int)uVar32;
  sVar23 = (short)uVar22;
  lVar34 = lVar11;
  if (1 < iVar33) {
    lVar12 = ((uVar32 - 2 & 0xffffffff) >> 1) + 1;
    lVar19 = ((__int64)sVar23 - 4U & 0x7fffffff) * 2 + lVar11;
    lVar34 = (lVar12 * 0x20 & 0xffffffe0U) + lVar11;
    iVar16 = (int)lVar12 * 2;
    do {
      iVar3 = (int)lVar19;
      lVar19 = lVar19 + 0x20;
      iVar18 = ((int)((unsigned int)*(unsigned short *)(iVar3 + 8) + (unsigned int)*(unsigned short *)(iVar3 + 0x10)) >> 1) + iVar18
      ;
      iVar15 = ((int)((unsigned int)*(unsigned short *)lVar19 + (unsigned int)*(unsigned short *)(iVar3 + 0x18)) >> 1) + iVar15;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (iVar16 < iVar33) {
    iVar31 = (int)((unsigned int)*(unsigned short *)((sVar23 + 4) * 2 + (int)lVar34) +
                  (unsigned int)*(unsigned short *)(sVar23 * 2 + (int)lVar34)) >> 1;
  }
  lVar13 = 0;
  uVar25 = iVar18 + iVar15 + iVar31;
  lVar19 = 0;
  lVar14 = 0;
  lVar12 = 0;
  uVar1 = (int)uVar25 / iVar33;
  trapWord(6,uVar32,0);
  trapWord(5,uVar32 & ~((((unsigned __int64)uVar25 & 0x7fffffff) << 1 | (unsigned __int64)(uVar25 >> 0x1f)) - 1),
           0xffff);
  iVar16 = 0;
  iVar31 = (int)uVar1 >> 0x1f;
  lVar34 = lVar11;
  if (1 < iVar33) {
    lVar9 = ((uVar32 - 2 & 0xffffffff) >> 1) + 1;
    lVar20 = ((__int64)sVar23 + 4U & 0x7fffffff) * 2 + lVar11;
    lVar34 = (lVar9 * 0x20 & 0xffffffe0U) + lVar11;
    iVar16 = (int)lVar9 * 2;
    do {
      puVar4 = (unsigned short *)lVar20;
      lVar20 = lVar20 + 0x20;
      lVar14 = lVar14 + (__int64)iVar31 + (unsigned __int64)(puVar4[-4] <= uVar1);
      lVar13 = lVar13 + (unsigned __int64)(uVar1 >> 0x1f) + (unsigned __int64)(uVar1 <= *puVar4);
      lVar12 = lVar12 + (__int64)iVar31 + (unsigned __int64)(puVar4[4] <= uVar1);
      lVar19 = lVar19 + (unsigned __int64)(uVar1 >> 0x1f) + (unsigned __int64)(uVar1 <= puVar4[8]);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  if (iVar16 < iVar33) {
    lVar30 = (__int64)iVar31 + (unsigned __int64)(*(unsigned short *)(sVar23 * 2 + (int)lVar34) <= uVar1);
    lVar29 = (unsigned __int64)(uVar1 >> 0x1f) +
             (unsigned __int64)(uVar1 <= *(unsigned short *)((sVar23 + 4) * 2 + (int)lVar34));
  }
  lVar30 = lVar14 + lVar12 + lVar30;
  lVar29 = lVar13 + lVar19 + lVar29;
  iVar31 = (int)lVar29;
  if ((lVar30 == 0) || (bVar8 = false, iVar31 == 0)) {
    bVar8 = true;
  }
  iVar16 = (int)lVar30;
  if ((iVar16 != iVar31) || (bVar7 = true, iVar16 != iVar33)) {
    bVar7 = false;
  }
  if (bVar7) {
    uVar10 = 1;
  }
  else {
    lVar19 = ((__int64)sVar23 & 0x7fffffffU) * 2;
    uVar21 = (unsigned __int64)param_1[1];
    lVar34 = ((__int64)sVar23 + 4U & 0x7fffffff) * 2;
    lVar27 = uVar21 + lVar27;
    uVar28 = *(unsigned short *)((int)lVar19 + (int)param_6);
    uVar26 = *(unsigned short *)((int)lVar34 + (int)param_6);
    uVar25 = (unsigned int)uVar26;
    if (bVar8) {
      uVar1 = iVar33 >> 1;
      uVar24 = uVar1 + (int)param_2;
      lVar29 = 0;
      if (0 < (int)uVar1) {
        fn_82F69148(lVar27,lVar11,uVar1 << 4);
        lVar27 = ((unsigned __int64)uVar1 & 0xfffffff) * 0x10 + lVar27;
        lVar30 = (__int64)(int)uVar1;
        do {
          uVar2 = *(unsigned short *)((int)lVar34 + (int)lVar11);
          if (uVar28 <= uVar2) {
            uVar28 = uVar2;
          }
          lVar30 = lVar30 + -1;
          lVar11 = lVar11 + 0x10;
          lVar29 = (__int64)(int)uVar1;
        } while (lVar30 != 0);
      }
      if ((int)lVar29 < iVar33) {
        uVar32 = uVar32 - lVar29;
        lVar19 = lVar19 + lVar11;
        fn_82F69148(lVar27,lVar11,(uVar32 & 0xfffffff) << 4);
        do {
          if (*(unsigned short *)lVar19 <= uVar25) {
            uVar25 = (unsigned int)*(unsigned short *)lVar19;
          }
          uVar26 = (unsigned short)uVar25;
          uVar32 = uVar32 - 1;
          lVar19 = lVar19 + 0x10;
        } while (uVar32 != 0);
      }
    }
    else if (iVar16 < iVar31) {
      uVar24 = (unsigned int)(lVar30 + param_2);
      lVar29 = (lVar30 + param_2 & 0xfffffff) * 0x10 + uVar21;
      if (0 < iVar33) {
        lVar34 = lVar34 + lVar11;
        do {
          uVar26 = ((unsigned short *)lVar34)[-4];
          puVar5 = (unsigned int *)(in_r0 + (int)lVar11 & 0xfffffff0);
          uVar35 = puVar5[1];
          uVar36 = puVar5[2];
          uVar37 = puVar5[3];
          uVar2 = *(unsigned short *)lVar34;
          if ((int)uVar1 < (int)(unsigned int)uVar26) {
            puVar6 = (unsigned int *)(in_r0 + (int)lVar29 & 0xfffffff0);
            *puVar6 = *puVar5;
            puVar6[1] = uVar35;
            puVar6[2] = uVar36;
            puVar6[3] = uVar37;
            lVar29 = lVar29 + 0x10;
            if (uVar26 <= uVar25) {
              uVar25 = (unsigned int)uVar26;
            }
          }
          else {
            puVar6 = (unsigned int *)(in_r0 + (int)lVar27 & 0xfffffff0);
            *puVar6 = *puVar5;
            puVar6[1] = uVar35;
            puVar6[2] = uVar36;
            puVar6[3] = uVar37;
            lVar27 = lVar27 + 0x10;
            if (uVar28 <= uVar2) {
              uVar28 = uVar2;
            }
          }
          uVar26 = (unsigned short)uVar25;
          lVar11 = lVar11 + 0x10;
          lVar34 = lVar34 + 0x10;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
    }
    else {
      param_2 = (uVar32 - lVar29) + param_2;
      uVar24 = (unsigned int)param_2;
      lVar29 = (param_2 & 0xfffffff) * 0x10 + uVar21;
      if (0 < iVar33) {
        lVar34 = lVar34 + lVar11;
        do {
          uVar26 = *(unsigned short *)lVar34;
          puVar5 = (unsigned int *)(in_r0 + (int)lVar11 & 0xfffffff0);
          uVar35 = puVar5[1];
          uVar36 = puVar5[2];
          uVar37 = puVar5[3];
          uVar17 = (unsigned int)((unsigned short *)lVar34)[-4];
          if ((int)(unsigned int)uVar26 < (int)uVar1) {
            puVar6 = (unsigned int *)(in_r0 + (int)lVar27 & 0xfffffff0);
            *puVar6 = *puVar5;
            puVar6[1] = uVar35;
            puVar6[2] = uVar36;
            puVar6[3] = uVar37;
            lVar27 = lVar27 + 0x10;
            if (uVar28 <= uVar26) {
              uVar28 = uVar26;
            }
          }
          else {
            puVar6 = (unsigned int *)(in_r0 + (int)lVar29 & 0xfffffff0);
            *puVar6 = *puVar5;
            puVar6[1] = uVar35;
            puVar6[2] = uVar36;
            puVar6[3] = uVar37;
            lVar29 = lVar29 + 0x10;
            if (uVar17 <= uVar25) {
              uVar25 = uVar17;
            }
          }
          uVar26 = (unsigned short)uVar25;
          lVar11 = lVar11 + 0x10;
          lVar34 = lVar34 + 0x10;
          uVar32 = uVar32 - 1;
        } while (uVar32 != 0);
      }
    }
    *(unsigned short *)(param_4 + 2) = uVar26;
    uVar10 = 0;
    *(unsigned short *)((int)param_4 + 10) = uVar28;
    *param_4 = uVar22;
    param_4[1] = uVar24;
    param_5[1] = *param_1;
    *param_5 = param_1[1];
  }
  return uVar10;
}

