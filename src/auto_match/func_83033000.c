void fn_83033000(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x80) = param_2;
  *(unsigned int *)(param_1 + 0x84) = param_3;
  *(unsigned char *)(param_1 + 0x90) = 0;
  return;
}

