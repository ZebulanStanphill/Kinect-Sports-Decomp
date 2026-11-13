#define NAN(x) ((x) != (x))
extern float fRam831c6684;
extern float fRam831c6688;
extern int fn_824FC500();
extern int fn_8252AFE0();
extern int fn_8265CA20();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C667C;
extern unsigned int lbl_8327F894;


void fn_82475650(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  param_1 = param_2 * 0x18 + param_1;
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    dVar4 = (double)*(float *)(param_1 + 0x58);
    fVar1 = *(float *)(**(int **)(param_1 + 0x54) + 0x1fc);
    if ((dVar4 < (double)(fVar1 - fRam831c6688)) || ((double)(fRam831c6688 + fVar1) < dVar4)) {
      dVar6 = (double)lbl_831C667C;
      fVar3 = lbl_8327F894 / fRam831c6684;
      if (dVar4 != dVar6) {
        fVar3 = -fVar3;
      }
      dVar4 = (double)(fVar3 + fVar1);
      dVar5 = (double)ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar4 < dVar5) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar5)) << 2)) <
          0.0) {
        dVar4 = dVar5;
      }
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)(((double)(float)(dVar4 - dVar6) < dVar5) << 2) |
                    (unsigned int)(NAN((double)(float)(dVar4 - dVar6)) || NAN(dVar5)) << 2)) < 0.0) {
        dVar6 = dVar4;
      }
    }
    else {
      dVar6 = (double)lbl_831C667C;
      if (dVar4 != (double)lbl_831C667C) {
        fn_8252AFE0((double)ltcg_pool_0_0f);
        iVar2 = *(int *)(param_1 + 0x54);
        if (iVar2 != 0) {
          fn_824FC500(iVar2);
          fn_8265CA20(iVar2);
        }
        *(unsigned int *)(param_1 + 0x54) = 0;
        *(unsigned int *)(param_1 + 0x68) = 0;
        return;
      }
    }
    fn_8252AFE0(dVar6);
  }
  return;
}

