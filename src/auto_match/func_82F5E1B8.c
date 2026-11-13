typedef unsigned char bool;
extern int fn_829C90F0();
extern int fn_829C9100();


unsigned char fn_82F5E1B8(unsigned __int64 param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  bool bVar6;
  
  if (*param_2 == 0) {
    iVar2 = fn_829C9100((double)(float)param_2[1],0,0);
    iVar3 = fn_829C9100((double)(float)param_2[2],0,6);
    iVar4 = fn_829C9100((double)(float)param_2[3],0,7);
    fVar1 = (float)param_2[4];
    uVar5 = 8;
    bVar6 = (iVar3 == 0 && iVar2 == 0) && iVar4 == 0;
  }
  else {
    if (*param_2 != 1) {
      return 1;
    }
    iVar2 = fn_829C90F0(0,2,param_2[5]);
    fVar1 = (float)param_2[6];
    uVar5 = 5;
    bVar6 = iVar2 == 0;
  }
  iVar2 = fn_829C9100((double)fVar1,0,uVar5);
  return iVar2 == 0 & bVar6;
}

