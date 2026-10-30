int fn_82CD51E8(int param_1, int param_2, int *param_3, int *param_4)
{
  *param_3 = 0;
  *param_4 = 0;
  if (param_1 == 3 && param_2 == 1) { *param_3 = 2; *param_4 = 2; return 0x1f; }
  if (param_1 == 1 && param_2 == 3) { *param_3 = 2; *param_4 = 2; return 0xd; }
  if (param_1 == 5 && param_2 == 3) { *param_3 = 4; *param_4 = 3; return 0x35; }
  if (param_1 == 3 && param_2 == 5) { *param_3 = 4; *param_4 = 3; return 0x23; }
  if (param_1 == 7 && param_2 == 1) { *param_3 = 4; *param_4 = 3; return 0x47; }
  if (param_1 == 1 && param_2 == 7) { *param_3 = 4; *param_4 = 3; return 0x11; }
  return 0;
}
