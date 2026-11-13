extern int fn_82E2D9C0();
extern int fn_82E4FE40();


unsigned __int64 fn_82EF16C8(unsigned int *param_1)

{
  fn_82E2D9C0(param_1 + 4);
  if ((param_1[1] & 1U) == 0) {
    if (*param_1 != 0) {
      fn_82E4FE40(*param_1);
      *param_1 = 0;
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = param_1[1] & 1;
  return 0;
}

