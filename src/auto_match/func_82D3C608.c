int fn_82D3C608(int param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  *puVar1 = in_register_000100d0;
  puVar1[1] = in_register_000100d4;
  puVar1[2] = in_register_000100d8;
  puVar1[3] = in_vr13;
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_1 + 0x10);
  return param_2;
}

