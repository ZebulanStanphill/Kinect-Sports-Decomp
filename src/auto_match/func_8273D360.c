extern int fn_8273CE60();


void fn_8273D360(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if (param_3 < *(unsigned int *)(param_1 + 4)) {
    uVar1 = param_3;
    if (param_3 >= (unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 1)) goto LAB_8273d3b4;
  }
  else {
    if (param_3 < *(unsigned int *)(param_1 + 8)) goto LAB_8273d3b4;
    uVar1 = (param_3 >> 2) + param_3;
  }
  fn_8273CE60(param_1,param_2,uVar1);
LAB_8273d3b4:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

