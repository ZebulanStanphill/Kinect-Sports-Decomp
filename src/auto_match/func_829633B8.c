unsigned __int64 fn_829633B8(unsigned int *param_1)

{
  unsigned int uVar1;
  
  uVar1 = *param_1 & 0xfff00000;
  if ((((uVar1 != 0x10300000) && (uVar1 != 0x10500000)) && (uVar1 != 0x10600000)) &&
     (uVar1 != 0x10700000)) {
    return 0;
  }
  return 1;
}

