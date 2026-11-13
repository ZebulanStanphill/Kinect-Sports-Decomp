unsigned char fn_82AF4968(unsigned int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  if (((*(unsigned int *)(param_1 + 8) & 0x40000000) != 0) && ((*(unsigned int *)(param_2 + 8) & 0x40000000) != 0))
  {
    return -((*(unsigned int *)(param_2 + 0x14) & 0xfffffff8) < (*(unsigned int *)(param_1 + 0x14) & 0xfffffff8)) &
           1;
  }
  while ((uVar1 = *(unsigned int *)((param_1 & 0xfffffffe) + 0x24), (uVar1 & 1) == 0 &&
         (param_1 = (uVar1 & 0xfffffffe) - 0x28, param_1 != 0))) {
    if (param_1 == param_2) {
      return 1;
    }
  }
  return 0;
}

