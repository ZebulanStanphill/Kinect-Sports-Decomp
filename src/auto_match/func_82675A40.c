extern int fn_8268CC00();
extern int fn_8268D758();


unsigned int * fn_82675A40(unsigned int *param_1)

{
  fn_8268D758(param_1 + 3);
  fn_8268CC00(param_1 + 0xc);
  fn_8268CC00(param_1 + 0x15);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xb] = 0;
  param_1[0x14] = 0;
  return param_1;
}

