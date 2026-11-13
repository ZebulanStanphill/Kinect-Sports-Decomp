extern unsigned int *auStack_20;
extern int fn_825207D0();
extern int fn_826312F0();
extern int fn_82A1DD38();
extern unsigned int ltcg_pool_0_0f;


void fn_82542650(double param_1,__int64 param_2,int param_3,int param_4,unsigned __int64 param_5,
                  int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  __int64 lVar4;
  double dVar5;
  unsigned int auStack_20 [4];
  
  dVar5 = (double)ltcg_pool_0_0f;
  if (((param_6 == 0) && (param_1 <= dVar5)) || ((param_4 != 0 && (param_3 == 8)))) {
    auStack_20[0] = 0;
  }
  else {
    auStack_20[0] = 1;
  }
  lVar4 = param_2 + 0xa064;
  iVar2 = fn_825207D0(lVar4,auStack_20,4);
  piVar3 = (int *)param_2;
  if (iVar2 != 0) {
    fn_82A1DD38(lVar4,auStack_20);
    fn_826312F0(*piVar3,1,auStack_20,1);
  }
  iVar1 = *piVar3;
  iVar2 = piVar3[0x2aef];
  *(float *)(iVar1 + 0x1bd4) = (float)dVar5;
  *(float *)(iVar1 + 0x1bd8) = (float)dVar5;
  *(float *)(iVar1 + 0x1bdc) = (float)dVar5;
  *(int *)(iVar1 + 0x1bd0) = iVar2;
  *(unsigned __int64 *)(iVar1 + 8) = *(unsigned __int64 *)(iVar1 + 8) | 0x400000000000;
  return;
}

