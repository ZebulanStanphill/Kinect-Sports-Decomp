extern int fn_8296CF68();


unsigned int fn_8294B7A8(int param_1)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0x13c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x140) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x144) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x148) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x14c) = 0xffffffff;
  *(unsigned int *)(param_1 + 0x150) = 0;
  *(unsigned int *)(param_1 + 0x154) = 0;
  uVar1 = fn_8296CF68();
  return (int)uVar1 >> 0x1f & uVar1;
}

