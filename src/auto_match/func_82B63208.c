void fn_82B63208(short *param_1,unsigned short param_2,unsigned short param_3)

{
  param_2 = param_2 & 0xff;
  param_3 = param_3 & 0xff;
  param_1[2] = param_2 * 0xd8 + param_3 * 0x28;
  *param_1 = param_2 * 0x101;
  param_1[1] = param_3 * 0x101;
  param_1[3] = param_3 * 0x48 + param_2 * 0xb8;
  param_1[4] = param_3 * 0x70 + param_2 * 0x90;
  param_1[5] = param_3 * 0x90 + param_2 * 0x70;
  param_1[6] = param_3 * 0xb8 + param_2 * 0x48;
  param_1[7] = param_3 * 0xd8 + param_2 * 0x28;
  return;
}

