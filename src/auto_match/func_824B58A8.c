extern unsigned int *auStack_4c;
extern int fn_824B5980();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_50;


double fn_824B58A8(unsigned __int64 param_1,unsigned int *param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  (**(int (***)())*param_2)(param_2,auStack_4c,&uStack_50);
  lVar3 = 0;
  dVar7 = (double)ltcg_pool_0_0f;
  if (0 < param_3) {
    do {
      uVar2 = (unsigned __int64)uStack_50 - lVar3;
      uVar1 = (unsigned __int64)auStack_4c[0];
      if ((int)auStack_4c[0] < (int)uVar2) {
        uVar1 = uVar2;
      }
      uVar4 = (unsigned __int64)auStack_4c[0];
      if ((int)auStack_4c[0] < (int)(uVar2 - 1)) {
        uVar4 = uVar2 - 1;
      }
      dVar5 = (double)fn_824B5980(param_1,param_2,uVar1);
      dVar6 = (double)fn_824B5980(param_1,param_2,uVar4);
      if (ABS(dVar7) < ABS((double)(float)(dVar5 - dVar6))) {
        dVar7 = (double)(float)(dVar5 - dVar6);
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < param_3);
  }
  return dVar7;
}

