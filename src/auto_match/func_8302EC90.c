extern int fn_82F68B70();


unsigned __int64 fn_8302EC90(int param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  
  if ((param_2 == *(int *)(param_1 + 0xbc)) && (param_3 == *(int *)(param_1 + 0xb8))) {
    return 1;
  }
  *(int *)(param_1 + 0xbc) = param_2;
  *(int *)(param_1 + 0xb8) = param_3;
  uVar1 = fn_82F68B70(param_1 + 0xa8);
  return uVar1;
}

