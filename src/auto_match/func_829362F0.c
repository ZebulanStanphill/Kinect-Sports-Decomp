unsigned __int64 fn_829362F0(char *param_1,unsigned __int64 param_2,int *param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = param_2;
  if ((param_2 & 0xffffffff) != 0) {
    do {
      if (*param_1 == '\0') break;
      uVar1 = uVar1 - 1;
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
    if ((uVar1 & 0xffffffff) != 0) {
      if (param_3 == (int *)0x0) {
        return 0;
      }
      *param_3 = (int)param_2 - (int)uVar1;
      return 0;
    }
  }
  return 0xffffffff80070057;
}

