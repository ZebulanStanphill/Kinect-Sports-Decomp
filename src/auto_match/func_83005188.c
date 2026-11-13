void fn_83005188(int param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 0x3d) = (param_2 & 1) << 4 | *(unsigned char *)(param_1 + 0x3d) & 0xef;
  return;
}

