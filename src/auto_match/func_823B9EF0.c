extern int fn_823B9060();


void fn_823B9EF0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  if (param_1 != param_2) {
    fn_823B9060();
    uVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = uVar1;
    if ((unsigned int *)*param_1 != (unsigned int *)0x0) {
      *(unsigned int *)*param_1 = param_1;
    }
    if ((unsigned int *)*param_2 != (unsigned int *)0x0) {
      *(unsigned int *)*param_2 = param_2;
    }
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  return;
}

