#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82321728(double param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  unsigned int uVar6;
  int iVar7;
  
  if (*(int *)(param_2[1] + 0x4c) == 0) {
    return;
  }
  if (param_2[7] == 0) {
    return;
  }
  if ((*(int *)(*param_2 + 0x7b8) == 0) && (*(int *)(*param_2 + 0x7b4) == 0)) {
    fVar1 = (float)param_2[6];
    fVar2 = (float)param_2[2];
    fVar4 = (float)param_2[5] - fVar2;
  }
  else {
    fVar1 = (float)param_2[6];
    fVar2 = (float)param_2[2];
    fVar4 = lbl_821CA460 - fVar2;
  }
  fVar1 = (float)((double)fVar1 * param_1);
  iVar3 = param_2[8];
  fVar5 = fVar4 - -fVar1;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar5 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar5) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar4 = -fVar1;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar4 - fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar4 - fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar1 = fVar4;
  }
  fVar1 = fVar1 + fVar2;
  param_2[2] = (int)fVar1;
  fVar2 = lbl_821CA460;
  iVar7 = param_2[1] + 0x1d0;
  *(float *)(iVar3 * 0x10 + iVar7 + 0x2c) = fVar1;
  *(float *)((iVar3 + 0x10) * 4 + iVar7) = fVar2;
  iVar3 = (iVar3 + 4) * 4;
  uVar6 = *(unsigned int *)(iVar3 + iVar7);
  if (fVar2 <= fVar1) {
    uVar6 = uVar6 & 0xffffffdf;
  }
  else {
    uVar6 = uVar6 | 0x20;
  }
  *(unsigned int *)(iVar3 + iVar7) = uVar6;
  return;
}

