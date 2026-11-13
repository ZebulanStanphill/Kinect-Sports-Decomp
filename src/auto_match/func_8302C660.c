void fn_8302C660(int param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 0x11f) = (param_2 & 1) << 2 | *(unsigned char *)(param_1 + 0x11f) & 0xfb;
  return;
}

