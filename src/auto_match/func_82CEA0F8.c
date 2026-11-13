__int64 fn_82CEA0F8(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = 8;
  if (8 < param_1 << 1) {
    do {
      uVar1 = (uVar1 & 0x7fffffff) << 1;
    } while ((int)uVar1 < param_1 << 1);
  }
  return (uVar1 & 0xfffffff) << 4;
}

