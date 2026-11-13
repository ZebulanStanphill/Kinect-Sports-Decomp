extern int fn_82676CE8();


void fn_8267A7B0(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if (param_3 < *(unsigned int *)(param_1 + 4)) {
    uVar1 = param_3;
    if (param_3 >= (unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 1)) goto LAB_8267a804;
  }
  else {
    if (param_3 < *(unsigned int *)(param_1 + 8)) goto LAB_8267a804;
    uVar1 = (param_3 >> 2) + param_3;
  }
  fn_82676CE8(param_1,param_2,uVar1);
LAB_8267a804:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

