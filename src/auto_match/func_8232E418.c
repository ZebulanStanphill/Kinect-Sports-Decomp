#define NAN(x) ((x) != (x))
extern int fn_822C72E0();
extern int fn_8232E628();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8232E418(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned __int64 uVar6;
  
  fVar5 = ltcg_pool_0_0f;
  uVar2 = *(unsigned int *)(param_2 + 0x10);
  if (uVar2 == 0) {
    if (*(int *)(param_2 + 0x14) != 0) {
      fn_8232E628(param_2,1);
    }
  }
  else if (uVar2 == 1) {
    if (*(int *)(param_2 + 0x2c) == 0) {
      uVar6 = 0xffffffff821acc50;
    }
    else {
      if (*(int *)(param_2 + 0x34) == 0) {
        return;
      }
      fVar1 = (float)((double)*(float *)(param_2 + 0x34) - param_1);
      fVar3 = -fVar1;
      fVar4 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar4 = fVar1;
      }
      *(float *)(param_2 + 0x34) = fVar4;
      if (fVar4 != fVar5) {
        return;
      }
      if (*(int *)(param_2 + 0x30) == 0) {
        uVar6 = 0xffffffff821acc28;
      }
      else {
        uVar6 = 0xffffffff821afe68;
      }
    }
    fn_822C72E0(*(unsigned int *)(*(int *)(param_2 + 8) + 0x20),uVar6);
  }
  else if ((uVar2 < 3) && (*(int *)(param_2 + 0x20) == 0)) {
    fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_2 + 0xc) + 0x114) + 0x20),
                      0xffffffff821afe74);
    *(unsigned int *)(param_2 + 0x20) = 1;
  }
  return;
}

