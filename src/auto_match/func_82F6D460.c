unsigned __int64 fn_82F6D460(char *param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    do {
      if (*param_1 == '\0') {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 1;
    } while ((uVar1 & 0xffffffff) < (unsigned __int64)param_2);
  }
  return uVar1;
}

