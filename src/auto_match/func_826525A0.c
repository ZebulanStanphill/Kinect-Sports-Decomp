extern int fn_826561B0();


unsigned __int64 fn_826525A0(int param_1,char *param_2)

{
  unsigned char bVar1;
  
  if (param_2 == (char *)0x0) {
    return 0xffffffff82da0017;
  }
  bVar1 = *(unsigned char *)(param_1 + 4);
  if (bVar1 < 0x6c) {
    if ((bVar1 != 0x6b) && (bVar1 != 0x61)) {
      if (bVar1 < 99) {
        return 0x2da0000;
      }
      if (100 < bVar1) {
        if (bVar1 < 0x66) {
          return 0x2da0000;
        }
        if (0x67 < bVar1) {
          return 0x2da0000;
        }
      }
    }
  }
  else {
    if (bVar1 == 0x6d) {
      fn_826561B0(param_1);
      return 0x2da0000;
    }
    if (bVar1 != 0x74) {
      return 0x2da0000;
    }
  }
  xboxkrnl_sprintf(param_2,"PIX!NO");
  return 0x2da0000;
}

