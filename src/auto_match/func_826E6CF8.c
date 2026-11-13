extern int inflateReset();


void fn_826E6CF8(unsigned int *param_1)

{
  int iVar1;
  
  *(unsigned char *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  iVar1 = inflateReset(param_1 + 1);
  if (iVar1 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    (**(int (***)())(*(int *)*param_1 + 0x38))((int *)*param_1,param_1[0xf],0);
    param_1[0x10] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
  }
  else {
    param_1[0x12] = 1;
  }
  return;
}

