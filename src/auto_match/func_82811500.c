void fn_82811500(int param_1,unsigned int param_2)

{
  *(unsigned char *)((param_2 >> 3) + param_1) =
       *(unsigned char *)((param_2 >> 3) + param_1) & ~(unsigned char)(0x80 >> (param_2 & 7));
  return;
}

