#define NAN(x) ((x) != (x))
extern unsigned int lbl_82192480;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_8239FE38(double param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar3 = (double)ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0x138) != 0) {
    dVar5 = (double)(float)((double)*(float *)(param_2 + 0x138) - param_1);
    dVar4 = -dVar5;
    dVar6 = dVar3;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar4 < dVar3) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar3)) << 2)) <
        0.0) {
      dVar6 = dVar5;
    }
    *(float *)(param_2 + 0x138) = (float)dVar6;
  }
  if (*(int *)(param_2 + 0x134) != 0) {
    dVar5 = (double)(float)((double)*(float *)(param_2 + 0x134) - param_1);
    dVar4 = -dVar5;
    dVar6 = dVar3;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((dVar4 < dVar3) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar3)) << 2)) <
        0.0) {
      dVar6 = dVar5;
    }
    *(float *)(param_2 + 0x134) = (float)dVar6;
  }
  uVar1 = *(unsigned int *)(param_2 + 0x128);
  if ((int)uVar1 < 1) {
    return;
  }
  dVar6 = (double)*(float *)(param_2 + 0x130);
  dVar4 = (double)(float)(dVar6 - param_1);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((dVar4 < dVar3) << 2) | (unsigned int)(NAN(dVar4) || NAN(dVar3)) << 2)) < 0.0)
  {
    dVar4 = dVar3;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((double)(float)(dVar4 - dVar6) < dVar3) << 2) |
                (unsigned int)(NAN((double)(float)(dVar4 - dVar6)) || NAN(dVar3)) << 2)) < 0.0) {
    dVar6 = dVar4;
  }
  *(float *)(param_2 + 0x130) = (float)dVar6;
  if (*(int *)(param_2 + 0x130) != 0) {
    return;
  }
  uVar2 = -((int)(uVar1 - 1) >> 0x1f) - 1U & uVar1 - 1;
  if ((int)uVar1 <= (int)uVar2) {
    uVar2 = uVar1;
  }
  *(unsigned int *)(param_2 + 0x128) = uVar2;
  *(unsigned int *)(param_2 + 0x130) = lbl_82192480;
  return;
}

