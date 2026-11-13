extern unsigned int iStack00000014;


unsigned __int64 fn_82F6DFD0(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  int iStack00000014;
  
  uVar1 = param_1 >> 0x30 & 0x7ff8;
  if (((uVar1 != 0x7ff0) ||
      (((param_1 & 0x7ffff00000000) == 0 && (iStack00000014 = (int)param_1, iStack00000014 == 0))))
     && (uVar1 != 0x7ff8)) {
    return 0;
  }
  return 1;
}

