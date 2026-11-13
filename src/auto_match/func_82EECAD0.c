extern int fn_82D7E470();


void fn_82EECAD0(int param_1,int *param_2)

{
  int iVar1;
  
  param_1 = param_1 - *(int *)(param_1 + -4);
  iVar1 = fn_82D7E470(*(int *)(*(int *)(param_1 + -0x50) + 8) + param_1 + -0x50);
  if (-1 < iVar1) {
    *(int *)(param_1 + -0x4c) = *param_2;
    *param_2 = *param_2 + 5;
  }
  return;
}

