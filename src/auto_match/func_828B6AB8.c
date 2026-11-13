extern int fn_828B68E8();


void fn_828B6AB8(__int64 param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  __int64 lVar6;
  
  iVar1 = (int)param_3 - (int)param_1 >> 3;
  if (iVar1 < 0x29) {
    fn_828B68E8(param_1,param_2,param_3);
  }
  else {
    uVar4 = iVar1 + 1;
    uVar3 = (__int64)((int)uVar4 >> 3) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 7) != 0);
    uVar2 = uVar3 & 0x1fffffff;
    uVar3 = uVar3 & 0xfffffff;
    lVar5 = uVar2 * 8 + param_1;
    fn_828B68E8(param_1,lVar5,uVar3 * 0x10 + param_1);
    fn_828B68E8(param_2 + uVar2 * -8,param_2,uVar2 * 8 + param_2,param_4);
    lVar6 = param_3 + uVar2 * -8;
    fn_828B68E8(param_3 + uVar3 * -0x10,lVar6,param_3,param_4);
    fn_828B68E8(lVar5,param_2,lVar6,param_4);
  }
  return;
}

