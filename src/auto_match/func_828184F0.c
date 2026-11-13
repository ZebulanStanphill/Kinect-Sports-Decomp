short fn_828184F0(char *param_1,__int64 param_2)

{
  short sVar1;
  
  sVar1 = 0;
  if ((int)param_2 != 0) {
    do {
      sVar1 = sVar1 * 0x21 + (short)*param_1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return sVar1;
}

