typedef unsigned char bool;
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82779C60();
extern unsigned int lbl_8201545C;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82779CD8(unsigned int *param_1,char param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar7;
  unsigned int uVar8;
  float *pfVar9;
  unsigned int uVar10;
  int iVar11;
  int iVar12;
  __int64 lVar6;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  unsigned int uStack_28;
  
  *(unsigned char *)(param_1 + 4) = 0;
  fVar5 = lbl_8201545C;
  if ((param_2 != '\0') && (uVar8 = *param_1, uVar8 != 0)) {
    puVar1 = (unsigned int *)param_1[3];
    uVar2 = *puVar1;
    if (1 < uVar8) {
      iVar12 = *(int *)((uVar8 - 1 >> 4 & 0xffffffc) + (int)puVar1);
      pfVar7 = (float *)(*(int *)(((unsigned int)(((unsigned __int64)uVar8 - 2 & 0xffffffff) >> 4) & 0xffffffc) +
                                 (int)puVar1) + ((unsigned int)((unsigned __int64)uVar8 - 2) & 0x3f) * 0xc);
      iVar11 = (uVar8 - 1 & 0x3f) * 0xc;
      fVar3 = *(float *)(iVar12 + iVar11) - *pfVar7;
      fVar4 = *(float *)(iVar12 + iVar11 + 4) - pfVar7[1];
      fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      pfVar7[2] = fVar3;
      if ((fVar3 <= fVar5) && (*param_1 != 0)) {
        *param_1 = *param_1 - 1;
      }
    }
    fn_82779C60(param_1,uVar2);
  }
  fVar5 = lbl_8201545C;
  if (1 < *param_1) {
    uVar8 = *param_1 - 1;
    pfVar7 = *(float **)param_1[3];
    pfVar9 = (float *)(*(int *)((uVar8 >> 4 & 0xffffffc) + (int)param_1[3]) + (uVar8 & 0x3f) * 0xc);
    fVar3 = *pfVar7 - *pfVar9;
    fVar4 = pfVar7[1] - pfVar9[1];
    fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    pfVar9[2] = fVar3;
    uVar8 = *param_1;
    *(bool *)(param_1 + 4) = fVar3 <= fVar5;
    while (1 < uVar8) {
      uVar8 = *param_1 - 2;
      uVar10 = *param_1 - 1;
      iVar12 = *(int *)((uVar10 >> 4 & 0xffffffc) + param_1[3]);
      pfVar7 = (float *)(*(int *)((uVar8 >> 4 & 0xffffffc) + param_1[3]) + (uVar8 & 0x3f) * 0xc);
      iVar11 = (uVar10 & 0x3f) * 0xc;
      fVar3 = *(float *)(iVar12 + iVar11) - *pfVar7;
      fVar4 = *(float *)(iVar12 + iVar11 + 4) - pfVar7[1];
      fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      pfVar7[2] = fVar3;
      if (fVar5 < fVar3) break;
      uVar8 = *param_1;
      iVar11 = (*param_1 - 1 & 0x3f) * 0xc;
      iVar12 = *(int *)((*param_1 - 1 >> 4 & 0xffffffc) + param_1[3]);
      stack_pair_30.first = *(unsigned int *)(iVar12 + iVar11);
      iVar12 = iVar12 + iVar11;
      stack_pair_30.second = *(unsigned int *)(iVar12 + 4);
      uStack_28 = *(unsigned int *)(iVar12 + 8);
      if (((unsigned __int64)uVar8 != 0) &&
         (lVar6 = (unsigned __int64)uVar8 - 1, *param_1 = (unsigned int)lVar6, lVar6 != 0)) {
        *param_1 = uVar8 - 2;
      }
      fn_82779C60(param_1,&stack_pair_30.first);
      fVar5 = lbl_8201545C;
      uVar8 = *param_1;
    }
  }
  if (*(char *)(param_1 + 4) != '\0') {
    while (2 < *param_1) {
      pfVar7 = *(float **)param_1[3];
      pfVar9 = (float *)(*(int *)((*param_1 - 1 >> 4 & 0xffffffc) + (int)param_1[3]) +
                        (*param_1 - 1 & 0x3f) * 0xc);
      fVar3 = *pfVar7 - *pfVar9;
      fVar4 = pfVar7[1] - pfVar9[1];
      fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
      pfVar9[2] = fVar3;
      if (fVar5 < fVar3) break;
      if (*param_1 != 0) {
        *param_1 = *param_1 - 1;
      }
    }
    if (*param_1 < 3) {
      *(unsigned char *)(param_1 + 4) = 0;
    }
  }
  return;
}

