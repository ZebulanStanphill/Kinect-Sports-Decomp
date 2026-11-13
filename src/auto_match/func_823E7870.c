#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_1d0;
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern int fn_822ABA88();
extern int fn_822ACC48();
extern int fn_823D2A18();
extern int fn_823DC098();
extern int fn_82526C70();
extern unsigned int stack0x00000000;


void fn_823E7870(unsigned int param_1,unsigned int *param_2,int param_3,unsigned int *param_4,
                  unsigned int *param_5)

{
  int iVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 in_r0;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  __int64 lVar18;
  __int64 lVar19;
  __int64 lVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int auStack_280 [8];
  unsigned int auStack_260 [9];
  int aiStack_23c [27];
  unsigned int auStack_1d0 [80];
  
  uVar4 = ZEXT48(&stack0x00000000);
  uVar5 = fn_823D2A18();
  fn_82526C70(uVar4 - 0xf0,0x80,0xffffffff821b65ec,uVar5);
  fn_822ACC48(*(unsigned int *)(*(int *)(param_2[4] * 4 + *param_2) + 0x48),uVar4 - 0xf0,7,
                    uVar4 - 0x240);
  uVar13 = (unsigned __int64)*param_2;
  uVar16 = 0xffffffffffffffff;
  lVar11 = ((unsigned __int64)param_2[4] & 0x3fffffff) << 2;
  uVar22 = 0;
  lVar17 = 0;
  uVar8 = 0;
  uVar7 = *(unsigned int *)(*(int *)((int)lVar11 + *param_2) + 8);
  if (uVar7 != 0) {
    lVar19 = uVar4 - 0x284;
    lVar10 = uVar4 - 0x1d0;
    lVar20 = uVar4 - 0x240;
    lVar18 = uVar4 - 0x264;
    lVar9 = uVar4 - 0x160;
    do {
      iVar6 = fn_822ABA88(*(unsigned int *)((int)lVar11 + (int)uVar13));
      iVar1 = *(int *)(iVar6 + 0x1ec);
      if (iVar1 != 0) {
        uVar16 = uVar8;
      }
      iVar3 = (int)in_r0;
      if (param_3 == iVar6) {
LAB_823e7964:
        if (iVar1 != 0) goto LAB_823e796c;
LAB_823e7974:
        puVar12 = (unsigned int *)(iVar3 + (int)lVar20 & 0xfffffff0);
        uVar21 = *puVar12;
        uVar23 = puVar12[1];
        uVar24 = puVar12[2];
        uVar25 = puVar12[3];
        lVar19 = lVar19 + 4;
        *(unsigned int *)lVar19 = (int)uVar8;
        puVar12 = (unsigned int *)(iVar3 + (int)lVar10 & 0xfffffff0);
        *puVar12 = uVar21;
        puVar12[1] = uVar23;
        puVar12[2] = uVar24;
        puVar12[3] = uVar25;
        uVar22 = uVar22 + 1;
        lVar10 = lVar10 + 0x10;
      }
      else {
        if (iVar1 == 0) {
          lVar18 = lVar18 + 4;
          *(unsigned int *)lVar18 = (int)uVar8;
          lVar17 = lVar17 + 1;
          puVar12 = (unsigned int *)(iVar6 + 0x80U & 0xfffffff0);
          uVar21 = puVar12[1];
          uVar23 = puVar12[2];
          uVar24 = puVar12[3];
          puVar2 = (unsigned int *)(iVar3 + (int)lVar9 & 0xfffffff0);
          *puVar2 = *puVar12;
          puVar2[1] = uVar21;
          puVar2[2] = uVar23;
          puVar2[3] = uVar24;
          lVar9 = lVar9 + 0x10;
          goto LAB_823e7964;
        }
LAB_823e796c:
        if (param_3 == iVar6) goto LAB_823e7974;
      }
      uVar8 = uVar8 + 1;
      lVar20 = lVar20 + 0x10;
    } while ((uVar8 & 0xffffffff) < (unsigned __int64)uVar7);
  }
  uVar21 = 0xffffffff;
  if ((param_3 != 0) && (param_4 != (unsigned int *)0x0)) {
    uVar8 = (**(int (***)())*param_4)(param_4,param_3,uVar4 - 0x1d0,uVar4 - 0x280,uVar22);
    uVar22 = uVar22 - 1;
    iVar3 = (int)((uVar8 & 0xffffffff) << 2);
    iVar1 = (int)((uVar22 & 0xffffffff) << 4);
    iVar6 = (int)((uVar8 & 0xffffffff) << 4);
    uVar21 = *(unsigned int *)((int)auStack_280 + iVar3);
    uVar23 = *(unsigned int *)((int)auStack_1d0 + iVar1);
    uVar24 = *(unsigned int *)((int)auStack_1d0 + iVar1 + 4);
    uVar25 = *(unsigned int *)((int)auStack_1d0 + iVar1 + 8);
    uVar26 = *(unsigned int *)((int)auStack_1d0 + iVar1 + 0xc);
    *(unsigned int *)((int)auStack_280 + iVar3) =
         *(unsigned int *)((int)auStack_280 + (int)((uVar22 & 0xffffffff) << 2));
    *(unsigned int *)((int)auStack_1d0 + iVar6) = uVar23;
    *(unsigned int *)((int)auStack_1d0 + iVar6 + 4) = uVar24;
    *(unsigned int *)((int)auStack_1d0 + iVar6 + 8) = uVar25;
    *(unsigned int *)((int)auStack_1d0 + iVar6 + 0xc) = uVar26;
  }
  lVar11 = uVar4 - 0x244;
  lVar18 = 7;
  do {
    *(unsigned int *)((int)lVar11 + 4) = 0;
    lVar11 = lVar11 + 8;
    *(unsigned int *)lVar11 = 0;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  uVar7 = fn_823DC098(uVar4 - 0x160,lVar17,uVar4 - 0x1d0,uVar22,uVar4 - 0x240);
  uVar8 = 0;
  puVar12 = param_5;
  if (*(int *)(*(int *)(param_2[4] * 4 + *param_2) + 8) != 0) {
    do {
      puVar12 = puVar12 + 1;
      if ((param_3 == 0) || ((uVar8 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_3 + 0x28))) {
        if ((uVar8 & 0xffffffff) == (uVar16 & 0xffffffff)) {
          *puVar12 = 0;
        }
        else {
          uVar15 = 0;
          uVar14 = 0xffffffff;
          if (uVar7 != 0) {
            lVar11 = uVar4 - 0x240;
            do {
              uVar14 = uVar15;
              if ((unsigned __int64)auStack_260[*(int *)lVar11] == (uVar8 & 0xffffffff)) break;
              uVar15 = uVar15 + 1;
              lVar11 = lVar11 + 8;
              uVar14 = 0xffffffff;
            } while (uVar15 < uVar7);
          }
          *puVar12 = auStack_280[aiStack_23c[uVar14 * 2]];
        }
      }
      else {
        *puVar12 = uVar21;
      }
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(param_2[4] * 4 + *param_2) + 8));
  }
  *param_5 = param_1;
  return;
}

