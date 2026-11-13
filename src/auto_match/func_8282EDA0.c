extern int fn_8282ED20();


void fn_8282EDA0(__int64 param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  __int64 lVar6;
  
  iVar1 = (int)param_3 - (int)param_1 >> 2;
  if (0x28 < iVar1) {
    uVar4 = iVar1 + 1;
    uVar3 = (__int64)((int)uVar4 >> 3) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 7) != 0);
    uVar2 = uVar3 & 0x3fffffff;
    uVar3 = uVar3 & 0x1fffffff;
    lVar5 = uVar2 * 4 + param_1;
    fn_8282ED20(param_1,lVar5,uVar3 * 8 + param_1);
    fn_8282ED20(param_2 + uVar2 * -4,param_2,uVar2 * 4 + param_2,param_4);
    lVar6 = param_3 + uVar2 * -4;
    fn_8282ED20(param_3 + uVar3 * -8,lVar6,param_3,param_4);
    param_1 = lVar5;
    param_3 = lVar6;
  }
  fn_8282ED20(param_1,param_2,param_3,param_4);
  return;
}

