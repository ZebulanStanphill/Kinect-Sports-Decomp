#define NAN(x) ((x) != (x))
extern int fn_824B2FA0();
extern int fn_824B3A40();
extern int fn_824B3C70();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_824B2DF0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fn_824B2FA0();
  dVar5 = (double)fn_824B3A40(param_1);
  fVar4 = ltcg_pool_0_0f;
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar2 + 0x78) == 0) {
    *(float *)(iVar2 + 0x1c) = (float)dVar5;
  }
  else {
    fVar1 = (float)(dVar5 - (double)*(float *)(iVar2 + 0x1c));
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar5 = (double)*(float *)(iVar2 + 0x1c);
    }
    *(float *)(iVar2 + 0x1c) = (float)dVar5;
  }
  iVar2 = *(int *)(param_1 + 0x3c);
  fVar1 = *(float *)(iVar2 + 0x6c) - *(float *)(iVar2 + 0x1c);
  fVar3 = *(float *)(iVar2 + 0x6c);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < fVar4) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar4)) << 2)) < 0.0)
  {
    fVar3 = *(float *)(iVar2 + 0x1c);
  }
  *(float *)(iVar2 + 0x6c) = fVar3;
  *(int *)(*(int *)(param_1 + 0x3c) + 0x74) = *(int *)(*(int *)(param_1 + 0x3c) + 0x74) + 1;
  iVar2 = *(int *)(param_1 + 0x3c);
  *(float *)(iVar2 + 0x68) =
       *(float *)(iVar2 + 0x1c) / (float)*(unsigned int *)(iVar2 + 0x74) + *(float *)(iVar2 + 0x68);
  fn_824B3C70(param_1);
  return;
}

