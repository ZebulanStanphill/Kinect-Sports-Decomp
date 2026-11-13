extern unsigned int fStack_18;
extern unsigned int fStack_28;
extern unsigned int fStack_8;
extern unsigned int lbl_82195530;
extern unsigned int ltcg_pool_0_0f;


double fn_82334BD0(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  float *pfVar4;
  __int64 lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
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
  float afStack_40 [4];
  float afStack_30 [2];
  float fStack_28;
  float afStack_20 [2];
  float fStack_18;
  float afStack_10 [2];
  float fStack_8;
  
  iVar1 = *(int *)(param_1 + 0x28);
  puVar2 = (unsigned int *)(iVar1 + 0x50U & 0xfffffff0);
  uVar9 = *puVar2;
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  puVar2 = (unsigned int *)(param_2 + 0x1f0U & 0xfffffff0);
  uVar17 = *puVar2;
  uVar18 = puVar2[1];
  uVar19 = puVar2[2];
  uVar20 = puVar2[3];
  puVar2 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar2 = uVar17;
  puVar2[1] = uVar18;
  puVar2[2] = uVar19;
  puVar2[3] = uVar20;
  puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = uVar9;
  puVar2[1] = uVar10;
  puVar2[2] = uVar11;
  puVar2[3] = uVar12;
  if (afStack_40[0] < afStack_30[0]) {
    puVar2 = (unsigned int *)(param_2 + 0x200U & 0xfffffff0);
    uVar21 = *puVar2;
    uVar22 = puVar2[1];
    uVar23 = puVar2[2];
    uVar24 = puVar2[3];
    puVar2 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
    *puVar2 = uVar9;
    puVar2[1] = uVar10;
    puVar2[2] = uVar11;
    puVar2[3] = uVar12;
    puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
    *puVar2 = uVar21;
    puVar2[1] = uVar22;
    puVar2[2] = uVar23;
    puVar2[3] = uVar24;
    if (afStack_40[0] < afStack_30[0]) {
      puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      puVar2[2] = uVar11;
      puVar2[3] = uVar12;
      puVar2 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
      *puVar2 = uVar17;
      puVar2[1] = uVar18;
      puVar2[2] = uVar19;
      puVar2[3] = uVar20;
      if (afStack_40[2] < fStack_28) {
        puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
        *puVar2 = uVar9;
        puVar2[1] = uVar10;
        puVar2[2] = uVar11;
        puVar2[3] = uVar12;
        puVar2 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
        *puVar2 = uVar21;
        puVar2[1] = uVar22;
        puVar2[2] = uVar23;
        puVar2[3] = uVar24;
        if (fStack_28 < afStack_40[2]) {
          puVar2 = (unsigned int *)(iVar1 + 0xd0U & 0xfffffff0);
          uVar9 = *puVar2;
          uVar10 = puVar2[1];
          uVar11 = puVar2[2];
          uVar12 = puVar2[3];
          puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          afStack_40[3] = lbl_82195530;
          dVar8 = (double)ltcg_pool_0_0f;
          dVar7 = (double)lbl_82195530;
          if ((double)afStack_30[0] == dVar8) {
            afStack_40[0] = lbl_82195530;
          }
          else {
            puVar2 = (unsigned int *)(iVar1 + 0xd0U & 0xfffffff0);
            uVar13 = puVar2[1];
            uVar14 = puVar2[2];
            uVar15 = puVar2[3];
            puVar3 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            puVar2 = (unsigned int *)(iVar1 + 0x50U & 0xfffffff0);
            uVar13 = *puVar2;
            uVar14 = puVar2[1];
            uVar15 = puVar2[2];
            uVar16 = puVar2[3];
            puVar2 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
            *puVar2 = uVar17;
            puVar2[1] = uVar18;
            puVar2[2] = uVar19;
            puVar2[3] = uVar20;
            puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar2 = uVar13;
            puVar2[1] = uVar14;
            puVar2[2] = uVar15;
            puVar2[3] = uVar16;
            afStack_40[0] = (afStack_40[0] - afStack_30[0]) / afStack_30[0];
          }
          puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          if ((double)afStack_30[0] == dVar8) {
            afStack_40[1] = afStack_40[3];
          }
          else {
            iVar1 = *(int *)(param_1 + 0x28);
            puVar2 = (unsigned int *)(iVar1 + 0x50U & 0xfffffff0);
            uVar13 = puVar2[1];
            uVar14 = puVar2[2];
            uVar15 = puVar2[3];
            puVar3 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            puVar2 = (unsigned int *)(iVar1 + 0xd0U & 0xfffffff0);
            uVar13 = puVar2[1];
            uVar14 = puVar2[2];
            uVar15 = puVar2[3];
            puVar3 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar13;
            puVar3[2] = uVar14;
            puVar3[3] = uVar15;
            puVar2 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
            *puVar2 = uVar21;
            puVar2[1] = uVar22;
            puVar2[2] = uVar23;
            puVar2[3] = uVar24;
            afStack_40[1] = (afStack_20[0] - afStack_10[0]) / afStack_30[0];
          }
          puVar2 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          if ((double)fStack_8 == dVar8) {
            afStack_40[2] = afStack_40[3];
          }
          else {
            iVar1 = *(int *)(param_1 + 0x28);
            puVar2 = (unsigned int *)(iVar1 + 0x50U & 0xfffffff0);
            uVar13 = *puVar2;
            uVar14 = puVar2[1];
            uVar15 = puVar2[2];
            uVar16 = puVar2[3];
            puVar2 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
            *puVar2 = uVar17;
            puVar2[1] = uVar18;
            puVar2[2] = uVar19;
            puVar2[3] = uVar20;
            puVar2 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
            *puVar2 = uVar13;
            puVar2[1] = uVar14;
            puVar2[2] = uVar15;
            puVar2[3] = uVar16;
            puVar2 = (unsigned int *)(iVar1 + 0xd0U & 0xfffffff0);
            uVar17 = puVar2[1];
            uVar18 = puVar2[2];
            uVar19 = puVar2[3];
            puVar3 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar17;
            puVar3[2] = uVar18;
            puVar3[3] = uVar19;
            afStack_40[2] = (fStack_8 - fStack_18) / fStack_28;
          }
          puVar2 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
          *puVar2 = uVar9;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          if ((double)fStack_8 == dVar8) {
          }
          else {
            iVar1 = *(int *)(param_1 + 0x28);
            puVar2 = (unsigned int *)(iVar1 + 0x50U & 0xfffffff0);
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            puVar3 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar9;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            puVar2 = (unsigned int *)((int)afStack_10 + in_r0 & 0xfffffff0);
            *puVar2 = uVar21;
            puVar2[1] = uVar22;
            puVar2[2] = uVar23;
            puVar2[3] = uVar24;
            puVar2 = (unsigned int *)(iVar1 + 0xd0U & 0xfffffff0);
            uVar9 = puVar2[1];
            uVar10 = puVar2[2];
            uVar11 = puVar2[3];
            puVar3 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
            *puVar3 = *puVar2;
            puVar3[1] = uVar9;
            puVar3[2] = uVar10;
            puVar3[3] = uVar11;
            afStack_40[3] = (fStack_8 - fStack_18) / fStack_28;
          }
          pfVar4 = afStack_40;
          lVar5 = 4;
          do {
            dVar6 = (double)*pfVar4;
            if ((dVar8 < dVar6) && (dVar6 < dVar7)) {
              dVar7 = dVar6;
            }
            pfVar4 = pfVar4 + 1;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
          return dVar7;
        }
      }
    }
  }
  return (double)ltcg_pool_0_0f;
}

