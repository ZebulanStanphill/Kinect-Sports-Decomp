#define NAN(x) ((x) != (x))
extern int fn_824A2128();
extern int fn_827F4058();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_824A2040(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_2 + 0xd4) == 0) {
    fn_827F4058();
  }
  else {
    fn_824A2128();
  }
  fVar2 = ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0xd8) != 0) {
    fVar2 = lbl_821CA460;
  }
  fVar2 = fVar2 - *(float *)(param_2 + 0xdc);
  fVar1 = (float)(param_1 * (double)lbl_821916FC);
  fVar3 = fVar2 - -fVar1;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar2 = -fVar1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar2 - fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar2 - fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar1 = fVar2;
  }
  *(float *)(param_2 + 0xdc) = fVar1 + *(float *)(param_2 + 0xdc);
  return;
}

