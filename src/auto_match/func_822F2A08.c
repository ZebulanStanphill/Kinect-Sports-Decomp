#define NAN(x) ((x) != (x))
extern unsigned int fStack_48;
extern int fn_822ABA88();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CCF70;
extern unsigned int lbl_831CCF74;


double fn_822F2A08(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float fVar3;
  int in_r0;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
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
  float afStack_50 [2];
  float fStack_48;
  float afStack_40 [4];
  float afStack_30 [4];
  float afStack_20 [8];
  
  iVar7 = 0x80;
  iVar6 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0xc) + 0x80U & 0xfffffff0);
  uVar19 = *puVar1;
  uVar20 = puVar1[1];
  uVar21 = puVar1[2];
  uVar22 = puVar1[3];
  puVar1 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = uVar19;
  puVar1[1] = uVar20;
  puVar1[2] = uVar21;
  puVar1[3] = uVar22;
  dVar8 = (double)lbl_82192734;
  if (iVar6 == 0) {
    afStack_50[0] = (float)((double)afStack_50[0] * dVar8);
    fStack_48 = (float)((double)fStack_48 * dVar8);
    puVar1 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
  }
  iVar6 = *(int *)(param_1 + 0xc);
  piVar5 = *(int **)(iVar6 + 0x1c);
  puVar1 = (unsigned int *)((int)afStack_20 + in_r0 & 0xfffffff0);
  *puVar1 = uVar19;
  puVar1[1] = uVar20;
  puVar1[2] = uVar21;
  puVar1[3] = uVar22;
  iVar4 = fn_822ABA88(*(unsigned int *)(piVar5[4] * 4 + *piVar5),*(unsigned int *)(iVar6 + 0x28) ^ 1);
  puVar1 = (unsigned int *)(iVar4 + 0x290U & 0xfffffff0);
  uVar12 = *puVar1;
  uVar13 = puVar1[1];
  uVar14 = puVar1[2];
  uVar15 = puVar1[3];
  iVar4 = fn_822ABA88(*(unsigned int *)(piVar5[4] * 4 + *piVar5),*(unsigned int *)(iVar6 + 0x28) ^ 1);
  iVar6 = *(int *)(iVar6 + 0x2c);
  puVar1 = (unsigned int *)(iVar4 + iVar7 & 0xfffffff0);
  uVar16 = puVar1[1];
  uVar17 = puVar1[2];
  uVar18 = puVar1[3];
  puVar2 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  if (iVar6 == 0) {
    afStack_50[0] = (float)((double)afStack_50[0] * dVar8);
  }
  puVar1 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
  uVar16 = puVar1[1];
  uVar17 = puVar1[2];
  uVar18 = puVar1[3];
  puVar2 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar16;
  puVar2[2] = uVar17;
  puVar2[3] = uVar18;
  puVar1 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1[2] = uVar14;
  puVar1[3] = uVar15;
  if (iVar6 == 0) {
    afStack_50[0] = (float)((double)afStack_50[0] * dVar8);
  }
  puVar1 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
  uVar12 = puVar1[1];
  uVar13 = puVar1[2];
  uVar14 = puVar1[3];
  puVar2 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar12;
  puVar2[2] = uVar13;
  puVar2[3] = uVar14;
  fVar3 = ltcg_pool_0_0f;
  puVar1 = (unsigned int *)((int)afStack_50 + in_r0 & 0xfffffff0);
  *puVar1 = uVar19;
  puVar1[1] = uVar20;
  puVar1[2] = uVar21;
  puVar1[3] = uVar22;
  dVar11 = (double)lbl_821CA460;
  dVar10 = dVar11;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((afStack_50[0] < fVar3) << 2) |
                (unsigned int)(NAN(afStack_50[0]) || NAN(fVar3)) << 2)) < 0.0) {
    dVar10 = dVar8;
  }
  dVar9 = dVar11;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((afStack_30[0] < fVar3) << 2) |
                (unsigned int)(NAN(afStack_30[0]) || NAN(fVar3)) << 2)) < 0.0) {
    dVar9 = dVar8;
  }
  if ((dVar10 != dVar9) || (ABS(afStack_30[0]) <= lbl_831CCF74)) {
    fVar3 = lbl_831CCF70;
    if (afStack_40[0] < afStack_20[0]) {
      return (double)lbl_831CCF70;
    }
  }
  else {
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((afStack_40[0] < fVar3) << 2) |
                  (unsigned int)(NAN(afStack_40[0]) || NAN(fVar3)) << 2)) < 0.0) {
      dVar11 = dVar8;
    }
    fVar3 = (float)(dVar11 * (double)lbl_831CCF70);
  }
  return -(double)fVar3;
}

