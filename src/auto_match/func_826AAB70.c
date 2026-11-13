extern int fn_826AAB20();
extern int fn_827B5EA8();


void fn_826AAB70(unsigned int *param_1)

{
  fn_826AAB20();
  if (((*(unsigned char *)(param_1 + 6) & 1) == 0) && (*param_1 == 0)) {
    fn_827B5EA8(param_1);
  }
  param_1[9] = 0;
  param_1[8] = param_1[0xf];
  return;
}

