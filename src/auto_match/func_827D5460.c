unsigned int fn_827D5460(char *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (*param_1 == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 1;
    } while (uVar1 < param_2);
  }
  return uVar1;
}

