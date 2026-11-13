#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8232C768(int param_1,unsigned int param_2,unsigned __int64 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_4 != 0) {
    if ((param_2 < 3) || (param_2 == 6)) {
      fVar1 = *(float *)(param_1 + 0x78) - *(float *)(param_1 + 0x98);
      fVar3 = *(float *)(param_1 + 0x90) - fVar1;
      fVar2 = *(float *)(param_1 + 0x90);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar2 = fVar1;
      }
    }
    else {
      fVar2 = *(float *)(param_1 + 0x98) + *(float *)(param_1 + 0x78);
      fVar1 = *(float *)(param_1 + 0x94) - fVar2;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar2 = *(float *)(param_1 + 0x94);
      }
    }
    *(float *)(param_1 + 0x78) = fVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x8232c820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(**(int **)(param_1 + 100) + 0x1c))();
  return;
}

