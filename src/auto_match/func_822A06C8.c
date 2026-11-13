#define NAN(x) ((x) != (x))
extern int fn_82672C20();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_822A06C8(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = ltcg_pool_0_0f;
  if ((*(int *)(param_2 + 0xc) == 2) && (*(int *)(param_2 + 0x10) != 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x10) - param_1);
    fVar2 = -fVar1;
    fVar3 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(param_2 + 0x10) = fVar3;
    if (fVar3 == fVar4) {
      if ((*(int *)(param_2 + 0x18) == 0) && (*(int *)(param_2 + 0x14) != 0)) {
        fn_82672C20(*(unsigned int *)(param_2 + 4),0xffffffff821abb88,0,0);
        *(unsigned int *)(param_2 + 0x18) = 1;
      }
      *(unsigned int *)(param_2 + 0xc) = 0;
    }
  }
  return;
}

