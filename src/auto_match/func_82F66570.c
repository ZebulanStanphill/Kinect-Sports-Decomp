unsigned char * strchr(unsigned char *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  uVar1 = (unsigned int)*param_1;
  if (param_2 == 0) {
    while (uVar1 != 0) {
      param_1 = param_1 + 1;
      uVar1 = (unsigned int)*param_1;
    }
  }
  else {
    while (uVar1 != 0) {
      if (uVar1 == param_2) {
        return param_1;
      }
      param_1 = param_1 + 1;
      uVar1 = (unsigned int)*param_1;
    }
    param_1 = (unsigned char *)0x0;
  }
  return param_1;
}

