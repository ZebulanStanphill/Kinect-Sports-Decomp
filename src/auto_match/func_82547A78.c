extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_80;
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_10c;
extern unsigned int fStack_110;
extern unsigned int fStack_84;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern unsigned int fStack_d4;
extern unsigned int fStack_d8;
extern unsigned int fStack_dc;
extern unsigned int fStack_e0;
extern unsigned int fStack_e4;
extern unsigned int fStack_e8;
extern unsigned int fStack_ec;
extern unsigned int fStack_f0;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_826311B8();
extern int fn_82F64A40();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82193E2C;
extern unsigned int lbl_821C4BD8;
extern unsigned int lbl_821C4BE8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82547A78(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  int param_5,unsigned __int64 param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned __int64 uVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  struct { float first; float second; } stack_pair_110;

  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  __int64 lStack_90;
  float fStack_84;
  unsigned char auStack_80 [128];
  
  uVar5 = fn_82F6A544();
  if (param_7 == 0) {
    pfVar8 = (float *)&lbl_821C4BD8;
  }
  else {
    pfVar8 = (float *)&lbl_821C4BE8;
  }
  dVar13 = (double)(float)(extraout_f1 * extraout_f1);
  pfVar6 = &fStack_84;
  iVar7 = -4;
  dVar12 = (double)lbl_821CA460;
  dVar10 = (double)lbl_821916FC;
  dVar11 = (double)(float)(dVar12 / (double)SQRT((float)(dVar13 * (double)lbl_82193E2C)));
  do {
    lStack_90 = (__int64)iVar7;
    dVar9 = (double)fn_82F64A40(-(double)(((float)lStack_90 * (float)lStack_90) /
                                          (float)(dVar13 * dVar10)));
    iVar7 = iVar7 + 1;
    pfVar6 = pfVar6 + 1;
    *pfVar6 = (float)((double)(float)dVar9 * dVar11);
  } while (iVar7 < 5);
  fVar1 = (float)(dVar12 / param_2);
  fStack_108 = ltcg_pool_0_0f;
  fStack_104 = ltcg_pool_0_0f;
  fStack_f8 = ltcg_pool_0_0f;
  fVar2 = pfVar8[3] * fVar1;
  fStack_f4 = ltcg_pool_0_0f;
  fVar3 = pfVar8[2] * fVar1;
  fStack_e8 = ltcg_pool_0_0f;
  fVar4 = pfVar8[1] * fVar1;
  fStack_e4 = ltcg_pool_0_0f;
  fVar1 = *pfVar8 * fVar1;
  fStack_d8 = ltcg_pool_0_0f;
  fStack_d4 = ltcg_pool_0_0f;
  fStack_c8 = ltcg_pool_0_0f;
  fStack_c4 = ltcg_pool_0_0f;
  fStack_b8 = ltcg_pool_0_0f;
  fStack_b4 = ltcg_pool_0_0f;
  fStack_a8 = ltcg_pool_0_0f;
  fStack_a4 = ltcg_pool_0_0f;
  fStack_98 = ltcg_pool_0_0f;
  fStack_94 = ltcg_pool_0_0f;
  if (param_5 == 0) {
    fStack_e0 = -fVar1;
    stack_pair_110.second = ltcg_pool_0_0f;
    fStack_fc = ltcg_pool_0_0f;
    fStack_ec = ltcg_pool_0_0f;
    fStack_dc = ltcg_pool_0_0f;
    fStack_cc = ltcg_pool_0_0f;
    fStack_bc = ltcg_pool_0_0f;
    fStack_ac = ltcg_pool_0_0f;
    fStack_9c = ltcg_pool_0_0f;
    stack_pair_110.first = -fVar2;
    fStack_100 = -fVar3;
    fStack_f0 = -fVar4;
    fStack_d0 = fVar1;
    fStack_c0 = fVar4;
    fStack_b0 = fVar3;
    fStack_a0 = fVar2;
  }
  else {
    fStack_dc = -fVar1;
    stack_pair_110.first = ltcg_pool_0_0f;
    fStack_100 = ltcg_pool_0_0f;
    fStack_f0 = ltcg_pool_0_0f;
    fStack_e0 = ltcg_pool_0_0f;
    fStack_d0 = ltcg_pool_0_0f;
    fStack_c0 = ltcg_pool_0_0f;
    fStack_b0 = ltcg_pool_0_0f;
    fStack_a0 = ltcg_pool_0_0f;
    stack_pair_110.second = -fVar2;
    fStack_fc = -fVar3;
    fStack_ec = -fVar4;
    fStack_cc = fVar1;
    fStack_bc = fVar4;
    fStack_ac = fVar3;
    fStack_9c = fVar2;
  }
  fn_826311B8(uVar5,0,&stack_pair_110.first,8,0xc000000000000000);
  fn_826311B8(uVar5,8,auStack_80,3,0x2000000000000000);
  fn_82F6A590();
  return;
}

