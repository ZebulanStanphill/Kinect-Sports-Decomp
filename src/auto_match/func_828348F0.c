extern int fn_82834608();


void fn_828348F0(__int64 param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar3;
  __int64 lVar2;
  __int64 lVar4;
  __int64 lVar5;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0xc;
  if (0x28 < iVar1) {
    uVar3 = iVar1 + 1;
    lVar2 = (__int64)((int)uVar3 >> 3) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 7) != 0);
    lVar4 = lVar2 * 0xc + param_1;
    fn_82834608(param_1,lVar4,lVar2 * 0x18 + param_1);
    fn_82834608(param_2 + lVar2 * -0xc,param_2,lVar2 * 0xc + param_2,param_4);
    lVar5 = param_3 + lVar2 * -0xc;
    fn_82834608(param_3 + lVar2 * -0x18,lVar5,param_3,param_4);
    param_1 = lVar4;
    param_3 = lVar5;
  }
  fn_82834608(param_1,param_2,param_3,param_4);
  return;
}

