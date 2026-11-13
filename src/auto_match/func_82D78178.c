void fn_82D78178(unsigned char *param_1,__int64 param_2,char *param_3)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned char *)((int)param_2 + 0x21) - 1;
  if (-1 < (__int64)uVar1) {
    param_2 = (uVar1 & 0x3fffffff) * 4 + param_2;
    do {
      if ((*(char *)param_2 == *param_3) && (((char *)param_2)[1] == param_3[1])) {
        *param_1 = 1;
        return;
      }
      uVar1 = uVar1 - 1;
      param_2 = param_2 + -4;
    } while (-1 < (__int64)uVar1);
  }
  *param_1 = 0;
  return;
}

