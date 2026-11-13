typedef unsigned char bool;


unsigned __int64 fn_82D07768(__int64 param_1,unsigned __int64 param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  
  uVar2 = param_1 - 1;
  if (3 < (uVar2 & 0xffffffff)) {
    return 0;
  }
  bVar1 = (int)uVar2 != 0;
  if (param_1 == 2 && bVar1) {
    return (param_2 & 0x7fffffff) << 1;
  }
  if (uVar2 == 2 && bVar1) {
    return param_2 + (param_2 & 0x7fffffff) * 2;
  }
  if (!bVar1) {
    return param_2;
  }
  return param_2 + 2;
}

