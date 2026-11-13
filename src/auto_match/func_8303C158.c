unsigned __int64 fn_8303C158(int param_1,int *param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)*param_2;
  *param_2 = (int)((unsigned int *)*param_2 + 1);
  *(unsigned int *)(param_1 + 0x1c) = uVar1;
  uVar1 = *(unsigned int *)*param_2;
  *param_2 = (int)((unsigned int *)*param_2 + 1);
  *(unsigned int *)(param_1 + 0x20) = uVar1;
  return 1;
}

