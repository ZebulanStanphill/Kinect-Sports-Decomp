void fn_830051C0(int param_1,unsigned char param_2)

{
  *(unsigned char *)(param_1 + 0x3d) = (param_2 & 1) << 3 | *(unsigned char *)(param_1 + 0x3d) & 0xf7;
  return;
}

