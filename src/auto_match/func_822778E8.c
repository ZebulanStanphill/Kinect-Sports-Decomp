#define NAN(x) ((x) != (x))
extern int fn_82540078();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821958EC;
extern unsigned int lbl_821958F8;
extern unsigned int ltcg_pool_0_0f;


void fn_822778E8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  double extraout_f1;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar3 = fn_82F6A540();
  fVar1 = lbl_8218E8E8;
  if ((param_3 & 0xff) != 0) {
    fVar1 = ltcg_pool_0_0f;
  }
  dVar9 = (double)(float)(extraout_f1 * (double)lbl_821958EC);
  dVar8 = (double)(float)(extraout_f1 * (double)lbl_821958F8);
  dVar7 = (double)((*(float *)(iVar3 + 0x14) - *(float *)(iVar3 + 0x1c)) * fVar1 +
                  *(float *)(iVar3 + 0x1c));
  dVar6 = (double)((*(float *)(iVar3 + 0x18) - *(float *)(iVar3 + 0x20)) * fVar1 +
                  *(float *)(iVar3 + 0x20));
  dVar5 = extraout_f1;
  dVar4 = (double)fn_82540078((double)lbl_821917C0,extraout_f1);
  dVar5 = (double)fn_82540078((double)lbl_821917B4,dVar5);
  dVar4 = (double)(float)(dVar4 * (double)(float)(dVar6 - (double)*(float *)(iVar3 + 0x28)));
  dVar5 = (double)(float)(dVar5 * (double)(float)(dVar7 - (double)*(float *)(iVar3 + 0x24)));
  fVar1 = (float)(dVar4 - -dVar8);
  fVar2 = (float)(dVar5 - -dVar9);
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar5 = -dVar9;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar4 = -dVar8;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((float)(dVar5 - dVar9) < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN((float)(dVar5 - dVar9)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar9 = dVar5;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)(((float)(dVar4 - dVar8) < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN((float)(dVar4 - dVar8)) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    dVar8 = dVar4;
  }
  *(float *)(iVar3 + 0x24) = (float)((double)*(float *)(iVar3 + 0x24) + dVar9);
  *(float *)(iVar3 + 0x28) = (float)((double)*(float *)(iVar3 + 0x28) + dVar8);
  fn_82F6A58C();
  return;
}

