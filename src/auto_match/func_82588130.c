#define true 1
extern float fRam8326b870;
extern int fn_82588280();
extern int fn_82F64CE0();
extern unsigned int ltcg_pool_0_0f;


double fn_82588130(short *param_1,unsigned __int64 param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  sVar3 = 0;
  dVar5 = (double)ltcg_pool_0_0f;
  dVar6 = dVar5;
  while( true ) {
    iVar2 = fn_82F64CE0(param_1);
    if (iVar2 == 0) {
      return (double)(float)(dVar6 - (double)fRam8326b870);
    }
    sVar1 = *param_1;
    if (sVar1 == 10) {
      return dVar6;
    }
    if (sVar1 == 0x20) {
      return dVar6;
    }
    if (sVar1 == 0) break;
    dVar4 = (double)fn_82588280(dVar5,param_2,sVar1,sVar3);
    sVar3 = *param_1;
    param_1 = param_1 + 1;
    dVar6 = (double)(float)(dVar4 + dVar6);
  }
  return dVar6;
}

