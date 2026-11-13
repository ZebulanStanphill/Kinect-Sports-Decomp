unsigned __int64 fn_82B452F0(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 8) >> 7 & 0x7f;
  if ((uVar1 != 0x21) &&
     ((uVar1 <= 0x22 || (((0x24 < uVar1 && (uVar1 != 0x3a)) && (uVar1 != 0x52)))))) {
    return 0;
  }
  return 1;
}

