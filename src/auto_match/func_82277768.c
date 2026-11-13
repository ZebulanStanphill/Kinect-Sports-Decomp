#define NAN(x) ((x) != (x))
extern int fn_82540078();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821958F8;
extern unsigned int ltcg_pool_0_0f;


void fn_82277768(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double extraout_f1;
  double dVar8;
  double dVar9;
  
  iVar5 = fn_82F6A548();
  if ((param_3 & 0xff) == 0) {
    uVar3 = *(unsigned int *)(iVar5 + 0xc);
    uVar4 = *(unsigned int *)(iVar5 + 0x10);
    *(unsigned int *)(iVar5 + 0x14) = uVar3;
    *(unsigned int *)(iVar5 + 0x18) = uVar4;
    *(unsigned int *)(iVar5 + 0x1c) = uVar3;
    *(unsigned int *)(iVar5 + 0x20) = uVar4;
    *(unsigned int *)(iVar5 + 0x24) = uVar3;
    *(unsigned int *)(iVar5 + 0x28) = uVar4;
  }
  else {
    dVar6 = (double)(float)(extraout_f1 * (double)lbl_821958F8);
    dVar9 = extraout_f1;
    dVar8 = (double)fn_82540078((double)lbl_821917C0,extraout_f1);
    dVar9 = (double)fn_82540078((double)lbl_821917C0,dVar9);
    dVar8 = (double)(float)(dVar8 * (double)(*(float *)(iVar5 + 0x10) - *(float *)(iVar5 + 0x18)));
    dVar9 = (double)(float)(dVar9 * (double)(float)((double)*(float *)(iVar5 + 0xc) -
                                                   (double)*(float *)(iVar5 + 0x14)));
    fVar1 = (float)(dVar8 - -dVar6);
    fVar2 = (float)(dVar9 - -dVar6);
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar9 = -dVar6;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar8 = -dVar6;
    }
    dVar7 = dVar6;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((float)(dVar9 - dVar6) < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN((float)(dVar9 - dVar6)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar7 = dVar9;
    }
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)(((float)(dVar8 - dVar6) < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN((float)(dVar8 - dVar6)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      dVar6 = dVar8;
    }
    *(float *)(iVar5 + 0x14) = (float)((double)*(float *)(iVar5 + 0x14) + dVar7);
    *(float *)(iVar5 + 0x18) = (float)((double)*(float *)(iVar5 + 0x18) + dVar6);
  }
  fn_82F6A594();
  return;
}

