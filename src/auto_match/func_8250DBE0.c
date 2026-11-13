#define NAN(x) ((x) != (x))
extern int fn_827F4868();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8250DBE0(double param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  double dVar9;
  
  *(float *)(param_2 + 0x30) = (float)(param_1 + (double)*(float *)(param_2 + 0x30));
  dVar9 = (double)fn_827F4868();
  fVar6 = ltcg_pool_0_0f;
  pfVar8 = *(float **)(param_2 + 0xf8);
  pfVar2 = *(float **)(param_2 + 0xfc);
  fVar1 = (float)(param_1 / (double)*(float *)(param_2 + 0x108));
  if (pfVar8 != pfVar2) {
    pfVar7 = (float *)(*(int *)(param_2 + 0xe8) + -4);
    do {
      pfVar5 = pfVar7 + 1;
      fVar4 = *pfVar8 - *pfVar5;
      pfVar8 = pfVar8 + 1;
      fVar3 = fVar4 - -fVar1;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < fVar6) << 2) | (unsigned int)(NAN(fVar3) || NAN(fVar6)) << 2)) <
          0.0) {
        fVar4 = -fVar1;
      }
      fVar3 = fVar1;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar4 - fVar1 < fVar6) << 2) |
                    (unsigned int)(NAN(fVar4 - fVar1) || NAN(fVar6)) << 2)) < 0.0) {
        fVar3 = fVar4;
      }
      pfVar7 = pfVar7 + 1;
      *pfVar7 = fVar3 + *pfVar5;
    } while (pfVar8 != pfVar2);
  }
  *(unsigned char *)(param_2 + 0xdc) =
       *(unsigned char *)(param_2 + 0xdc) & 0xdf | (dVar9 == (double)*(float *)(param_2 + 0x24)) << 5;
  return;
}

