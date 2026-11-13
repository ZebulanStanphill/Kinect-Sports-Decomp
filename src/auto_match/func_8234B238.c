#define NAN(x) ((x) != (x))
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_8234B238(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int uVar5;
  
  fVar4 = ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x40) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x40) - param_1);
    fVar2 = -fVar1;
    fVar3 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(param_2 + 0x40) = fVar3;
    if (fVar3 == fVar4) {
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      fVar4 = lbl_821917D4;
      if (*(int *)(param_2 + 0x3c) != 0) {
        fVar4 = lbl_821917B0;
      }
      *(float *)(param_2 + 0x40) =
           ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * fVar4 + fVar4;
      *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(param_2 + 0x3c) ^ 1;
    }
  }
  if (*(int *)(param_2 + 0x24) != 0) {
    if ((*(int *)(param_2 + 0x3c) == 0) || (uVar5 = 1, *(int *)(param_2 + 0x38) == 0)) {
      uVar5 = 0;
    }
    *(unsigned int *)(*(int *)(param_2 + 0x24) + 0xe8) = uVar5;
    return;
  }
  return;
}

