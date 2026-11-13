unsigned int fn_823AA2E8(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  
  uVar1 = *(int *)(param_1 + 0x28) - 1;
  if (((param_2 < uVar1) || (param_3 < uVar1)) &&
     (*(unsigned int *)(param_1 + 0x18) < *(unsigned int *)(param_1 + 0x1c))) {
    return *(unsigned int *)(param_1 + 0x10);
  }
  return (unsigned int)(*(int *)(param_1 + 0x10) == 0);
}

