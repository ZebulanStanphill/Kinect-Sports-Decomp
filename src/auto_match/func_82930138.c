void fn_82930138(unsigned int *param_1,unsigned int param_2,int param_3)

{
  unsigned int uVar1;
  
  uVar1 = param_3 + 0xfffU & 0xfffff000;
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (param_2 == 0) {
    param_2 = 0x100000;
  }
  param_1[5] = (uVar1 + param_2) - 1 & ~(uVar1 - 1);
  return;
}

