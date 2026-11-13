#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823D5728(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  __int64 lVar9;
  
  fVar5 = ltcg_pool_0_0f;
  fVar4 = lbl_821CA460;
  iVar6 = 0;
  pfVar7 = (float *)(param_1 + 0x3c);
  lVar9 = 4;
  do {
    iVar8 = *(int *)(param_1 + 0xc) + iVar6;
    if ((*(int *)(iVar8 + 0x184) == 3) &&
       (*(float *)(iVar8 + 0x180) < (float)(__int64)*(int *)(param_1 + 0x94))) {
      fVar1 = *(float *)(iVar8 + 0x17c) + *pfVar7;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar1 < fVar5) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar5)) << 2)) <
          0.0) {
        fVar1 = fVar5;
      }
      fVar2 = fVar1 - fVar4;
      fVar3 = fVar4;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar2 < fVar5) << 2) | (unsigned int)(NAN(fVar2) || NAN(fVar5)) << 2)) <
          0.0) {
        fVar3 = fVar1;
      }
      *pfVar7 = fVar3;
    }
    pfVar7 = pfVar7 + 1;
    iVar6 = iVar6 + 0x18;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  return;
}

