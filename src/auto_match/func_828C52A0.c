#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_825AEE38();
extern int fn_828C4B90();
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;
extern unsigned int uStack_c8;
extern unsigned int uStack_d0;


unsigned __int64 * fn_828C52A0(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  int *piVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int uVar20;
  unsigned __int64 uVar19;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned __int64 uVar23;
  unsigned int uVar24;
  unsigned __int64 uVar25;
  unsigned __int64 uVar26;
  unsigned __int64 uStack00000018;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack_d0;
  unsigned __int64 uStack_c8;
  unsigned __int64 uStack_c0;
  unsigned __int64 uStack_b8;
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  
  uStack00000020 = ((((unsigned __int64)(uStack00000020)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar8 = (((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF);
  uStack_c0 = ((((unsigned __int64)(uStack_c0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)param_3 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  uStack_c0 = CONCAT44((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF),(((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) - 1);
  uStack00000018 = ((((unsigned __int64)(uStack00000018)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar7 = (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack00000020 = ((((unsigned __int64)(uStack00000020)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar21 = ((int)(((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) >> 1) +
           (unsigned int)((int)(((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) < 0 && ((((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) & 1) != 0) +
           (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack_b8 = ((((unsigned __int64)(uStack_b8)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)param_2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  iVar9 = (((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF);
  uStack_b8 = CONCAT44((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar21);
  uVar23 = uStack_b8;
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  fn_828C4B90(param_2,uStack_b8,uStack_c0);
  uVar24 = uVar21 + 1;
  uStack_c0 = CONCAT44(iVar9,uVar24);
  uStack_d0 = uVar23;
  uStack_c8 = uStack_c0;
  if (uVar7 < uVar21) {
    uVar25 = (unsigned __int64)*(unsigned int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8);
    while( true ) {
      uVar17 = (unsigned __int64)(uVar21 >> 2);
      uVar18 = uVar17;
      if (uVar25 <= uVar17) {
        uVar18 = uVar17 - uVar25;
      }
      uStack_a8 = uStack_d0;
      uVar23 = uStack_a8;
      uStack_a8 = ((((unsigned __int64)(uStack_a8)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)uStack_d0 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      iVar10 = (((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF);
      uVar16 = uVar21 - 1;
      uVar22 = uVar16 >> 2;
      if (*(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar22) {
        uVar22 = uVar22 - *(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      }
      piVar14 = (int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4);
      uStack_a8 = uVar23;
      if (*(unsigned int *)(*(int *)(*(int *)(*piVar14 + uVar22 * 4) + (uVar16 & 3) * 4) + 8) <
          *(unsigned int *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) +
                                     *(int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4)) +
                            (int)(((unsigned __int64)uVar21 & 3) << 2)) + 8)) break;
      uStack_a8 = uStack_d0;
      uVar22 = uVar16 >> 2;
      if (*(unsigned int *)(iVar10 + 8) <= uVar22) {
        uVar22 = uVar22 - *(unsigned int *)(iVar10 + 8);
      }
      if (uVar25 <= uVar17) {
        uVar17 = uVar17 - uVar25;
      }
      if ((*(unsigned int *)(*(int *)(*(int *)((int)((uVar17 & 0xffffffff) << 2) +
                                      *(int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4)) +
                             (int)(((unsigned __int64)uVar21 & 3) << 2)) + 8) <
           *(unsigned int *)(*(int *)(*(int *)(*(int *)(iVar10 + 4) + uVar22 * 4) + (uVar16 & 3) * 4) + 8))
         || (uStack_d0 = CONCAT44(iVar10,uVar16), uVar21 = uVar16, uVar16 <= uVar7)) break;
    }
  }
  if (uVar24 < uVar8) {
    uVar25 = (unsigned __int64)*(unsigned int *)(iVar9 + 8);
    piVar14 = (int *)fn_825AEE38(&uStack_d0);
    uVar24 = (((unsigned __int64)(uStack_c8) >> 32) & 0xFFFFFFFF);
    do {
      uVar17 = (unsigned __int64)(uVar24 >> 2);
      uVar18 = uVar17;
      if (uVar25 <= uVar17) {
        uVar18 = uVar17 - uVar25;
      }
      if (*(unsigned int *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + *(int *)(iVar9 + 4)) +
                            (int)(((unsigned __int64)uVar24 & 3) << 2)) + 8) < *(unsigned int *)(*piVar14 + 8))
      break;
      if (uVar25 <= uVar17) {
        uVar17 = uVar17 - uVar25;
      }
      if (*(unsigned int *)(*piVar14 + 8) <
          *(unsigned int *)(*(int *)(*(int *)((int)((uVar17 & 0xffffffff) << 2) + *(int *)(iVar9 + 4)) +
                            (int)(((unsigned __int64)uVar24 & 3) << 2)) + 8)) break;
      uVar24 = uVar24 + 1;
      uStack_c8 = CONCAT44((((unsigned __int64)(uStack_c8) >> 0) & 0xFFFFFFFF),uVar24);
    } while (uVar24 < uVar8);
  }
  iVar9 = (((unsigned __int64)(uStack_d0) >> 0) & 0xFFFFFFFF);
  iVar10 = (((unsigned __int64)(uStack_c8) >> 0) & 0xFFFFFFFF);
  uStack_b8 = uStack_c8;
  uVar12 = uStack_b8;
  uStack_c0 = uStack_d0;
  uVar23 = uStack_c0;
  uStack_b8 = ((((unsigned __int64)(uStack_b8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uStack_c8)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_c0 = ((((unsigned __int64)(uStack_c0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uStack_d0)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar16 = (((unsigned __int64)(uStack_b8) >> 32) & 0xFFFFFFFF);
  uVar22 = (((unsigned __int64)(uStack_c0) >> 32) & 0xFFFFFFFF);
  uStack_c0 = uVar23;
  uStack_b8 = uVar12;
LAB_828c54e0:
  uVar19 = uVar23;
  uVar12 = uStack_d0;
  uVar6 = uStack_c0;
  if (uVar16 < uVar8) {
    do {
      uVar26 = (unsigned __int64)*(unsigned int *)(iVar10 + 8);
      uVar25 = (unsigned __int64)(uVar16 >> 2);
      uVar17 = (unsigned __int64)uVar16 & 3;
      uVar18 = uVar25;
      if (uVar26 <= uVar25) {
        uVar18 = uVar25 - uVar26;
      }
      piVar14 = (int *)fn_825AEE38(&uStack_d0);
      uVar23 = uStack_c8;
      iVar1 = *(int *)(iVar10 + 4);
      uVar12 = uStack_d0;
      uVar6 = uStack_c0;
      if (*(unsigned int *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + iVar1) +
                            (int)(uVar17 << 2)) + 8) <= *(unsigned int *)(*piVar14 + 8)) {
        uVar18 = uVar25;
        if (uVar26 <= uVar25) {
          uVar18 = uVar25 - uVar26;
        }
        if (*(unsigned int *)(*(int *)(*(int *)((int)((uVar18 & 0xffffffff) << 2) + iVar1) +
                              (int)(uVar17 << 2)) + 8) < *(unsigned int *)(*piVar14 + 8)) break;
        uVar24 = uVar24 + 1;
        uStack_c8 = CONCAT44((((unsigned __int64)(uStack_c8) >> 0) & 0xFFFFFFFF),uVar24);
        uStack_b0 = uVar23;
        if (uVar26 <= uVar25) {
          uVar25 = uVar25 - uVar26;
        }
        uStack_b0 = ((((unsigned __int64)(uStack_b0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar23)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uVar20 = (((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF) >> 2;
        if (*(unsigned int *)((((unsigned __int64)(uStack_c8) >> 0) & 0xFFFFFFFF) + 8) <= uVar20) {
          uVar20 = uVar20 - *(unsigned int *)((((unsigned __int64)(uStack_c8) >> 0) & 0xFFFFFFFF) + 8);
        }
        iVar5 = ((((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 3) * 4;
        iVar1 = *(int *)((int)((uVar25 & 0xffffffff) << 2) + iVar1);
        iVar2 = *(int *)(*(int *)((((unsigned __int64)(uStack_c8) >> 0) & 0xFFFFFFFF) + 4) + uVar20 * 4);
        iVar4 = (int)(((unsigned __int64)uVar16 & 3) << 2);
        uVar3 = *(unsigned int *)(iVar2 + iVar5);
        *(unsigned int *)(iVar2 + iVar5) = *(unsigned int *)(iVar1 + iVar4);
        *(unsigned int *)(iVar1 + iVar4) = uVar3;
        uStack_b0 = uVar23;
      }
      uVar16 = uVar16 + 1;
      uStack_b8 = CONCAT44((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar16);
    } while (uVar16 < uVar8);
  }
  do {
    uVar23 = uVar19;
    uVar11 = uStack_b0;
    uVar19 = uStack_b8;
    uStack_d0 = ((((unsigned __int64)(uStack_d0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)uVar12 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uStack_c0 = ((((unsigned __int64)(uStack_c0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)uVar6 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uVar13 = uStack_a8;
    if (uVar22 <= uVar7) break;
    uVar18 = (unsigned __int64)*(unsigned int *)(iVar9 + 8);
    uVar25 = (unsigned __int64)(uVar21 >> 2);
    uVar17 = uVar25;
    if (uVar18 <= uVar25) {
      uVar17 = uVar25 - uVar18;
    }
    uStack_a8 = ((((unsigned __int64)(uStack_a8)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)uVar23 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uVar15 = uVar22 - 1;
    iVar1 = *(int *)(iVar9 + 4);
    uVar20 = uVar15 >> 2;
    if (*(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar20) {
      uVar20 = uVar20 - *(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
    }
    if (*(unsigned int *)(*(int *)(*(int *)((int)((uVar17 & 0xffffffff) << 2) + iVar1) +
                          (int)(((unsigned __int64)uVar21 & 3) << 2)) + 8) <=
        *(unsigned int *)(*(int *)(*(int *)(*(int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar20 * 4) + (uVar15 & 3) * 4)
                 + 8)) {
      uVar20 = uVar15 >> 2;
      if (*(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar20) {
        uVar20 = uVar20 - *(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      }
      if (uVar18 <= uVar25) {
        uVar25 = uVar25 - uVar18;
      }
      uVar13 = uVar23;
      if (*(unsigned int *)(*(int *)(*(int *)((int)((uVar25 & 0xffffffff) << 2) + iVar1) +
                            (int)(((unsigned __int64)uVar21 & 3) << 2)) + 8) <
          *(unsigned int *)(*(int *)(*(int *)(*(int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar20 * 4) + (uVar15 & 3) * 4
                            ) + 8)) break;
      uVar21 = uVar21 - 1;
      uVar22 = uVar15 >> 2;
      uStack_d0 = CONCAT44((((unsigned __int64)(uStack_d0) >> 0) & 0xFFFFFFFF),uVar21);
      if (*(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar22) {
        uVar22 = uVar22 - *(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      }
      uVar25 = (unsigned __int64)(uVar21 >> 2);
      if (uVar18 <= uVar25) {
        uVar25 = uVar25 - uVar18;
      }
      iVar4 = (uVar21 & 3) * 4;
      iVar5 = (uVar15 & 3) * 4;
      iVar2 = *(int *)(*(int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar22 * 4);
      iVar1 = *(int *)((int)((uVar25 & 0xffffffff) << 2) + iVar1);
      uVar3 = *(unsigned int *)(iVar1 + iVar4);
      *(unsigned int *)(iVar1 + iVar4) = *(unsigned int *)(iVar2 + iVar5);
      *(unsigned int *)(iVar2 + iVar5) = uVar3;
      uVar12 = uStack_d0;
    }
    uStack_d0 = uVar12;
    uStack_c0 = CONCAT44((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar15);
    uVar19 = uStack_c0;
    uVar22 = uVar15;
    uVar12 = uStack_d0;
    uVar6 = uStack_c0;
    uStack_a8 = uVar23;
  } while( true );
  uStack_a8 = uVar13;
  uStack_b0 = ((((unsigned __int64)(uStack_b0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uStack_b8)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  if (uVar22 == uVar7) {
    if (uVar16 == uVar8) {
      *param_1 = uVar12;
      param_1[1] = uStack_c8;
      return param_1;
    }
    if (uVar24 != uVar16) {
      uVar20 = uVar24 >> 2;
      if (*(unsigned int *)(iVar10 + 8) <= uVar20) {
        uVar20 = uVar20 - *(unsigned int *)(iVar10 + 8);
      }
      uVar15 = uVar21 >> 2;
      if (*(unsigned int *)(iVar9 + 8) <= uVar15) {
        uVar15 = uVar15 - *(unsigned int *)(iVar9 + 8);
      }
      iVar4 = (uVar21 & 3) * 4;
      iVar5 = (uVar24 & 3) * 4;
      iVar1 = *(int *)(uVar20 * 4 + *(int *)(iVar10 + 4));
      iVar2 = *(int *)(uVar15 * 4 + *(int *)(iVar9 + 4));
      uVar3 = *(unsigned int *)(iVar2 + iVar4);
      *(unsigned int *)(iVar2 + iVar4) = *(unsigned int *)(iVar1 + iVar5);
      *(unsigned int *)(iVar1 + iVar5) = uVar3;
    }
    uVar24 = uVar24 + 1;
    uVar16 = uVar16 + 1;
    uVar21 = uVar21 + 1;
    uStack_c8 = CONCAT44((((unsigned __int64)(uStack_c8) >> 0) & 0xFFFFFFFF),uVar24);
    uStack_b8 = CONCAT44((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar16);
    uStack_d0 = CONCAT44((((unsigned __int64)(uStack_d0) >> 0) & 0xFFFFFFFF),uVar21);
    uVar20 = (((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF) >> 2;
    if (*(unsigned int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8) <= uVar20) {
      uVar20 = uVar20 - *(unsigned int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8);
    }
    uStack_a8 = ((((unsigned __int64)(uStack_a8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar12)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uVar15 = (((unsigned __int64)(uStack_a8) >> 32) & 0xFFFFFFFF) >> 2;
    if (*(unsigned int *)((((unsigned __int64)(uStack_d0) >> 0) & 0xFFFFFFFF) + 8) <= uVar15) {
      uVar15 = uVar15 - *(unsigned int *)((((unsigned __int64)(uStack_d0) >> 0) & 0xFFFFFFFF) + 8);
    }
    iVar4 = ((((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 3) * 4;
    iVar5 = ((((unsigned __int64)(uStack_a8) >> 32) & 0xFFFFFFFF) & 3) * 4;
    iVar1 = *(int *)(*(int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4) + uVar20 * 4);
    iVar2 = *(int *)(*(int *)((((unsigned __int64)(uStack_d0) >> 0) & 0xFFFFFFFF) + 4) + uVar15 * 4);
    uVar3 = *(unsigned int *)(iVar2 + iVar5);
    *(unsigned int *)(iVar2 + iVar5) = *(unsigned int *)(iVar1 + iVar4);
    *(unsigned int *)(iVar1 + iVar4) = uVar3;
    uStack_c0 = uVar6;
    uStack_b0 = uVar19;
    uStack_a8 = uVar12;
  }
  else {
    uVar22 = uVar22 - 1;
    uStack_c0 = CONCAT44((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar22);
    uVar23 = uStack_c0;
    uStack_b0 = uVar11;
    if (uVar16 == uVar8) {
      uVar21 = uVar21 - 1;
      uStack_d0 = CONCAT44((((unsigned __int64)(uStack_d0) >> 0) & 0xFFFFFFFF),uVar21);
      if (uVar22 != uVar21) {
        uVar20 = uVar21 >> 2;
        if (*(unsigned int *)(iVar9 + 8) <= uVar20) {
          uVar20 = uVar20 - *(unsigned int *)(iVar9 + 8);
        }
        uVar15 = uVar22 >> 2;
        if (*(unsigned int *)(iVar9 + 8) <= uVar15) {
          uVar15 = uVar15 - *(unsigned int *)(iVar9 + 8);
        }
        iVar4 = (uVar22 & 3) * 4;
        iVar5 = (uVar21 & 3) * 4;
        iVar1 = *(int *)(uVar20 * 4 + *(int *)(iVar9 + 4));
        iVar2 = *(int *)(*(int *)(iVar9 + 4) + uVar15 * 4);
        uVar3 = *(unsigned int *)(iVar2 + iVar4);
        *(unsigned int *)(iVar2 + iVar4) = *(unsigned int *)(iVar1 + iVar5);
        *(unsigned int *)(iVar1 + iVar5) = uVar3;
      }
      uVar24 = uVar24 - 1;
      uVar20 = uVar24 >> 2;
      uStack_c8 = CONCAT44((((unsigned __int64)(uStack_c8) >> 0) & 0xFFFFFFFF),uVar24);
      if (*(unsigned int *)(iVar10 + 8) <= uVar20) {
        uVar20 = uVar20 - *(unsigned int *)(iVar10 + 8);
      }
      uVar15 = uVar21 >> 2;
      if (*(unsigned int *)(iVar9 + 8) <= uVar15) {
        uVar15 = uVar15 - *(unsigned int *)(iVar9 + 8);
      }
      iVar4 = (uVar21 & 3) * 4;
      iVar5 = (uVar24 & 3) * 4;
      iVar1 = *(int *)(uVar20 * 4 + *(int *)(iVar10 + 4));
      iVar2 = *(int *)(uVar15 * 4 + *(int *)(iVar9 + 4));
      uVar3 = *(unsigned int *)(iVar2 + iVar4);
      *(unsigned int *)(iVar2 + iVar4) = *(unsigned int *)(iVar1 + iVar5);
      *(unsigned int *)(iVar1 + iVar5) = uVar3;
    }
    else {
      uVar16 = uVar16 + 1;
      uVar20 = uVar22 >> 2;
      uStack_b8 = CONCAT44((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar16);
      uStack_a8 = uVar19;
      if (*(unsigned int *)(iVar9 + 8) <= uVar20) {
        uVar20 = uVar20 - *(unsigned int *)(iVar9 + 8);
      }
      uVar15 = (((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF) >> 2;
      if (*(unsigned int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8) <= uVar15) {
        uVar15 = uVar15 - *(unsigned int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8);
      }
      iVar4 = (uVar22 & 3) * 4;
      iVar5 = ((((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF) & 3) * 4;
      iVar1 = *(int *)(*(int *)(iVar9 + 4) + uVar20 * 4);
      iVar2 = *(int *)(*(int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4) + uVar15 * 4);
      uVar3 = *(unsigned int *)(iVar2 + iVar5);
      *(unsigned int *)(iVar2 + iVar5) = *(unsigned int *)(iVar1 + iVar4);
      *(unsigned int *)(iVar1 + iVar4) = uVar3;
      uStack_d0 = uVar12;
    }
  }
  goto LAB_828c54e0;
}

