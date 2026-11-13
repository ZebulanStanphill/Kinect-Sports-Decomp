#define NAN(x) ((x) != (x))
extern int fn_822ABA88();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CCA68;
extern unsigned int lbl_831CCA6C;
extern unsigned int lbl_83265A28;


double fn_822FA4F8(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  float fVar7;
  unsigned int uVar8;
  float fVar9;
  int in_r0;
  unsigned __int64 uVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  float afStack_30 [6];
  
  piVar4 = *(int **)(((unsigned int)((unsigned __int64)LZCOUNT(*(unsigned int *)(*(int *)(param_1 + 8) + 0x2c)) >> 3)
                     & 4) + **(int **)(*(int *)(param_1 + 4) + 8));
  uVar10 = (**(int (***)())(**(int **)(*(int *)(param_1 + 4) + 0x2e0) + 0x1c))();
  iVar11 = fn_822ABA88(*(unsigned int *)(piVar4[4] * 4 + *piVar4),uVar10);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x2c);
  puVar5 = (unsigned int *)(iVar11 + 0x80U & 0xfffffff0);
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  puVar6 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar12;
  puVar6[2] = uVar13;
  puVar6[3] = uVar14;
  fVar9 = lbl_82192734;
  if (iVar3 == 0) {
    afStack_30[0] = afStack_30[0] * lbl_82192734;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x844);
  iVar11 = *(int *)(*(int *)(param_1 + 4) + 0x83c);
  puVar5 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  fVar1 = *(float *)((iVar3 + 0x23) * 4 + iVar11);
  fVar2 = *(float *)((iVar3 + 0x28) * 4 + iVar11);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar8 = lbl_83265A28 & 0x7fffff;
  fVar7 = lbl_831CCA68;
  if (lbl_831CCA68 - fVar1 < 0.0) {
    fVar7 = fVar1;
  }
  fVar1 = lbl_831CCA6C;
  if (lbl_831CCA6C - fVar2 < 0.0) {
    fVar1 = fVar2;
  }
  puVar6 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar12;
  puVar6[2] = uVar13;
  puVar6[3] = uVar14;
  fVar2 = lbl_821CA460;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((afStack_30[0] < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(afStack_30[0]) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar2 = fVar9;
  }
  return (double)(((fVar1 - fVar7) * ((float)(uVar8 | 0x3f800000) - lbl_821CA460) + fVar7) * -fVar2)
  ;
}

