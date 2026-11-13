extern int fn_827561F0();


void fn_8272DED0(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if (param_3 < *(unsigned int *)(param_1 + 4)) {
    uVar1 = param_3;
    if (param_3 >= (unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 1)) goto LAB_8272df24;
  }
  else {
    if (param_3 < *(unsigned int *)(param_1 + 8)) goto LAB_8272df24;
    uVar1 = (param_3 >> 2) + param_3;
  }
  fn_827561F0(param_1,param_2,uVar1);
LAB_8272df24:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

