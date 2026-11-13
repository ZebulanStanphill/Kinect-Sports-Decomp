extern unsigned int iStack00000010;
extern unsigned int iStack00000014;


unsigned __int64 fn_82F71860(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  int iStack00000010;
  int iStack00000014;
  
  iStack00000010 = (int)(param_1 >> 0x20);
  iStack00000014 = (int)param_1;
  if (iStack00000010 == 0x7ff00000) {
    if (iStack00000014 == 0) {
      return 1;
    }
  }
  else if ((iStack00000010 == -0x100000) && (iStack00000014 == 0)) {
    return 2;
  }
  uVar1 = param_1 >> 0x30 & 0x7ff8;
  if (uVar1 == 0x7ff8) {
    return 3;
  }
  if ((uVar1 == 0x7ff0) && (((param_1 & 0x7ffff00000000) != 0 || (iStack00000014 != 0)))) {
    return 4;
  }
  return 0;
}

