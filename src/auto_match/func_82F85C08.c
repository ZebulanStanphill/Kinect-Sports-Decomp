unsigned __int64 fn_82F85C08(unsigned short *param_1,unsigned char *param_2,int param_3)

{
  if ((param_2 != (unsigned char *)0x0) && (param_3 != 0)) {
    if (*param_2 != 0) {
      if (param_1 != (unsigned short *)0x0) {
        *param_1 = (unsigned short)*param_2;
      }
      return 1;
    }
    if (param_1 != (unsigned short *)0x0) {
      *param_1 = 0;
    }
  }
  return 0;
}

