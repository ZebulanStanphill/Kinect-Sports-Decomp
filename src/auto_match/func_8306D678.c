void fn_8306D678(int param_1)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned char in_vs36 [16];
  unsigned char in_vs43 [16];
  unsigned int in_register_000103f0;
  unsigned int in_register_000103f4;
  unsigned int in_register_000103f8;
  unsigned int in_vr63;
  
  altv207_13(in_vs36,in_vs43);
  puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
  *puVar1 = in_register_000103f0;
  puVar1[1] = in_register_000103f4;
  puVar1[2] = in_register_000103f8;
  puVar1[3] = in_vr63;
  return;
}

