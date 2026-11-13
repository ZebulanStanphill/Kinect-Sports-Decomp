extern unsigned int lbl_8315C720;


unsigned __int64 fn_829E3B70(int *param_1)

{
  if (*param_1 != 0) {
    return 0xffffffff8000ffff;
  }
  param_1[2] = 0;
  param_1[1] = (int)&lbl_8315C720;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  param_1[3] = 0;
  *param_1 = 1;
  return 0;
}

