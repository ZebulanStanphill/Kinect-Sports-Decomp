extern int fn_82F68B7C();


unsigned __int64 fn_82FEF648(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  if (param_2 == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    return 0;
  }
  uVar1 = fn_82F68B7C(*(int *)(param_1 + 0x68),param_2,0,0);
  return uVar1;
}

