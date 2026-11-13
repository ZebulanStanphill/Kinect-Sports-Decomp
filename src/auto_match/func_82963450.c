unsigned __int64 fn_82963450(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = *param_1 & 0xfff00000;
  if ((((uVar1 != 0x10000000) && (uVar1 != 0x10100000)) && (uVar1 != 0x11200000)) &&
     (((uVar1 != 0x20700000 && (uVar1 != 0x20800000)) && (uVar1 != 0x20900000)))) {
    return 0;
  }
  return 1;
}

