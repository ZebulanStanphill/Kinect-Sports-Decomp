extern int fn_82E58CA8();


unsigned int * fn_82EEB190(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  uVar1 = fn_82E58CA8(param_1,0x14,0);
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = uVar1;
  }
  return param_1;
}

