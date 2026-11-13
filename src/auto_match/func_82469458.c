#define NAN(x) ((x) != (x))
extern int fn_82F68B6C();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_82469458(double param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  fVar3 = ltcg_pool_0_0f;
  iVar4 = *param_2;
  if (iVar4 == 6) {
    if (param_2[5] == 0) {
      return;
    }
    fVar1 = -(float)((double)(float)param_2[5] - param_1);
    fVar2 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar2 = (float)((double)(float)param_2[5] - param_1);
    }
    param_2[5] = (int)fVar2;
    if (fVar2 != fVar3) {
      return;
    }
    iVar4 = param_2[1];
    uVar5 = 0xffffffff821bc114;
  }
  else if (iVar4 == 7) {
    if (param_2[5] == 0) {
      return;
    }
    fVar1 = -(float)((double)(float)param_2[5] - param_1);
    fVar2 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar2 = (float)((double)(float)param_2[5] - param_1);
    }
    param_2[5] = (int)fVar2;
    if (fVar2 != fVar3) {
      return;
    }
    iVar4 = param_2[1];
    uVar5 = 0xffffffff821bc12c;
  }
  else {
    if (iVar4 != 8) {
      return;
    }
    if (param_2[5] == 0) {
      return;
    }
    fVar1 = -(float)((double)(float)param_2[5] - param_1);
    fVar2 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar2 = (float)((double)(float)param_2[5] - param_1);
    }
    param_2[5] = (int)fVar2;
    if (fVar2 != fVar3) {
      return;
    }
    iVar4 = param_2[1];
    uVar5 = 0xffffffff821bc144;
  }
  fn_82F68B6C(iVar4,uVar5,0,0);
  return;
}

