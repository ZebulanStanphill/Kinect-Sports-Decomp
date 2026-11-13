extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern unsigned int fStack_70;
extern int fn_822ABA88();
extern int fn_8230F100();
extern int fn_82310C68();
extern int fn_82310E28();
extern int fn_82809D40();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82195628;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_8230D558(void)

{
  float fVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_r0;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  
  iVar9 = fn_82F6A544();
  iVar10 = *(int *)(iVar9 + 4);
  *(unsigned char *)(iVar9 + 0x440) = 0;
  *(unsigned char *)(iVar9 + 0x441) = 0;
  *(unsigned int *)(iVar9 + 0x150) = (unsigned int)LZCOUNT(iVar10 + -0x1d) >> 5;
  iVar12 = iVar9 + 0x400;
  *(unsigned int *)(iVar9 + 0x154) = (unsigned int)LZCOUNT(iVar10 + -0xc) >> 5;
  *(unsigned int *)(iVar9 + 0x158) = (unsigned int)LZCOUNT(iVar10 + -0xd) >> 5;
  if (iVar12 != 0) {
    puVar3 = (unsigned int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xe10) + 0x50U & 0xfffffff0);
    uVar19 = puVar3[1];
    uVar20 = puVar3[2];
    uVar21 = puVar3[3];
    puVar4 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar19;
    puVar4[2] = uVar20;
    puVar4[3] = uVar21;
  }
  iVar10 = *(int *)(iVar9 + 4);
  puVar3 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
  uVar19 = puVar3[1];
  uVar20 = puVar3[2];
  uVar21 = puVar3[3];
  puVar4 = (unsigned int *)(iVar9 + 0x450U & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar19;
  puVar4[2] = uVar20;
  puVar4[3] = uVar21;
  fVar6 = ltcg_pool_0_0f;
  dVar14 = (double)ltcg_pool_0_0f;
  dVar13 = dVar14;
  if (iVar10 == 0xd) {
    dVar13 = (double)*(float *)(iVar9 + 0x20);
  }
  *(float *)(iVar9 + 0x480) = (float)dVar13;
  *(float *)(iVar9 + 0x4c0) = fVar6;
  *(float *)(iVar9 + 0x4c4) = fVar6;
  *(unsigned int *)(iVar9 + 0x484) = 0;
  *(unsigned int *)(iVar9 + 0x490) = 0;
  *(unsigned int *)(iVar9 + 0x488) = (unsigned int)LZCOUNT(*(unsigned int *)(iVar9 + 0x488)) >> 5;
  fVar7 = lbl_821CA460;
  if (*(int *)(iVar9 + 0x158) == 0) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar5 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460;
    if (*(int *)(iVar9 + 0x150) == 0) {
      fVar1 = *(float *)(iVar9 + 0x14);
    }
    else {
      fVar1 = *(float *)(iVar9 + 0x18);
    }
  }
  else {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = *(float *)(iVar9 + 0x1c);
    fVar5 = (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460;
  }
  *(unsigned int *)(iVar9 + 0x48c) = (unsigned int)(fVar5 < fVar1);
  *(float *)(iVar9 + 0x4cc) = fVar7;
  *(float *)(iVar9 + 0x4d0) = fVar6;
  *(unsigned int *)(iVar9 + 0x14c) = 0;
  if (*(char *)(iVar9 + 0x4ca) != '\0') {
    *(unsigned int *)(iVar9 + 0x48c) = 0;
    *(unsigned char *)(iVar9 + 0x4ca) = 0;
  }
  fn_82310C68(iVar9,iVar9 + 0x160);
  fVar8 = lbl_821CA460;
  fVar1 = lbl_821916FC;
  dVar13 = (double)lbl_82195628;
  iVar10 = *(int *)(iVar9 + 0xc);
  puVar3 = (unsigned int *)(iVar10 + 0x80U & 0xfffffff0);
  uVar19 = puVar3[1];
  uVar20 = puVar3[2];
  uVar21 = puVar3[3];
  puVar4 = (unsigned int *)(in_r0 + iVar9 + 0x160 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar19;
  puVar4[2] = uVar20;
  puVar4[3] = uVar21;
  puVar3 = (unsigned int *)(iVar10 + 0x90U & 0xfffffff0);
  uVar19 = puVar3[1];
  uVar20 = puVar3[2];
  uVar21 = puVar3[3];
  puVar4 = (unsigned int *)((int)&fStack_70 + in_r0 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar19;
  puVar4[2] = uVar20;
  puVar4[3] = uVar21;
  fVar6 = fStack_6c * fVar1;
  fVar7 = fStack_68 * fVar1;
  fVar5 = fStack_70 * fStack_70 * fVar1;
  dVar18 = (double)(fStack_64 * fVar6 + fVar7 * fStack_70);
  dVar15 = (double)(fVar7 * fStack_6c - fStack_64 * fStack_70 * fVar1);
  dVar17 = (double)(fVar8 - (fStack_6c * fVar6 + fVar5));
  dVar16 = (double)SQRT((float)(dVar17 * dVar17 + (double)(float)(dVar18 * dVar18)));
  if (dVar16 <= dVar13) {
    dVar13 = (double)fn_82809D40(-(double)(fVar6 * fStack_70 - fStack_64 * fVar7),
                                  (double)(fVar8 - (fStack_68 * fVar7 + fStack_6c * fVar6)));
    fStack_68 = (float)dVar13;
    dVar13 = (double)fn_82809D40(-dVar15,dVar16);
    fStack_70 = (float)dVar13;
  }
  else {
    dVar14 = (double)fn_82809D40((double)(fVar6 * fStack_70 + fStack_64 * fVar7),
                                  (double)(fVar8 - (fStack_68 * fVar7 + fVar5)));
    fStack_68 = (float)dVar14;
    dVar14 = (double)fn_82809D40(-dVar15,dVar16);
    fStack_70 = (float)dVar14;
    dVar14 = (double)fn_82809D40(dVar18,dVar17);
  }
  fStack_6c = (float)dVar14;
  *(float *)(iVar9 + 0x170) = fStack_70;
  *(float *)(iVar9 + 0x174) = fStack_6c;
  *(float *)(iVar9 + 0x178) = fStack_68;
  if (iVar12 != 0) {
    puVar3 = (unsigned int *)(*(int *)(*(int *)(iVar9 + 0x10) + 0xe10) + 0x50U & 0xfffffff0);
    uVar19 = puVar3[1];
    uVar20 = puVar3[2];
    uVar21 = puVar3[3];
    puVar4 = (unsigned int *)(in_r0 + iVar12 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar19;
    puVar4[2] = uVar20;
    puVar4[3] = uVar21;
  }
  piVar2 = *(int **)(*(int *)(iVar9 + 0xc) + 0x1c);
  piVar2 = *(int **)(*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x10) * 4 +
                    *(int *)(*(int *)(iVar9 + 0x10) + 0x20));
  if ((piVar2[1] - *piVar2 & 0xfffffffcU) == 0) {
    uVar11 = 2;
  }
  else {
    iVar10 = fn_8230F100(iVar9);
    uVar11 = 1;
    if (iVar10 == 0) {
      uVar11 = 0;
    }
  }
  fn_82310E28(iVar9,uVar11);
  *(unsigned char *)(iVar9 + 0x4c8) = 0;
  *(unsigned int *)(*(int *)(iVar9 + 0xc) + 0x200) = 0;
  if (*(int *)(iVar9 + 0x158) == 0) {
    piVar2 = *(int **)(((unsigned int)LZCOUNT(*(unsigned int *)(*(int *)(iVar9 + 0xc) + 0x2c)) >> 3 & 4) +
                      **(int **)(*(int *)(iVar9 + 0x10) + 8));
    iVar10 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),0);
    *(unsigned int *)(iVar10 + 0x200) = 0;
  }
  *(unsigned char *)(iVar9 + 0x4c9) = 0;
  fn_82F6A590();
  return;
}

