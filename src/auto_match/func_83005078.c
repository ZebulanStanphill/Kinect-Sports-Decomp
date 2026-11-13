void fn_83005078(int param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 0x3d) = (param_2 & 1) << 5 | *(unsigned char *)(param_1 + 0x3d) & 0xdf;
  return;
}

