#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define NAN(x) ((x) != (x))
extern int fn_822ABA88();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8242C6A0(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  int iVar5;
  double dVar6;
  double extraout_f1;
  double dVar7;
  
  piVar4 = *(int **)(param_1 + 8);
  uVar3 = ZEXT48(piVar4);
  iVar5 = 0;
  if ((piVar4[1] - *piVar4 & 0xfffffffcU) != 0) {
    lVar2 = 0;
    dVar6 = (double)ltcg_pool_0_0f;
    do {
      piVar4 = *(int **)(*(int *)uVar3 + (int)lVar2);
      iVar1 = fn_822ABA88(*(unsigned int *)(piVar4[4] * 4 + *piVar4),0);
      if (*(int *)(param_2 + 0x2c) == *(int *)(iVar1 + 0x2c)) {
        if (param_4 == 0) {
          *(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20) = (float)extraout_f1;
        }
        else {
          iVar1 = *(int *)(piVar4[4] * 4 + *piVar4);
          dVar7 = (double)*(float *)(iVar1 + 0x20);
          if (*(float *)(&lbl_821954D8 +
                        ((unsigned int)(unsigned char)(((double)(float)(dVar7 - extraout_f1) < dVar6) << 2) |
                        (unsigned int)(NAN((double)(float)(dVar7 - extraout_f1)) || NAN(dVar6)) << 2)) < 0.0
             ) {
            dVar7 = extraout_f1;
          }
          *(float *)(iVar1 + 0x20) = (float)dVar7;
        }
      }
      iVar5 = iVar5 + 1;
      lVar2 = lVar2 + 4;
    } while (iVar5 < ((int *)uVar3)[1] - *(int *)uVar3 >> 2);
  }
  return;
}

