typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int lbl_82002C5C;


void fn_8275E678(int param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  short *psVar5;
  unsigned int uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (*(unsigned int *)(param_1 + 4) < *(unsigned int *)(param_1 + 8)) {
    psVar5 = *(short **)(param_1 + 0x1c);
    bVar9 = false;
    if (psVar5 == (short *)0x0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar6 = **(unsigned int **)(param_1 + 0x20);
        *(unsigned int **)(param_1 + 0x20) = *(unsigned int **)(param_1 + 0x20) + 1;
        *(unsigned int *)(param_1 + 0x18) = 1;
        *(unsigned int *)(param_1 + 0x14) = uVar6;
      }
      if ((*(unsigned int *)(param_1 + 0x14) & *(unsigned int *)(param_1 + 0x18)) == 0) {
        piVar7 = *(int **)(param_1 + 0x20);
        iVar10 = *piVar7;
        *(int **)(param_1 + 0x20) = piVar7 + 1;
        iVar13 = piVar7[1];
        *(int **)(param_1 + 0x20) = piVar7 + 2;
        iVar12 = iVar10;
        iVar11 = iVar13;
      }
      else {
        piVar7 = *(int **)(param_1 + 0x20);
        bVar9 = true;
        iVar10 = *piVar7;
        *(int **)(param_1 + 0x20) = piVar7 + 1;
        iVar13 = piVar7[1];
        *(int **)(param_1 + 0x20) = piVar7 + 2;
        iVar12 = piVar7[2];
        *(int **)(param_1 + 0x20) = piVar7 + 3;
        iVar11 = piVar7[3];
        *(int **)(param_1 + 0x20) = piVar7 + 4;
      }
    }
    else {
      if (0x8000 < *(unsigned int *)(param_1 + 0x18)) {
        sVar3 = *psVar5;
        *(unsigned int *)(param_1 + 0x18) = 1;
        *(short **)(param_1 + 0x1c) = psVar5 + 1;
        *(int *)(param_1 + 0x14) = (int)sVar3;
      }
      if ((*(unsigned int *)(param_1 + 0x14) & *(unsigned int *)(param_1 + 0x18)) == 0) {
        psVar5 = *(short **)(param_1 + 0x1c);
        iVar10 = (int)*psVar5;
        *(short **)(param_1 + 0x1c) = psVar5 + 1;
        iVar13 = (int)psVar5[1];
        *(short **)(param_1 + 0x1c) = psVar5 + 2;
        iVar12 = iVar10;
        iVar11 = iVar13;
      }
      else {
        psVar5 = *(short **)(param_1 + 0x1c);
        bVar9 = true;
        iVar10 = (int)*psVar5;
        *(short **)(param_1 + 0x1c) = psVar5 + 1;
        iVar13 = (int)psVar5[1];
        *(short **)(param_1 + 0x1c) = psVar5 + 2;
        sVar3 = psVar5[2];
        *(short **)(param_1 + 0x1c) = psVar5 + 3;
        sVar4 = psVar5[3];
        *(short **)(param_1 + 0x1c) = psVar5 + 4;
        iVar12 = (int)sVar3;
        iVar11 = (int)sVar4;
      }
    }
    if (bVar9) {
      *param_2 = (float)(__int64)(*(int *)(param_1 + 0xc) + iVar10) * *(float *)(param_1 + 0x24);
      param_2[1] = (float)(__int64)(*(int *)(param_1 + 0x10) + iVar13) * *(float *)(param_1 + 0x24)
      ;
      param_2[2] = (float)(__int64)(*(int *)(param_1 + 0xc) + iVar12 + iVar10) *
                   *(float *)(param_1 + 0x24);
      fVar1 = *(float *)(param_1 + 0x24);
      iVar8 = *(int *)(param_1 + 0x10);
      *(unsigned char *)(param_2 + 4) = 1;
      param_2[3] = (float)(__int64)(iVar8 + iVar11 + iVar13) * fVar1;
      iVar10 = *(int *)(param_1 + 0xc) + iVar12 + iVar10;
      iVar13 = *(int *)(param_1 + 0x10) + iVar11 + iVar13;
    }
    else {
      param_2[2] = (float)(__int64)(*(int *)(param_1 + 0xc) + iVar12) * *(float *)(param_1 + 0x24);
      param_2[3] = (float)(__int64)(*(int *)(param_1 + 0x10) + iVar11) * *(float *)(param_1 + 0x24)
      ;
      fVar1 = lbl_82002C5C;
      if (param_3 == '\0') {
        *(unsigned char *)(param_2 + 4) = 0;
      }
      else {
        *param_2 = ((float)(__int64)iVar12 * lbl_82002C5C +
                   (float)(__int64)*(int *)(param_1 + 0xc)) * *(float *)(param_1 + 0x24);
        iVar10 = *(int *)(param_1 + 0x10);
        fVar2 = *(float *)(param_1 + 0x24);
        *(unsigned char *)(param_2 + 4) = 1;
        param_2[1] = ((float)(__int64)iVar11 * fVar1 + (float)(__int64)iVar10) * fVar2;
      }
      iVar10 = *(int *)(param_1 + 0xc) + iVar12;
      iVar13 = *(int *)(param_1 + 0x10) + iVar11;
    }
    *(int *)(param_1 + 0x10) = iVar13;
    *(int *)(param_1 + 0xc) = iVar10;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) << 1;
  }
  return;
}

