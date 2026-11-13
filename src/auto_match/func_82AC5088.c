unsigned __int64 fn_82AC5088(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= param_3) {
    uVar1 = 0;
    if (param_3 != param_2) {
      do {
        if (param_4 <= uVar1) {
          return 0xffffffff80004005;
        }
        if (*(char *)(uVar1 + param_1) == '\0') {
          return 0;
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_3 - param_2);
    }
  }
  return 0xffffffff80004005;
}

