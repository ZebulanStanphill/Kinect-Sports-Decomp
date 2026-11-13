extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int lbl_82132D70;
extern unsigned int lbl_82134504;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;


void fn_82D48570(int param_1,char param_2,unsigned __int64 param_3)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  unsigned __int64 in_r0;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  unsigned int auStack_70 [4];
  unsigned int auStack_60 [24];
  
  iVar4 = (int)in_r0;
  *(char *)(param_1 + 0x40) = param_2;
  if (param_2 != '\0') {
    iVar5 = 0;
    auStack_70[0] = lbl_82134508;
    auStack_60[0] = lbl_82134504;
    fVar12 = *(float *)((int)auStack_70 + iVar4 & 0xfffffff0);
    fVar8 = *(float *)((int)auStack_60 + iVar4 & 0xfffffff0);
    fVar15 = fVar8;
    fVar14 = fVar8;
    fVar13 = fVar8;
    fVar18 = fVar12;
    fVar17 = fVar12;
    fVar16 = fVar12;
    if (0 < *(int *)(param_1 + 0x48)) {
      iVar6 = 0;
      dVar7 = (double)lbl_821AAD20;
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x44) + iVar6);
        (**(int (***)())(*piVar1 + 0x1c))(dVar7,piVar1,0xffffffff8323b1d0,param_3,auStack_70);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
        iVar4 = (int)in_r0;
        pfVar2 = (float *)((int)auStack_70 + iVar4 & 0xfffffff0);
        pfVar3 = (float *)((int)auStack_60 + iVar4 & 0xfffffff0);
        if (*pfVar2 < fVar16) {
          fVar16 = *pfVar2;
        }
        if (pfVar2[1] < fVar17) {
          fVar17 = pfVar2[1];
        }
        if (pfVar2[2] < fVar18) {
          fVar18 = pfVar2[2];
        }
        if (pfVar2[3] < fVar12) {
          fVar12 = pfVar2[3];
        }
        if (fVar13 < *pfVar3) {
          fVar13 = *pfVar3;
        }
        if (fVar14 < pfVar3[1]) {
          fVar14 = pfVar3[1];
        }
        if (fVar15 < pfVar3[2]) {
          fVar15 = pfVar3[2];
        }
        if (fVar8 < pfVar3[3]) {
          fVar8 = pfVar3[3];
        }
      } while (iVar5 < *(int *)(param_1 + 0x48));
    }
    pfVar2 = (float *)((unsigned int)(&lbl_82132D70 + iVar4) & 0xfffffff0);
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
    fVar11 = pfVar2[3];
    pfVar3 = (float *)(param_1 + 0x30U & 0xfffffff0);
    *pfVar3 = *pfVar2 * (fVar16 + fVar13);
    pfVar3[1] = fVar9 * (fVar17 + fVar14);
    pfVar3[2] = fVar10 * (fVar18 + fVar15);
    pfVar3[3] = fVar11 * (fVar12 + fVar8);
    pfVar2 = (float *)((unsigned int)(&lbl_82132D70 + iVar4) & 0xfffffff0);
    fVar9 = pfVar2[1];
    fVar10 = pfVar2[2];
    fVar11 = pfVar2[3];
    pfVar3 = (float *)(param_1 + 0x20U & 0xfffffff0);
    *pfVar3 = *pfVar2 * (fVar13 - fVar16);
    pfVar3[1] = fVar9 * (fVar14 - fVar17);
    pfVar3[2] = fVar10 * (fVar15 - fVar18);
    pfVar3[3] = fVar11 * (fVar8 - fVar12);
  }
  return;
}

