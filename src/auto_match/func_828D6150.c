#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_825AEE38();
extern int fn_828D54B8();
extern unsigned int uStack00000018;
extern unsigned int uStack00000020;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


void fn_828D6150(unsigned __int64 *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned __int64 uVar25;
  unsigned int uVar26;
  unsigned __int64 uVar27;
  unsigned __int64 *puStack00000014;
  unsigned __int64 uStack00000018;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack_c0;
  unsigned __int64 uStack_b8;
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  
  uStack00000020 = ((((unsigned __int64)(uStack00000020)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar10 = (((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF);
  uStack_b0 = ((((unsigned __int64)(uStack_b0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)param_3 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  uStack_b0 = CONCAT44((((unsigned __int64)(uStack_b0) >> 0) & 0xFFFFFFFF),(((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) - 1);
  uStack00000018 = ((((unsigned __int64)(uStack00000018)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_2)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar9 = (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack00000020 = ((((unsigned __int64)(uStack00000020)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) - (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF))) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar23 = ((int)(((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) >> 1) +
           (unsigned int)((int)(((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) < 0 && ((((unsigned __int64)(uStack00000020) >> 32) & 0xFFFFFFFF) & 1) != 0) +
           (((unsigned __int64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  uStack_a8 = ((((unsigned __int64)(uStack_a8)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)param_2 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  iVar1 = (((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF);
  uStack_a8 = CONCAT44((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF),uVar23);
  uVar25 = uStack_a8;
  puStack00000014 = param_1;
  uStack00000018 = param_2;
  uStack00000020 = param_3;
  fn_828D54B8(param_2,uStack_a8,uStack_b0);
  uVar26 = uVar23 + 1;
  uStack_b0 = CONCAT44(iVar1,uVar26);
  uStack_c0 = uVar25;
  uStack_b8 = uStack_b0;
  if (uVar9 < uVar23) {
    uVar15 = (unsigned __int64)*(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
    while( true ) {
      uVar18 = uVar23 - 1;
      uVar24 = uVar18 >> 2;
      uStack_a0 = uStack_c0;
      uVar25 = uStack_a0;
      uStack_a0 = ((((unsigned __int64)(uStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)uStack_c0 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      iVar11 = (((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF);
      if (*(unsigned int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8) <= uVar24) {
        uVar24 = uVar24 - *(unsigned int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8);
      }
      uVar20 = (unsigned __int64)(uVar23 >> 2);
      uVar19 = uVar20;
      if (uVar15 <= uVar20) {
        uVar19 = uVar20 - uVar15;
      }
      piVar5 = (int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 4);
      uStack_a0 = uVar25;
      if (*(unsigned int *)(*(int *)(*piVar5 + uVar24 * 4) + (uVar18 & 3) * 4) <
          *(unsigned int *)(*(int *)((int)((uVar19 & 0xffffffff) << 2) + *(int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4)) +
                   (int)(((unsigned __int64)uVar23 & 3) << 2))) break;
      if (uVar15 <= uVar20) {
        uVar20 = uVar20 - uVar15;
      }
      uStack_a0 = uStack_c0;
      uVar24 = uVar18 >> 2;
      if (*(unsigned int *)(iVar11 + 8) <= uVar24) {
        uVar24 = uVar24 - *(unsigned int *)(iVar11 + 8);
      }
      if ((*(unsigned int *)(*(int *)((int)((uVar20 & 0xffffffff) << 2) + *(int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4)) +
                    (int)(((unsigned __int64)uVar23 & 3) << 2)) <
           *(unsigned int *)(*(int *)(*(int *)(iVar11 + 4) + uVar24 * 4) + (uVar18 & 3) * 4)) ||
         (uStack_c0 = CONCAT44(iVar11,uVar18), uVar23 = uVar18, uVar18 <= uVar9)) break;
    }
  }
  if (uVar26 < uVar10) {
    uVar15 = (unsigned __int64)*(unsigned int *)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 4);
    puVar16 = (unsigned int *)fn_825AEE38(&uStack_c0);
    uVar26 = (((unsigned __int64)(uStack_b8) >> 32) & 0xFFFFFFFF);
    do {
      uVar20 = (unsigned __int64)(uVar26 >> 2);
      uVar19 = uVar20;
      if (uVar15 <= uVar20) {
        uVar19 = uVar20 - uVar15;
      }
      if (*(unsigned int *)(*(int *)((int)((uVar19 & 0xffffffff) << 2) + iVar1) +
                   (int)(((unsigned __int64)uVar26 & 3) << 2)) < *puVar16) break;
      if (uVar15 <= uVar20) {
        uVar20 = uVar20 - uVar15;
      }
      if (*puVar16 <
          *(unsigned int *)(*(int *)((int)((uVar20 & 0xffffffff) << 2) + iVar1) +
                   (int)(((unsigned __int64)uVar26 & 3) << 2))) break;
      uVar26 = uVar26 + 1;
      uStack_b8 = CONCAT44((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar26);
    } while (uVar26 < uVar10);
  }
  iVar1 = (((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF);
  iVar11 = (((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF);
  uStack_a8 = uStack_b8;
  uVar12 = uStack_a8;
  uStack_b0 = uStack_c0;
  uVar25 = uStack_b0;
  uStack_a8 = ((((unsigned __int64)(uStack_a8)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uStack_b8)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uStack_b0 = ((((unsigned __int64)(uStack_b0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uStack_c0)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar18 = (((unsigned __int64)(uStack_a8) >> 32) & 0xFFFFFFFF);
  uVar24 = (((unsigned __int64)(uStack_b0) >> 32) & 0xFFFFFFFF);
  uStack_b0 = uVar25;
  uStack_a8 = uVar12;
LAB_828d6370:
  uVar14 = uVar25;
  uVar12 = uStack_c0;
  uVar8 = uStack_b0;
  if (uVar18 < uVar10) {
    do {
      uVar27 = (unsigned __int64)*(unsigned int *)(iVar11 + 8);
      uVar15 = (unsigned __int64)(uVar18 >> 2);
      uVar20 = (unsigned __int64)uVar18 & 3;
      uVar19 = uVar15;
      if (uVar27 <= uVar15) {
        uVar19 = uVar15 - uVar27;
      }
      iVar2 = *(int *)(iVar11 + 4);
      puVar16 = (unsigned int *)fn_825AEE38(&uStack_c0);
      uVar25 = uStack_b8;
      uVar12 = uStack_c0;
      uVar8 = uStack_b0;
      if (*(unsigned int *)(*(int *)((int)((uVar19 & 0xffffffff) << 2) + iVar2) + (int)(uVar20 << 2)) <=
          *puVar16) {
        uVar19 = uVar15;
        if (uVar27 <= uVar15) {
          uVar19 = uVar15 - uVar27;
        }
        if (*(unsigned int *)(*(int *)((int)((uVar19 & 0xffffffff) << 2) + iVar2) + (int)(uVar20 << 2)) <
            *puVar16) break;
        uVar26 = uVar26 + 1;
        uStack_b8 = CONCAT44((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar26);
        uStack_a0 = uVar25;
        if (uVar27 <= uVar15) {
          uVar15 = uVar15 - uVar27;
        }
        uStack_a0 = ((((unsigned __int64)(uStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar25)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
        uVar21 = (((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF) >> 2;
        if (*(unsigned int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8) <= uVar21) {
          uVar21 = uVar21 - *(unsigned int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 8);
        }
        iVar7 = ((((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF) & 3) * 4;
        iVar2 = *(int *)((int)((uVar15 & 0xffffffff) << 2) + iVar2);
        iVar3 = *(int *)(*(int *)((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF) + 4) + uVar21 * 4);
        iVar6 = (int)(((unsigned __int64)uVar18 & 3) << 2);
        uVar4 = *(unsigned int *)(iVar3 + iVar7);
        *(unsigned int *)(iVar3 + iVar7) = *(unsigned int *)(iVar2 + iVar6);
        *(unsigned int *)(iVar2 + iVar6) = uVar4;
        uStack_a0 = uVar25;
      }
      uVar18 = uVar18 + 1;
      uStack_a8 = CONCAT44((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF),uVar18);
    } while (uVar18 < uVar10);
  }
  do {
    uVar25 = uVar14;
    uVar14 = uStack_a8;
    uStack_c0 = ((((unsigned __int64)(uStack_c0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)uVar12 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uStack_b0 = ((((unsigned __int64)(uStack_b0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((unsigned int)((unsigned __int64)uVar8 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    uVar13 = uStack_a0;
    if (uVar24 <= uVar9) break;
    uVar17 = uVar24 - 1;
    uVar21 = uVar17 >> 2;
    uStack_a0 = ((((unsigned __int64)(uStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)((unsigned __int64)uVar25 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
    if (*(unsigned int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8) <= uVar21) {
      uVar21 = uVar21 - *(unsigned int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8);
    }
    uVar19 = (unsigned __int64)*(unsigned int *)(iVar1 + 8);
    uVar15 = (unsigned __int64)(uVar23 >> 2);
    uVar20 = uVar15;
    if (uVar19 <= uVar15) {
      uVar20 = uVar15 - uVar19;
    }
    iVar2 = *(int *)(iVar1 + 4);
    if (*(unsigned int *)(*(int *)((int)((uVar20 & 0xffffffff) << 2) + iVar2) +
                 (int)(((unsigned __int64)uVar23 & 3) << 2)) <=
        *(unsigned int *)(*(int *)(*(int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 4) + uVar21 * 4) + (uVar17 & 3) * 4)) {
      if (uVar19 <= uVar15) {
        uVar15 = uVar15 - uVar19;
      }
      uVar21 = uVar17 >> 2;
      if (*(unsigned int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8) <= uVar21) {
        uVar21 = uVar21 - *(unsigned int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8);
      }
      uVar13 = uVar25;
      if (*(unsigned int *)(*(int *)((int)((uVar15 & 0xffffffff) << 2) + iVar2) +
                   (int)(((unsigned __int64)uVar23 & 3) << 2)) <
          *(unsigned int *)(*(int *)(*(int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 4) + uVar21 * 4) + (uVar17 & 3) * 4)) break;
      uVar23 = uVar23 - 1;
      uVar24 = uVar17 >> 2;
      uStack_c0 = CONCAT44((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar23);
      if (*(unsigned int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8) <= uVar24) {
        uVar24 = uVar24 - *(unsigned int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 8);
      }
      uVar15 = (unsigned __int64)(uVar23 >> 2);
      if (uVar19 <= uVar15) {
        uVar15 = uVar15 - uVar19;
      }
      iVar6 = (uVar23 & 3) * 4;
      iVar7 = (uVar17 & 3) * 4;
      iVar3 = *(int *)(*(int *)((((unsigned __int64)(uStack_a0) >> 0) & 0xFFFFFFFF) + 4) + uVar24 * 4);
      iVar2 = *(int *)((int)((uVar15 & 0xffffffff) << 2) + iVar2);
      uVar4 = *(unsigned int *)(iVar2 + iVar6);
      *(unsigned int *)(iVar2 + iVar6) = *(unsigned int *)(iVar3 + iVar7);
      *(unsigned int *)(iVar3 + iVar7) = uVar4;
      uVar12 = uStack_c0;
    }
    uStack_c0 = uVar12;
    uStack_b0 = CONCAT44((((unsigned __int64)(uStack_b0) >> 0) & 0xFFFFFFFF),uVar17);
    uVar14 = uStack_b0;
    uVar24 = uVar17;
    uVar12 = uStack_c0;
    uVar8 = uStack_b0;
    uStack_a0 = uVar25;
  } while( true );
  uStack_a0 = uVar13;
  uVar13 = uStack_a0;
  uStack_a0 = ((((unsigned __int64)(uStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uStack_a8)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar21 = (((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF);
  if (uVar24 == uVar9) {
    if (uVar18 == uVar10) {
      *puStack00000014 = uVar12;
      puStack00000014[1] = uStack_b8;
      return;
    }
    if (uVar26 != uVar18) {
      uVar17 = uVar26 >> 2;
      if (*(unsigned int *)(iVar11 + 8) <= uVar17) {
        uVar17 = uVar17 - *(unsigned int *)(iVar11 + 8);
      }
      uVar22 = uVar23 >> 2;
      if (*(unsigned int *)(iVar1 + 8) <= uVar22) {
        uVar22 = uVar22 - *(unsigned int *)(iVar1 + 8);
      }
      iVar6 = (uVar23 & 3) * 4;
      iVar7 = (uVar26 & 3) * 4;
      iVar2 = *(int *)(uVar17 * 4 + *(int *)(iVar11 + 4));
      iVar3 = *(int *)(uVar22 * 4 + *(int *)(iVar1 + 4));
      uVar4 = *(unsigned int *)(iVar3 + iVar6);
      *(unsigned int *)(iVar3 + iVar6) = *(unsigned int *)(iVar2 + iVar7);
      *(unsigned int *)(iVar2 + iVar7) = uVar4;
    }
    uVar26 = uVar26 + 1;
    uVar18 = uVar18 + 1;
    uVar23 = uVar23 + 1;
    uStack_b8 = CONCAT44((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar26);
    uStack_a8 = CONCAT44((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF),uVar18);
    uStack_c0 = CONCAT44((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar23);
    uVar17 = (((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF) >> 2;
    if (*(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar17) {
      uVar17 = uVar17 - *(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
    }
    uStack_a0 = ((((unsigned __int64)(uStack_a0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)uVar12)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
    uVar22 = (((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF) >> 2;
    if (*(unsigned int *)((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF) + 8) <= uVar22) {
      uVar22 = uVar22 - *(unsigned int *)((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF) + 8);
    }
    iVar6 = (uVar21 & 3) * 4;
    iVar7 = ((((unsigned __int64)(uStack_a0) >> 32) & 0xFFFFFFFF) & 3) * 4;
    iVar2 = *(int *)(*(int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar17 * 4);
    iVar3 = *(int *)(*(int *)((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF) + 4) + uVar22 * 4);
    uVar4 = *(unsigned int *)(iVar3 + iVar7);
    *(unsigned int *)(iVar3 + iVar7) = *(unsigned int *)(iVar2 + iVar6);
    *(unsigned int *)(iVar2 + iVar6) = uVar4;
    uStack_b0 = uVar8;
    uStack_a0 = uVar12;
  }
  else {
    uVar24 = uVar24 - 1;
    uStack_b0 = CONCAT44((((unsigned __int64)(uStack_b0) >> 0) & 0xFFFFFFFF),uVar24);
    uVar25 = uStack_b0;
    if (uVar18 == uVar10) {
      uVar23 = uVar23 - 1;
      uStack_c0 = CONCAT44((((unsigned __int64)(uStack_c0) >> 0) & 0xFFFFFFFF),uVar23);
      if (uVar24 != uVar23) {
        uVar21 = uVar23 >> 2;
        if (*(unsigned int *)(iVar1 + 8) <= uVar21) {
          uVar21 = uVar21 - *(unsigned int *)(iVar1 + 8);
        }
        uVar17 = uVar24 >> 2;
        if (*(unsigned int *)(iVar1 + 8) <= uVar17) {
          uVar17 = uVar17 - *(unsigned int *)(iVar1 + 8);
        }
        iVar6 = (uVar24 & 3) * 4;
        iVar7 = (uVar23 & 3) * 4;
        iVar2 = *(int *)(uVar21 * 4 + *(int *)(iVar1 + 4));
        iVar3 = *(int *)(*(int *)(iVar1 + 4) + uVar17 * 4);
        uVar4 = *(unsigned int *)(iVar3 + iVar6);
        *(unsigned int *)(iVar3 + iVar6) = *(unsigned int *)(iVar2 + iVar7);
        *(unsigned int *)(iVar2 + iVar7) = uVar4;
      }
      uVar26 = uVar26 - 1;
      uVar21 = uVar26 >> 2;
      uStack_b8 = CONCAT44((((unsigned __int64)(uStack_b8) >> 0) & 0xFFFFFFFF),uVar26);
      if (*(unsigned int *)(iVar11 + 8) <= uVar21) {
        uVar21 = uVar21 - *(unsigned int *)(iVar11 + 8);
      }
      uVar17 = uVar23 >> 2;
      if (*(unsigned int *)(iVar1 + 8) <= uVar17) {
        uVar17 = uVar17 - *(unsigned int *)(iVar1 + 8);
      }
      iVar6 = (uVar23 & 3) * 4;
      iVar7 = (uVar26 & 3) * 4;
      iVar2 = *(int *)(uVar21 * 4 + *(int *)(iVar11 + 4));
      iVar3 = *(int *)(uVar17 * 4 + *(int *)(iVar1 + 4));
      uVar4 = *(unsigned int *)(iVar3 + iVar6);
      *(unsigned int *)(iVar3 + iVar6) = *(unsigned int *)(iVar2 + iVar7);
      *(unsigned int *)(iVar2 + iVar7) = uVar4;
      uStack_a0 = uVar13;
    }
    else {
      uVar18 = uVar18 + 1;
      uVar17 = uVar24 >> 2;
      uStack_a8 = CONCAT44((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF),uVar18);
      uStack_a0 = uVar14;
      if (*(unsigned int *)(iVar1 + 8) <= uVar17) {
        uVar17 = uVar17 - *(unsigned int *)(iVar1 + 8);
      }
      uVar22 = uVar21 >> 2;
      if (*(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8) <= uVar22) {
        uVar22 = uVar22 - *(unsigned int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 8);
      }
      iVar6 = (uVar24 & 3) * 4;
      iVar7 = (uVar21 & 3) * 4;
      iVar2 = *(int *)(*(int *)(iVar1 + 4) + uVar17 * 4);
      iVar3 = *(int *)(*(int *)((((unsigned __int64)(uStack_a8) >> 0) & 0xFFFFFFFF) + 4) + uVar22 * 4);
      uVar4 = *(unsigned int *)(iVar3 + iVar7);
      *(unsigned int *)(iVar3 + iVar7) = *(unsigned int *)(iVar2 + iVar6);
      *(unsigned int *)(iVar2 + iVar6) = uVar4;
      uStack_c0 = uVar12;
    }
  }
  goto LAB_828d6370;
}

