#define NAN(x) ((x) != (x))
extern int fn_82265140();
extern int fn_8229E090();
extern int fn_8249B5F0();
extern int fn_82F4E1F8();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956DC;
extern unsigned int lbl_821956E0;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D76EC;


void fn_8249C920(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_1 != 2) {
    *(unsigned int *)(param_2 + 0x118) = 1;
    if (param_1 == 0) {
      fn_8249B5F0(param_2,1,0,0);
      fn_82F4E1F8();
      fn_82265140(1);
      fVar7 = ltcg_pool_0_0f;
      fVar4 = lbl_821956E0;
      fVar3 = ABS(*(float *)(param_2 + 0xf8));
      if ((ltcg_pool_0_0f < fVar3) && (iVar1 = *(int *)(param_2 + 0xec), fVar3 <= lbl_821956DC)) {
        fVar6 = lbl_821956E0 - fVar3;
        *(float *)(iVar1 + 0xc) = fVar6;
        fVar5 = lbl_831D76EC;
        fVar2 = fVar6 + lbl_821917B4;
        *(float *)(iVar1 + 4) = -fVar3 - fVar4;
        fVar4 = fVar2 - fVar5;
        fVar3 = fVar5;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((fVar6 - fVar5 < fVar7) << 2) |
                      (unsigned int)(NAN(fVar6 - fVar5) || NAN(fVar7)) << 2)) < 0.0) {
          fVar3 = fVar6;
        }
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((fVar4 < fVar7) << 2) | (unsigned int)(NAN(fVar4) || NAN(fVar7)) << 2))
            < 0.0) {
          fVar5 = fVar2;
        }
        *(float *)(iVar1 + 0x1c) = fVar3;
        *(float *)(iVar1 + 0x2c) = fVar5;
      }
    }
    fn_8229E090(*(unsigned int *)(param_2 + 0xb4),0,1);
  }
  *(unsigned int *)(param_2 + 0xb4) = 0;
  (**(int (***)())(**(int **)(param_2 + 0x4c) + 8))
            (*(int **)(param_2 + 0x4c),*(unsigned int *)(param_2 + 0xb0));
  return;
}

