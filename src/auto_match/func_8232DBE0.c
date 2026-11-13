#define NAN(x) ((x) != (x))
extern int fn_8232C528();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8232DBE0(double param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(*(int *)(param_2 + 8) + 0x7a4) == 0) {
    fn_8232C528(*(unsigned int *)(param_2 + 0xc),2);
  }
  fVar6 = ltcg_pool_0_0f;
  if ((*(int *)(param_2 + 100) != 0) && (*(int *)(param_2 + 0x68) != 0)) {
    fVar1 = (float)((double)*(float *)(param_2 + 0x68) - param_1);
    fVar4 = -fVar1;
    fVar5 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar4 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar4) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar5 = fVar1;
    }
    *(float *)(param_2 + 0x68) = fVar5;
    if (fVar5 == fVar6) {
      piVar2 = *(int **)(param_2 + 0xc);
      iVar3 = piVar2[2];
      piVar2[2] = 2;
      (**(int (***)())(*piVar2 + 0x14))(piVar2,iVar3,2);
    }
  }
  return;
}

