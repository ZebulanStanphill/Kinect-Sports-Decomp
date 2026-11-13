void fn_830501B8(int param_1,unsigned int *param_2)

{
  *param_2 = *(unsigned int *)(*(int *)(param_1 + -0x18) + 0x90);
  param_2[1] = *(unsigned int *)(param_1 + -0x14);
  *(unsigned __int64 *)(param_2 + 2) = *(unsigned __int64 *)(param_1 + -0x60);
  *(unsigned char *)(param_2 + 4) = (unsigned char)((unsigned int)*(unsigned int *)(param_1 + -4) >> 0x1a) & 1;
  return;
}

