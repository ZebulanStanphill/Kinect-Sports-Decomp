extern int fn_8286B368();


void fn_8286B568(__int64 param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int uVar3;
  __int64 lVar2;
  __int64 lVar4;
  __int64 lVar5;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0x1c;
  if (0x28 < iVar1) {
    uVar3 = iVar1 + 1;
    lVar2 = (__int64)((int)uVar3 >> 3) + (unsigned __int64)((int)uVar3 < 0 && (uVar3 & 7) != 0);
    lVar4 = lVar2 * 0x1c + param_1;
    fn_8286B368(param_1,lVar4,lVar2 * 0x38 + param_1);
    fn_8286B368(param_2 + lVar2 * -0x1c,param_2,lVar2 * 0x1c + param_2);
    lVar5 = param_3 + lVar2 * -0x1c;
    fn_8286B368(param_3 + lVar2 * -0x38,lVar5,param_3);
    param_1 = lVar4;
    param_3 = lVar5;
  }
  fn_8286B368(param_1,param_2,param_3);
  return;
}

