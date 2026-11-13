extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;


unsigned __int64 fn_829E5CA0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uStack00000020;
  int iStack00000024;
  unsigned int uStack00000028;
  int iStack0000002c;
  
  uStack00000028 = (unsigned int)(param_3 >> 0x20);
  iStack0000002c = (int)param_3;
  iStack00000024 = (int)param_2;
  uStack00000020 = (unsigned int)(param_2 >> 0x20);
  if (((uStack00000028 == 0) && (uStack00000020 == 0)) && (iStack00000024 == 0)) {
    if (iStack0000002c == 0) {
      return 0xffffffff80070057;
    }
  }
  else if (iStack00000024 < 0) {
    return 0xffffffff80070057;
  }
  if (((iStack00000024 < iStack0000002c) &&
      (((param_3 & 0xffffffff) - (param_2 & 0xffffffff) & 0xffffffff) <=
       (unsigned __int64)*(unsigned int *)(param_1 + 0x34))) &&
     ((-1 < (__int64)param_2 && ((int)uStack00000020 < (int)uStack00000028)))) {
    return -(unsigned __int64)
            ((unsigned __int64)*(unsigned int *)(param_1 + 0x30) <
            (unsigned __int64)uStack00000028 - (unsigned __int64)uStack00000020) & 0xffffffff80070057;
  }
  return 0xffffffff80070057;
}

