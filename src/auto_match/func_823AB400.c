#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83276578;


void fn_823AB400(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  *(float *)(param_2 + 0x58) = (float)(param_1 + (double)*(float *)(param_2 + 0x58));
  if (*(int *)(param_2 + 0x7c) != 0) {
    *(float *)(param_2 + 0x78) = (float)(param_1 + (double)*(float *)(param_2 + 0x78));
  }
  fVar1 = *(float *)(param_2 + 0x78) - lbl_83276578;
  fVar2 = *(float *)(param_2 + 0x78);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar2 = lbl_83276578;
  }
  lbl_83276578 = fVar2;
  return;
}

