#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822AA718();
extern int fn_822ABA88();
extern int fn_823CC7A0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


unsigned __int64 fn_8236B1E8(int param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  float *pfVar5;
  float fVar6;
  int in_r0;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  float fVar10;
  float fVar11;
  float afStack_50 [20];
  
  piVar2 = *(int **)(*(int *)(param_1 + 0x20) + param_2 * 4);
  if (piVar2[1] - *piVar2 >> 2 != 0) {
    iVar7 = fn_823CC7A0();
    piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
    uVar9 = ZEXT48(piVar2);
    iVar8 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),param_3);
    iVar1 = *(int *)(iVar8 + 0x24);
    if ((iVar1 == 0) || (*(int *)(iVar1 + 0x160) == 0)) {
      uVar3 = iVar8 + 0x80U & 0xfffffff0;
      fVar10 = *(float *)(uVar3 + 4);
      fVar11 = *(float *)(uVar3 + 8);
    }
    else {
      uVar3 = iVar1 + 0x130U & 0xfffffff0;
      fVar10 = *(float *)(uVar3 + 4);
      fVar11 = *(float *)(uVar3 + 8);
    }
    fn_822AA718(afStack_50,uVar9);
    fVar6 = ltcg_pool_0_0f;
    uVar3 = (int)afStack_50 + in_r0 & 0xfffffff0;
    uVar4 = in_r0 + *(int *)(*(int *)(param_1 + 0x1c) + 4) & 0xfffffff0;
    fVar10 = *(float *)(uVar3 + 4) * (fVar10 - *(float *)(uVar4 + 4)) + 0.0 +
             *(float *)(uVar3 + 8) * (fVar11 - *(float *)(uVar4 + 8));
    pfVar5 = (float *)((int)afStack_50 + in_r0 & 0xfffffff0);
    *pfVar5 = fVar10;
    pfVar5[1] = fVar10;
    pfVar5[2] = fVar10;
    pfVar5[3] = fVar10;
    if ((fVar6 <= afStack_50[0]) &&
       (lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f,
       (float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 <
       *(float *)(iVar7 * 300 + param_1 + 0x598))) {
      return 1;
    }
  }
  return 0;
}

