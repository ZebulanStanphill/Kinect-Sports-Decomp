extern unsigned int lbl_8200133C;
extern unsigned int lbl_8208E098;
extern unsigned int lbl_8208E09C;


void fn_82A67FB8(int param_1,int param_2,unsigned int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  unsigned int uVar8;
  float *pfVar9;
  unsigned char *puVar10;
  
  fVar6 = lbl_8208E09C;
  fVar5 = lbl_8208E098;
  fVar4 = lbl_8200133C;
  uVar8 = 0;
  if (3 < (int)param_3) {
    pfVar9 = (float *)(param_2 + 8);
    puVar10 = (unsigned char *)(param_1 + -1);
    do {
      fVar1 = pfVar9[-2];
      fVar2 = fVar4;
      if ((fVar4 <= fVar1) && (fVar2 = fVar1, fVar5 < fVar1)) {
        fVar2 = fVar5;
      }
      fVar1 = pfVar9[-1];
      iVar7 = (int)(fVar2 * fVar6) << 4;
      puVar10[1] = (char)iVar7;
      puVar10[2] = (char)((unsigned int)iVar7 >> 8);
      puVar10[3] = (char)((unsigned int)iVar7 >> 0x10);
      fVar2 = fVar4;
      if ((fVar4 <= fVar1) && (fVar2 = fVar1, fVar5 < fVar1)) {
        fVar2 = fVar5;
      }
      fVar1 = *pfVar9;
      iVar7 = (int)(fVar2 * fVar6) << 4;
      puVar10[4] = (char)iVar7;
      puVar10[5] = (char)((unsigned int)iVar7 >> 8);
      puVar10[6] = (char)((unsigned int)iVar7 >> 0x10);
      fVar2 = fVar4;
      if ((fVar4 <= fVar1) && (fVar2 = fVar1, fVar5 < fVar1)) {
        fVar2 = fVar5;
      }
      fVar1 = pfVar9[1];
      iVar7 = (int)(fVar2 * fVar6) << 4;
      puVar10[7] = (char)iVar7;
      puVar10[8] = (char)((unsigned int)iVar7 >> 8);
      puVar10[9] = (char)((unsigned int)iVar7 >> 0x10);
      fVar2 = fVar4;
      if ((fVar4 <= fVar1) && (fVar2 = fVar1, fVar5 < fVar1)) {
        fVar2 = fVar5;
      }
      uVar8 = uVar8 + 4;
      pfVar9 = pfVar9 + 4;
      iVar7 = (int)(fVar2 * fVar6) << 4;
      puVar10[10] = (char)iVar7;
      puVar10[0xb] = (char)((unsigned int)iVar7 >> 8);
      puVar10 = puVar10 + 0xc;
      *puVar10 = (char)((unsigned int)iVar7 >> 0x10);
    } while (uVar8 < param_3 - 3);
  }
  if (uVar8 < param_3) {
    iVar7 = param_3 - uVar8;
    pfVar9 = (float *)(uVar8 * 4 + param_2);
    puVar10 = (unsigned char *)(uVar8 * 3 + param_1 + -1);
    do {
      fVar1 = *pfVar9;
      fVar2 = fVar4;
      if ((fVar4 <= fVar1) && (fVar2 = fVar1, fVar5 < fVar1)) {
        fVar2 = fVar5;
      }
      pfVar9 = pfVar9 + 1;
      iVar3 = (int)(fVar2 * fVar6) << 4;
      puVar10[1] = (char)iVar3;
      puVar10[2] = (char)((unsigned int)iVar3 >> 8);
      puVar10 = puVar10 + 3;
      *puVar10 = (char)((unsigned int)iVar3 >> 0x10);
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

