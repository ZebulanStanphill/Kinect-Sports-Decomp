extern unsigned int lbl_832179FC;


__int64 fn_829D4E08(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  
  if ((param_2 & 0xffffffff) >> 0x1f == 0) {
    lVar1 = (unsigned __int64)lbl_832179FC + 0x8f274;
  }
  else {
    lVar1 = (unsigned __int64)lbl_832179FC + 0x8f108;
  }
  if (param_1 == 1) {
    return lVar1 + 0x1c;
  }
  if (param_1 == 2) {
    return lVar1 + 0x70;
  }
  if (param_1 != 4) {
    if (param_1 != 6) {
      return 0;
    }
    return lVar1 + 0x118;
  }
  return lVar1 + 0xc4;
}

