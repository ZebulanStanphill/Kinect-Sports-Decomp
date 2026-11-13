typedef unsigned char bool;


unsigned __int64 fn_82CFF730(unsigned __int64 param_1)

{
  bool bVar1;
  
  if (4 < (param_1 & 0xffffffff)) {
    return 0xffffffff821a6774;
  }
  bVar1 = (int)param_1 != 0;
  if (param_1 == 1 && bVar1) {
    return 0xffffffff82133edc;
  }
  if (param_1 == 2 && bVar1) {
    return 0xffffffff82133ed4;
  }
  if (param_1 != 3 || !bVar1) {
    if (!bVar1) {
      return 0xffffffff82133ee4;
    }
    return 0xffffffff82133ec4;
  }
  return 0xffffffff82133ecc;
}

