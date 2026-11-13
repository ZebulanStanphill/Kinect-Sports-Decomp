#define NAN(x) ((x) != (x))
extern int iRam831cdb40;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_822D15E0(double param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (iRam831cdb40 != 0) {
    iVar1 = *(int *)(*(int *)(param_2 + 0x14) + 0x24);
    dVar5 = (double)lbl_821CA460;
    iVar2 = *(int *)(iVar1 + 0x13c);
    dVar4 = dVar5;
    if (iVar2 != 0) {
      dVar4 = (double)*(float *)(iVar2 + 100);
    }
    iVar1 = *(int *)(iVar1 + 0x140);
    if (iVar1 != 0) {
      dVar5 = (double)*(float *)(iVar1 + 0x6c);
    }
    iVar1 = *(int *)(param_2 + 0x18);
    dVar3 = param_1;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((float)(param_1 - dVar4) < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN((float)(param_1 - dVar4)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar3 = dVar4;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((float)(param_1 - dVar5) < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN((float)(param_1 - dVar5)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      param_1 = dVar5;
    }
    *(float *)(iVar1 + 0x44) =
         (float)(dVar3 * (double)(float)((double)*(float *)(iVar1 + 0x40) -
                                        (double)*(float *)(iVar1 + 0x3c)) +
                (double)*(float *)(iVar1 + 0x3c));
    *(float *)(iVar1 + 0x50) =
         (float)(param_1 * (double)(float)((double)*(float *)(iVar1 + 0x4c) -
                                          (double)*(float *)(iVar1 + 0x48)) +
                (double)*(float *)(iVar1 + 0x48));
    return;
  }
  return;
}

