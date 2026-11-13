extern int fn_82F68CC0();


void fn_8256D798(unsigned int *param_1,char param_2,int param_3)

{
  unsigned int uVar1;
  
  if ((param_2 != '\0') && (0xf < (unsigned int)param_1[5])) {
    uVar1 = *param_1;
    if (param_3 != 0) {
      fn_82F68CC0(param_1,uVar1);
    }
    (**(int (***)())(*(int *)param_1[6] + 0x18))((int *)param_1[6],uVar1,param_1 + 7);
  }
  param_1[4] = param_3;
  param_1[5] = 0xf;
  *(unsigned char *)(param_3 + (int)param_1) = 0;
  return;
}

