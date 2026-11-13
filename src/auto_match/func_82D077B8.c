typedef unsigned char bool;


unsigned __int64 fn_82D077B8(__int64 param_1,unsigned __int64 param_2)

{
  bool bVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  iVar2 = (int)param_2;
  uVar3 = param_1 - 1;
  if (3 < (uVar3 & 0xffffffff)) {
    return 0;
  }
  bVar1 = (int)uVar3 != 0;
  if (param_1 == 2 && bVar1) {
    return (__int64)(iVar2 >> 1) + (unsigned __int64)(iVar2 < 0 && (param_2 & 1) != 0);
  }
  if (uVar3 == 2 && bVar1) {
    return (__int64)(iVar2 / 3);
  }
  if (!bVar1) {
    return param_2;
  }
  return param_2 - 2;
}

