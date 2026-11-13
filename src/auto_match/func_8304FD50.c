extern int fn_83055F08();
extern unsigned int lbl_8217DDF0;


unsigned int * fn_8304FD50(unsigned int *param_1)

{
  fn_83055F08();
  param_1[4] = 0;
  *param_1 = &lbl_8217DDF0;
  RtlInitializeCriticalSection(param_1 + 0xe);
  param_1[0x19] = 0;
  param_1[0x1d] = param_1[0x1d] & 0xe0ffffff;
  return param_1;
}

