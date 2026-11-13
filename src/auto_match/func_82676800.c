extern int fn_82676770();


void fn_82676800(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if (param_3 < *(unsigned int *)(param_1 + 4)) {
    uVar1 = param_3;
    if (param_3 >= (unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 1)) goto LAB_82676854;
  }
  else {
    if (param_3 < *(unsigned int *)(param_1 + 8)) goto LAB_82676854;
    uVar1 = (param_3 >> 2) + param_3;
  }
  fn_82676770(param_1,param_2,uVar1);
LAB_82676854:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

