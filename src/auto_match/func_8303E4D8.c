unsigned char fn_8303E4D8(int param_1,unsigned int param_2)

{
  return *(unsigned char *)((param_2 & 0xffff) * 8 + *(int *)(param_1 + 4) + 4);
}

