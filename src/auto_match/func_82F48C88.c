unsigned __int64 fn_82F48C88(int param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = param_2 * 4 + *(int *)(param_1 + 0xc);
  *(unsigned int *)(param_1 + 0xc) = uVar1;
  if (uVar1 <= *(unsigned int *)(param_1 + 8)) {
    return 0;
  }
  *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 8);
  return 1;
}

