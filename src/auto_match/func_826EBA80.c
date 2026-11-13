extern int fn_82768EA0();


void fn_826EBA80(int param_1,int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  if (param_3 < *(unsigned int *)(param_1 + 4)) {
    uVar1 = param_3;
    if (param_3 >= (unsigned __int64)(*(unsigned int *)(param_1 + 8) >> 1)) goto LAB_826ebad4;
  }
  else {
    if (param_3 < *(unsigned int *)(param_1 + 8)) goto LAB_826ebad4;
    uVar1 = (param_3 >> 2) + param_3;
  }
  fn_82768EA0(param_1,param_2,uVar1);
LAB_826ebad4:
  *(int *)(param_1 + 4) = (int)param_3;
  return;
}

