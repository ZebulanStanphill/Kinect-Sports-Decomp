extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DFEC;
extern unsigned int lbl_8208E094;
extern unsigned int uStack_9;


void fn_82A67E20(int param_1,int param_2,unsigned int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  unsigned int uVar9;
  unsigned char uStack_9;
  
  fVar6 = lbl_8208E094;
  fVar5 = lbl_8201DFEC;
  fVar4 = lbl_82002AE0;
  fVar3 = lbl_8200133C;
  uVar9 = 0;
  if (3 < (int)param_3) {
    pfVar8 = (float *)(param_2 + 8);
    do {
      fVar1 = pfVar8[-2];
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar6 < fVar1)) {
        fVar2 = fVar6;
      }
      fVar1 = pfVar8[-1];
      uStack_9 = (unsigned char)(__int64)((fVar2 + fVar4) * fVar5);
      *(unsigned char *)(uVar9 + param_1) = uStack_9;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar6 < fVar1)) {
        fVar2 = fVar6;
      }
      fVar1 = *pfVar8;
      uStack_9 = (unsigned char)(__int64)((fVar2 + fVar4) * fVar5);
      *(unsigned char *)(param_1 + 1 + uVar9) = uStack_9;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar6 < fVar1)) {
        fVar2 = fVar6;
      }
      fVar1 = pfVar8[1];
      uStack_9 = (unsigned char)(__int64)((fVar2 + fVar4) * fVar5);
      *(unsigned char *)(param_1 + 2 + uVar9) = uStack_9;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar6 < fVar1)) {
        fVar2 = fVar6;
      }
      pfVar8 = pfVar8 + 4;
      uStack_9 = (unsigned char)(__int64)((fVar2 + fVar4) * fVar5);
      *(unsigned char *)(param_1 + 3 + uVar9) = uStack_9;
      uVar9 = uVar9 + 4;
    } while (uVar9 < param_3 - 3);
  }
  if (uVar9 < param_3) {
    iVar7 = param_3 - uVar9;
    pfVar8 = (float *)(uVar9 * 4 + param_2);
    do {
      fVar1 = *pfVar8;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar6 < fVar1)) {
        fVar2 = fVar6;
      }
      pfVar8 = pfVar8 + 1;
      uStack_9 = (unsigned char)(__int64)((fVar2 + fVar4) * fVar5);
      *(unsigned char *)(uVar9 + param_1) = uStack_9;
      uVar9 = uVar9 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

