unsigned char * memchr(unsigned char *param_1,unsigned int param_2,__int64 param_3)

{
  __int64 lVar1;
  
  if ((int)param_3 != 0) {
    lVar1 = param_3 + -1;
    if (*param_1 == param_2) {
      return param_1;
    }
    if ((int)param_3 != 1) {
      do {
        param_1 = param_1 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0 && *param_1 != param_2);
      if (*param_1 == param_2) {
        return param_1;
      }
    }
  }
  return (unsigned char *)0x0;
}

