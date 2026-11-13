extern int fn_8268B1F0();


unsigned int *
fn_8268C4C0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  param_1[5] = param_4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x200;
  *(unsigned char *)(param_1 + 4) = 0;
  fn_8268B1F0();
  return param_1;
}

