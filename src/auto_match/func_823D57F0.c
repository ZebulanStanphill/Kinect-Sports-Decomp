#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823D57F0(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  __int64 lVar10;
  
  fVar6 = ltcg_pool_0_0f;
  fVar5 = lbl_821CA460;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar7 = 0;
  pfVar9 = (float *)(param_1 + 0x3c);
  lVar10 = 4;
  do {
    iVar8 = iVar7 + iVar1;
    if (*(int *)(iVar8 + 0x18c) == 1) {
      fVar2 = *pfVar9 - *(float *)(iVar8 + 0x188);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar2 < fVar6) << 2) | (unsigned int)(NAN(fVar2) || NAN(fVar6)) << 2)) <
          0.0) {
        fVar2 = fVar6;
      }
      fVar3 = fVar2 - fVar5;
      fVar4 = fVar5;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < fVar6) << 2) | (unsigned int)(NAN(fVar3) || NAN(fVar6)) << 2)) <
          0.0) {
        fVar4 = fVar2;
      }
      *pfVar9 = fVar4;
    }
    pfVar9 = pfVar9 + 1;
    iVar7 = iVar7 + 0x18;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

