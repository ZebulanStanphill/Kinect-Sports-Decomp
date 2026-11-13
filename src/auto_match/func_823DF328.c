#define NAN(x) ((x) != (x))
extern int fn_82359698();
extern int fn_8236B4F0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_823DF328(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = ltcg_pool_0_0f;
  iVar2 = *(int *)(param_2 + 8);
  if (*(int *)(iVar2 + 0xefc) != 0) {
    fVar1 = (float)((double)*(float *)(iVar2 + 0xefc) - param_1);
    fVar4 = -fVar1;
    fVar3 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar4 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar4) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar3 = fVar1;
    }
    *(float *)(iVar2 + 0xefc) = fVar3;
  }
  if ((*(float *)(iVar2 + 0xefc) <= fVar5) &&
     (fn_82359698(iVar2,*(unsigned int *)(iVar2 + 0xef8)),
     *(int *)(*(int *)(iVar2 + 0x4b0) + 0xd4) == 0)) {
    fn_8236B4F0((double)lbl_821CA460,iVar2);
  }
  return;
}

