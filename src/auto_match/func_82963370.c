unsigned __int64 fn_82963370(unsigned int *param_1)

{
  unsigned int uVar1;
  
  if (((((*param_1 & 0xf0000000) != 0x60000000) &&
       (uVar1 = *param_1 & 0xfff00000, uVar1 != 0x50100000)) && (uVar1 != 0x50200000)) &&
     (uVar1 != 0x50300000)) {
    return 0;
  }
  return 1;
}

