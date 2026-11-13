unsigned __int64 fn_823AA408(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  uVar1 = *(int *)(param_1 + 0x28) - 1;
  if (((param_2 < uVar1) || (param_2 - param_3 < *(int *)(param_1 + 0x2c) - 1U)) &&
     ((param_3 < uVar1 || (param_3 - param_2 < *(int *)(param_1 + 0x2c) - 1U)))) {
    return 0;
  }
  return 1;
}

