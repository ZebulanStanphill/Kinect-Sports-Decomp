unsigned __int64 fn_82963400(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = *param_1 & 0xfff00000;
  if ((((uVar1 != 0x20000000) && (uVar1 != 0x20100000)) && (uVar1 != 0x20400000)) &&
     ((uVar1 != 0x20500000 && (uVar1 != 0x50000000)))) {
    return 0;
  }
  return 1;
}

