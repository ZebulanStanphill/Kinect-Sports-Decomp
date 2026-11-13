extern int fn_82F655D8();
extern unsigned int lbl_82005758;
extern unsigned int lbl_821AAD20;


void fn_82E94250(double param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  
  iVar2 = *(int *)(param_2 + 0x7858);
  if (param_4 == iVar2) {
    return;
  }
  uVar1 = *(unsigned int *)(param_2 + 0x7860);
  *(float *)(param_2 + 0x7860) = (float)param_1;
  *(int *)(param_2 + 0x7858) = param_4;
  *(unsigned int *)(param_2 + 0x7864) = uVar1;
  *(int *)(param_2 + 0x785c) = iVar2;
  if (*(int *)(param_2 + 0x7814) != 0) {
    if (((*(int *)(param_2 + 0x77e8) != 0) && (*(int *)(param_2 + 0x781c) != 0)) &&
       (*(int *)(param_2 + 0x77f0) != 0)) {
      dVar11 = (double)fn_82F655D8((double)(__int64)*(int *)(param_2 + 0x77d8) /
                                         (double)(__int64)*(int *)(param_2 + 0x77cc),
                                         *(double *)(param_2 + 0x77e0) - lbl_82005758);
      *(float *)(param_2 + 0x7864) =
           (float)(dVar11 * (double)*(float *)(param_2 + 0x7864) +
                  (*(double *)(param_2 + 0x7830) - *(double *)(param_2 + 0x7838)) *
                  *(double *)(param_2 + 0x7850));
      goto LAB_82e943bc;
    }
    if ((*(int *)(param_2 + 0x7814) != 0) && (*(int *)(param_2 + 0x781c) != 0)) {
      *(float *)(param_2 + 0x7864) =
           (float)((*(double *)(param_2 + 0x7830) - *(double *)(param_2 + 0x7838)) *
                   *(double *)(param_2 + 0x7850) + (double)*(float *)(param_2 + 0x7864));
      goto LAB_82e943bc;
    }
  }
  if ((*(int *)(param_2 + 0x77e8) != 0) && (*(int *)(param_2 + 0x77f0) != 0)) {
    dVar11 = (double)fn_82F655D8((double)(__int64)*(int *)(param_2 + 0x77d8) /
                                       (double)(__int64)*(int *)(param_2 + 0x77cc),
                                       *(double *)(param_2 + 0x77e0) - lbl_82005758);
    *(float *)(param_2 + 0x7864) = (float)(dVar11 * (double)*(float *)(param_2 + 0x7864));
  }
LAB_82e943bc:
  fVar10 = lbl_821AAD20;
  if (*(__int64 *)(param_2 + 0x2e0) != 1) {
    iVar2 = *(int *)(param_2 + 0x7858);
    iVar3 = *(int *)(param_2 + 0x785c);
    if (iVar2 != iVar3) {
      fVar7 = (float)(__int64)iVar2;
      fVar8 = (float)(__int64)iVar3;
      fVar4 = fVar7 * fVar7 * *(float *)(param_2 + 0x7860);
      fVar6 = fVar8 * fVar8 * *(float *)(param_2 + 0x7864);
      fVar9 = (fVar4 - fVar6) / (float)(__int64)(iVar2 - iVar3);
      *(float *)(param_2 + 0x7868) = fVar9;
      fVar5 = -(fVar9 * fVar7 - fVar4);
      *(float *)(param_2 + 0x786c) = fVar5;
      if (fVar5 < fVar10) {
        *(float *)(param_2 + 0x786c) = fVar10;
        *(float *)(param_2 + 0x7868) =
             (fVar8 * *(float *)(param_2 + 0x7864) + fVar7 * *(float *)(param_2 + 0x7860)) *
             0.5f;
        return;
      }
      if (fVar10 <= fVar9) {
        return;
      }
      *(float *)(param_2 + 0x7868) = fVar10;
      *(float *)(param_2 + 0x786c) = (fVar6 + fVar4) * 0.5f;
      return;
    }
  }
  fVar10 = (float)(__int64)*(int *)(param_2 + 0x7858);
  fVar10 = (*(float *)(param_2 + 0x7860) * fVar10 * fVar10) /
           (float)(__int64)(*(int *)(param_2 + 0x7858) + 1);
  *(float *)(param_2 + 0x786c) = fVar10;
  *(float *)(param_2 + 0x7868) = fVar10;
  return;
}

