extern int fn_82331DB8();


unsigned __int64 fn_82321FA8(__int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  __int64 lVar1;
  int iVar2;
  
  lVar1 = fn_82331DB8(param_1 + 0x10);
  iVar2 = fn_82331DB8(param_1 + 0x40,param_2);
  if (((int)lVar1 != 0) || (iVar2 != 0)) {
    if (param_3 == 0) {
      return -(unsigned __int64)(lVar1 == 0) & 3;
    }
    if (param_3 == 1) {
      return (-(unsigned __int64)(lVar1 != 0) << 0x20 | -(unsigned __int64)(lVar1 != 0) & 0xfffffffd) + 5;
    }
    if (param_3 < 3) {
      return (-(unsigned __int64)(lVar1 != 0) << 0x20 | -(unsigned __int64)(lVar1 != 0) & 0xfffffffd) + 4;
    }
    if (param_3 == 3) {
      return 6;
    }
  }
  return 7;
}

