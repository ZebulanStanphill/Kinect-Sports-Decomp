void fn_8303E4C0(int param_1,unsigned int param_2,unsigned char param_3)

{
  *(unsigned char *)((param_2 & 0xffff) * 8 + *(int *)(param_1 + 4) + 4) = param_3;
  return;
}

