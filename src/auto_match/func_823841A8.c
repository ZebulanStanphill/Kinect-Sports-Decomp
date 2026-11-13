#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern int fn_823845A0();
extern int fn_82535298();
extern int fn_82536288();
extern float lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_823841A8(double param_1,int param_2)

{
  float fVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  unsigned int auStack_40 [16];
  
  if (*(int *)(param_2 + 0x280) != 0) {
    fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x254));
    *(float *)(param_2 + 0x254) = fVar1;
    if (*(int *)(param_2 + 0x270) == 0) {
      if (*(float *)(param_2 + 600) <= fVar1) {
        pfVar2 = *(float **)(param_2 + 0x28c);
        (**(int (***)())(*(int *)(param_2 + 0x100) + 4))
                  ((double)(*(float *)(param_2 + 0x25c) - fVar1),
                   (double)(*(float *)(param_2 + 0x250) - *(float *)(param_2 + 0x25c)),
                   (double)pfVar2[2],(double)pfVar2[3],(double)pfVar2[4],(double)pfVar2[5],
                   (double)*pfVar2,(double)pfVar2[1],param_2 + 0x100);
        if (((*(unsigned int **)(param_2 + 0x288) != (unsigned int *)0x0) &&
            (*(int *)(param_2 + 0x284) == 0)) && (*(int *)(param_2 + 0x27c) != 0)) {
          auStack_40[0] = *(unsigned int *)(param_2 + 0x268);
          auStack_40[0] =
               fn_82535298(auStack_40,**(unsigned int **)(param_2 + 0x288),0xffffffff83296bc0,
                                 0xffffffff83296bd0);
          fn_82536288(auStack_40);
        }
        *(unsigned int *)(param_2 + 0x270) = 1;
      }
    }
    else {
      dVar4 = (double)*(float *)(param_2 + 600);
      dVar3 = (double)ltcg_pool_0_0f;
      dVar5 = (double)(float)((double)(float)((double)*(float *)(param_2 + 0x260) - dVar4) + dVar4);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((-dVar4 < dVar3) << 2) | (unsigned int)(NAN(-dVar4) || NAN(dVar3)) << 2))
          < 0.0) {
        dVar3 = dVar4;
      }
      if (((((float)(dVar3 + dVar5) * lbl_8218E8E8 <= fVar1) && (*(int *)(param_2 + 0x274) == 0)) &&
          (*(int *)(param_2 + 0x284) == 0)) &&
         ((*(int *)(param_2 + 0x27c) != 0 &&
          (*(unsigned int **)(param_2 + 0x288) != (unsigned int *)0x0)))) {
        auStack_40[0] = *(unsigned int *)(param_2 + 0x268);
        auStack_40[0] =
             fn_82535298(auStack_40,**(unsigned int **)(param_2 + 0x288),0xffffffff83296bc0,
                               0xffffffff83296bd0);
        fn_82536288(auStack_40);
        *(unsigned int *)(param_2 + 0x274) = 1;
      }
      if (((dVar5 <= (double)*(float *)(param_2 + 0x254)) && (*(int *)(param_2 + 0x278) == 0)) &&
         (*(unsigned int **)(param_2 + 0x288) != (unsigned int *)0x0)) {
        auStack_40[0] = *(unsigned int *)(param_2 + 0x26c);
        auStack_40[0] =
             fn_82535298(auStack_40,**(unsigned int **)(param_2 + 0x288),0xffffffff83296bc0,
                               0xffffffff83296bd0);
        fn_82536288(auStack_40);
        *(unsigned int *)(param_2 + 0x278) = 1;
      }
    }
    if (*(float *)(param_2 + 0x250) <= *(float *)(param_2 + 0x254)) {
      fn_823845A0(param_2);
    }
  }
  (**(int (***)())(*(int *)(param_2 + 0x10) + 8))(param_1,param_2 + 0x10);
  (**(int (***)())(*(int *)(param_2 + 0x100) + 8))(param_1,param_2 + 0x100);
  return;
}

