void fn_828192F0(int param_1,short *param_2,short param_3)

{
  if (*param_2 != -1) {
    *(short *)(*param_2 * 0x40 + param_1 + 0x32) = param_3;
  }
  param_1 = param_3 * 0x40 + param_1;
  *(short *)(param_1 + 0x30) = *param_2;
  *(unsigned short *)(param_1 + 0x32) = 0xffff;
  *param_2 = param_3;
  return;
}

