#define NAN(x) ((x) != (x))
extern unsigned int *auStack_30;
extern int fn_822A21A8();
extern int fn_825521F0();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D450C;
extern int (*lbl_83276778)();
extern int (*lbl_8327677C)();
extern unsigned int uStack_20;


void fn_823602F0(double param_1,int param_2,unsigned __int64 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  unsigned int uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned char auStack_30 [16];
  unsigned int uStack_20;
  
  fVar2 = ltcg_pool_0_0f;
  iVar5 = *(int *)(param_2 + 0x2cac);
  if (iVar5 == 1) {
    *(unsigned int *)(param_2 + 0x2cac) = 2;
    if (*(int *)(param_2 + 0x6c4) != 0) {
      *(unsigned int *)(param_2 + 0x2cb0) = *(unsigned int *)(param_2 + 0x2cb4);
      if (lbl_83276778 == (int (**)())0x0) {
        return;
      }
      (*lbl_83276778)(0,0,1,0xffffffff821b277c,0xffffffff821b2718,0x11f8);
      return;
    }
    *(unsigned int *)(param_2 + 0x2cb0) = *(unsigned int *)(param_2 + 0x6c8);
    lbl_831D450C = (-(unsigned int)(*(int *)(param_2 + 0x6c0) != 0) & 0x100) - 1;
    fVar2 = *(float *)(param_2 + 0x6c8);
    dVar9 = (double)lbl_821CA460;
LAB_8236059c:
    uStack_20 = 0;
    fn_825521F0(dVar9,(double)fVar2,param_2,param_3,auStack_30);
  }
  else {
    if (iVar5 == 2) {
      if (*(int *)(param_2 + 0x6c4) == 0) {
        fVar1 = (float)((double)*(float *)(param_2 + 0x2cb0) - param_1);
        fVar3 = -fVar1;
        fVar4 = ltcg_pool_0_0f;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                      (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
          fVar4 = fVar1;
        }
        *(float *)(param_2 + 0x2cb0) = fVar4;
        if (fVar4 != fVar2) {
          return;
        }
        *(unsigned int *)(param_2 + 0x2cb0) = *(unsigned int *)(param_2 + 0x6cc);
      }
      else {
        iVar5 = fn_822A21A8();
        fVar2 = ltcg_pool_0_0f;
        if (iVar5 == 0) {
          return;
        }
        fVar1 = (float)((double)*(float *)(param_2 + 0x2cb0) - param_1);
        fVar3 = -fVar1;
        fVar4 = ltcg_pool_0_0f;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                      (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
          fVar4 = fVar1;
        }
        *(float *)(param_2 + 0x2cb0) = fVar4;
        if (fVar4 != fVar2) {
          return;
        }
      }
      uVar6 = 3;
    }
    else {
      if (iVar5 == 3) {
        if (*(int *)(param_2 + 0x6c4) != 0) {
          if (lbl_8327677C != (int (**)())0x0) {
            (*lbl_8327677C)(0xffffffff821b277c,0xffffffff821b2718,0x1225);
          }
          *(unsigned int *)(param_2 + 0x2cac) = 4;
          *(float *)(param_2 + 0x2cb0) = ltcg_pool_0_0f;
          return;
        }
        dVar7 = (double)(float)((double)*(float *)(param_2 + 0x2cb0) - param_1);
        dVar9 = (double)ltcg_pool_0_0f;
        dVar10 = -dVar7;
        dVar8 = dVar9;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((dVar10 < dVar9) << 2) | (unsigned int)(NAN(dVar10) || NAN(dVar9)) << 2)
                      ) < 0.0) {
          dVar8 = dVar7;
        }
        *(float *)(param_2 + 0x2cb0) = (float)dVar8;
        if (dVar8 != dVar9) {
          return;
        }
        fVar2 = *(float *)(param_2 + 0x6d0);
        *(float *)(param_2 + 0x2cb0) = fVar2;
        *(unsigned int *)(param_2 + 0x2cac) = 4;
        goto LAB_8236059c;
      }
      if (iVar5 != 4) {
        return;
      }
      fVar1 = (float)((double)*(float *)(param_2 + 0x2cb0) - param_1);
      fVar3 = -fVar1;
      fVar4 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar4 = fVar1;
      }
      *(float *)(param_2 + 0x2cb0) = fVar4;
      if (fVar4 != fVar2) {
        return;
      }
      uVar6 = 0;
    }
    *(unsigned int *)(param_2 + 0x2cac) = uVar6;
  }
  return;
}

