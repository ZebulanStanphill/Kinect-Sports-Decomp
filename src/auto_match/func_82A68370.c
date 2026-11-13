extern unsigned int lbl_8200133C;
extern unsigned int lbl_8208E098;
extern unsigned int lbl_8208E09C;


void fn_82A68370(int param_1,int param_2,unsigned int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  unsigned int uVar7;
  float *pfVar8;
  int *piVar9;
  
  fVar5 = lbl_8208E09C;
  fVar4 = lbl_8208E098;
  fVar3 = lbl_8200133C;
  uVar7 = 0;
  if (3 < (int)param_3) {
    pfVar8 = (float *)(param_2 + 0xc);
    piVar9 = (int *)(param_1 + 4);
    do {
      fVar1 = pfVar8[-3];
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      fVar1 = *(float *)((param_2 - param_1) + (int)piVar9);
      piVar9[-1] = (int)(fVar2 * fVar5) << 0xc;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      fVar1 = pfVar8[-1];
      *piVar9 = (int)(fVar2 * fVar5) << 0xc;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      fVar1 = *pfVar8;
      piVar9[1] = (int)(fVar2 * fVar5) << 0xc;
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      uVar7 = uVar7 + 4;
      pfVar8 = pfVar8 + 4;
      piVar9[2] = (int)(fVar2 * fVar5) << 0xc;
      piVar9 = piVar9 + 4;
    } while (uVar7 < param_3 - 3);
  }
  if (uVar7 < param_3) {
    iVar6 = param_3 - uVar7;
    piVar9 = (int *)(uVar7 * 4 + param_1);
    do {
      fVar1 = *(float *)((int)piVar9 + (param_2 - param_1));
      fVar2 = fVar3;
      if ((fVar3 <= fVar1) && (fVar2 = fVar1, fVar4 < fVar1)) {
        fVar2 = fVar4;
      }
      *piVar9 = (int)(fVar2 * fVar5) << 0xc;
      piVar9 = piVar9 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    return;
  }
  return;
}

