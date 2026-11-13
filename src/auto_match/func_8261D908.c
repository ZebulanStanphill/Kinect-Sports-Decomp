typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_5c5;
extern unsigned int *auStack_610;
extern int fn_82529A38();
extern int fn_82587AC0();
extern int fn_825D9FB0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326F968;
extern unsigned int lbl_8326F96C;


bool fn_8261D908(double param_1,int param_2,unsigned __int64 param_3,float *param_4)

{
  double dVar1;
  float fVar2;
  unsigned char bVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  unsigned char auStack_610 [75];
  unsigned char auStack_5c5 [1453];
  
  if ((lbl_8326F968 == 0) || (bVar3 = 1, lbl_8326F96C != 0)) {
    bVar3 = 0;
  }
  fVar2 = *(float *)(param_2 + 0xb3c) + *param_4;
  *param_4 = fVar2;
  bVar6 = false;
  dVar8 = (double)ltcg_pool_0_0f;
  dVar7 = (double)(lbl_821CA460 / (float)(__int64)((int)((-(unsigned int)bVar3 & 0xfffffff6) + 0x3c) >> 1))
  ;
  dVar1 = (double)fVar2 - dVar7;
  while (dVar8 < (double)(float)dVar1) {
    *param_4 = (float)((double)*param_4 - dVar7);
    if (!bVar6) {
      if (dVar8 < param_1) {
        fn_825D9FB0(param_1,auStack_610,param_2);
        uVar4 = fn_82587AC0(auStack_5c5);
        lVar5 = fn_82529A38(uVar4,auStack_610,0);
        bVar6 = lVar5 != 0;
      }
      else {
        bVar6 = false;
      }
    }
    dVar1 = (double)*param_4 - dVar7;
  }
  return bVar6;
}

