typedef unsigned char bool;
#define NAN(x) ((x) != (x))
extern int fn_8252AFE0();
extern unsigned int lbl_82191118;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;


void fn_82360050(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar5 = (double)*(float *)(param_2 + 0x2c98);
  dVar7 = (double)*(float *)(param_2 + 0x2c94);
  if (dVar7 <= dVar5) {
    dVar7 = (double)(float)((double)*(float *)(param_2 + 0x68c) * param_1 + dVar7);
    fVar1 = (float)(dVar5 - dVar7);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar7 = dVar5;
    }
  }
  else {
    dVar6 = -(double)(float)((double)*(float *)(param_2 + 0x688) * param_1 - dVar7);
    fVar1 = (float)(dVar5 - dVar6);
    dVar7 = dVar5;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar7 = dVar6;
    }
  }
  dVar5 = (double)ltcg_pool_0_0f;
  *(float *)(param_2 + 0x2c94) = (float)dVar7;
  iVar2 = *(int *)((*(int *)(param_2 + 0x2c8c) + 0xb0a) * 4 + param_2);
  if (iVar2 != 0) {
    fn_8252AFE0(dVar7,iVar2);
    iVar2 = *(int *)((*(int *)(param_2 + 0x2c8c) + 0xb0a) * 4 + param_2);
    uVar3 = *(unsigned int *)(iVar2 + 0x1e0);
    if (lbl_82191118 <= *(float *)(param_2 + 0x2c94)) {
      uVar3 = uVar3 & 0xffffffdf;
    }
    else {
      uVar3 = uVar3 | 0x20;
    }
    *(unsigned int *)(iVar2 + 0x1e0) = uVar3;
    bVar4 = (double)*(float *)(param_2 + 0x2c94) == dVar5;
    *(unsigned int *)(*(int *)((*(int *)(param_2 + 0x2c8c) + 0xb0a) * 4 + param_2) + 0x1d0) =
         (unsigned int)bVar4 + (-(unsigned int)!bVar4 - (bVar4 - 1));
  }
  return;
}

