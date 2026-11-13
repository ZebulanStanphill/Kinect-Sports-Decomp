extern int fn_8267E780();


void fn_8267E828(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if (param_3 < *(unsigned int *)(param_1 + 4)) {
    uVar1 = param_3;
    if (param_3 >= (unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 1)) goto LAB_8267e87c;
  }
  else {
    if (param_3 < *(unsigned int *)(param_1 + 8)) goto LAB_8267e87c;
    uVar1 = (param_3 >> 2) + param_3;
  }
  fn_8267E780(param_1,param_2,uVar1);
LAB_8267e87c:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

