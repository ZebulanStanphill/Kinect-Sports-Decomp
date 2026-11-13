extern int fn_82F65FE0();
extern float lbl_82021544;
extern unsigned int lbl_82175388;


void fn_82FDF728(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned int param_5,
                  float *param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned __int64 uVar6;
  float fVar7;
  float fVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  float *pfVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  
  fVar7 = lbl_82021544;
  uVar16 = 0x6b4cc7;
  uVar15 = 0;
  fVar1 = (float)((double)(param_6[1] - *param_6) * param_1) * lbl_82021544 + *param_6;
  fVar2 = ((float)((double)(param_6[4] - param_6[3]) * param_2) * lbl_82021544 + param_6[3]) * fVar1
  ;
  fVar1 = (fVar1 - fVar2) + fVar1;
  if (3 < (int)param_5) {
    fVar3 = fVar1 - fVar2;
    pfVar12 = (float *)(param_7 + -4);
    fVar5 = (float)(param_5 - 1);
    uVar14 = 2;
    do {
      fVar8 = lbl_82175388;
      uVar9 = uVar16 * 0xbb38435 + 0x3619636b;
      uVar10 = uVar9 * 0xbb38435 + 0x3619636b;
      uVar6 = (unsigned __int64)uVar15;
      uVar11 = uVar10 * 0xbb38435 + 0x3619636b;
      uVar16 = uVar11 * 0xbb38435 + 0x3619636b;
      uVar15 = uVar15 + 4;
      fVar4 = ((float)uVar6 * fVar3) / fVar5 + fVar2;
      pfVar12[1] = (float)uVar9 * lbl_82175388 * param_6[2] * fVar7 * fVar4 + fVar4;
      fVar4 = ((float)(uVar14 - 1) * fVar3) / fVar5 + fVar2;
      pfVar12[2] = (float)uVar10 * fVar8 * param_6[2] * fVar7 * fVar4 + fVar4;
      fVar4 = ((float)uVar14 * fVar3) / fVar5 + fVar2;
      pfVar12[3] = (float)uVar11 * fVar8 * param_6[2] * fVar7 * fVar4 + fVar4;
      fVar4 = ((float)(uVar14 + 1) * fVar3) / fVar5 + fVar2;
      pfVar12 = pfVar12 + 4;
      *pfVar12 = (float)uVar16 * fVar8 * param_6[2] * fVar7 * fVar4 + fVar4;
      uVar14 = uVar14 + 4;
    } while (uVar15 < param_5 - 3);
  }
  if (uVar15 < param_5) {
    iVar13 = param_5 - uVar15;
    pfVar12 = (float *)(uVar15 * 4 + param_7 + -4);
    do {
      uVar16 = uVar16 * 0xbb38435 + 0x3619636b;
      fVar3 = ((float)uVar15 * (fVar1 - fVar2)) / (float)(param_5 - 1) + fVar2;
      pfVar12 = pfVar12 + 1;
      *pfVar12 = (float)uVar16 * lbl_82175388 * param_6[2] * fVar7 * fVar3 + fVar3;
      iVar13 = iVar13 + -1;
      uVar15 = uVar15 + 1;
    } while (iVar13 != 0);
  }
  fn_82F65FE0(param_7,param_5,4,0xffffffff82fdf6f0);
  return;
}

