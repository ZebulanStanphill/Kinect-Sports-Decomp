#define NAN(x) ((x) != (x))
extern int fn_822A2FE8();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831CE850;


void fn_822A2C28(double param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  
  iVar2 = *param_2;
  param_2[0xaa] = 0;
  fVar1 = ltcg_pool_0_0f;
  if (iVar2 == 1) {
    if (param_2[6] != 0) {
      fVar4 = -(float)((double)(float)param_2[6] - param_1);
      fVar5 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar4 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar4) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar5 = (float)((double)(float)param_2[6] - param_1);
      }
      param_2[6] = (int)fVar5;
      if (fVar5 == fVar1) {
        fn_822A2FE8(param_2);
        param_2[0xaa] = 1;
        param_2[6] = lbl_831CE850;
      }
    }
  }
  else if (((1 < iVar2) && (iVar2 < 8)) && (param_2[0x87] != 0)) {
    fVar4 = -(float)((double)(float)param_2[0x87] - param_1);
    fVar5 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar4 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar4) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar5 = (float)((double)(float)param_2[0x87] - param_1);
    }
    param_2[0x87] = (int)fVar5;
    if (fVar5 == fVar1) {
      iVar2 = *param_2;
      piVar7 = param_2 + iVar2 * 4 + 0x89;
      if (1 < (unsigned int)(param_2[iVar2 * 4 + 0x8a] - *piVar7 >> 3)) {
        uVar3 = param_2[iVar2 * 4 + 0x8a] - *piVar7 >> 3;
        iVar6 = (param_2[0xa9] + 1U) -
                (int)(((unsigned __int64)(unsigned int)param_2[0xa9] + 1 & 0xffffffff) / (unsigned __int64)uVar3) * uVar3;
        param_2[0xa9] = iVar6;
        if ((((iVar2 == 2) || (iVar2 == 3)) || ((iVar2 == 4 || ((iVar2 == 5 || (iVar2 == 6)))))) ||
           (iVar2 == 7)) {
          fVar1 = *(float *)(iVar6 * 8 + *piVar7 + 4);
        }
        param_2[0x87] = (int)fVar1;
        param_2[0xaa] = 1;
      }
    }
  }
  return;
}

