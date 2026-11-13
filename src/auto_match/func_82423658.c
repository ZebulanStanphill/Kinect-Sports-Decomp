#define NAN(x) ((x) != (x))
extern int fn_8229FDA0();
extern int fn_8229FF28();
extern int fn_82417F58();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_82423658(double param_1,int param_2,int param_3)

{
  float fVar1;
  unsigned int uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  fVar5 = ltcg_pool_0_0f;
  if (*(int *)(*(int *)(param_2 + 4) + 0x1b4) == 4) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x5c) - param_1);
    fVar3 = -fVar1;
    fVar4 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(param_2 + 0x5c) = fVar4;
    if (fVar4 != fVar5) {
      return;
    }
  }
  else {
    iVar6 = fn_82417F58();
    if ((*(int *)(iVar6 + 0x1a0) == 0) && (*(int *)(iVar6 + 0x1e0) == 0)) {
      return;
    }
  }
  uVar2 = *(unsigned int *)(param_3 + 0x3c);
  iVar6 = *(int *)(*(int *)(param_2 + 8) + 0xd4);
  fn_8229FF28(*(unsigned int *)(iVar6 + 0xc),*(unsigned int *)(param_3 + 0x30));
  fn_8229FDA0(*(unsigned int *)(iVar6 + 0xc),uVar2);
  return;
}

