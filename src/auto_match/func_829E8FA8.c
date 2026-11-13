extern int fn_829EC3B0();
extern unsigned int lbl_82079ADC;


unsigned int * fn_829E8FA8(unsigned int *param_1)

{
  *(unsigned char *)(param_1 + 2) = 0;
  *param_1 = &lbl_82079ADC;
  param_1[3] = 0;
  param_1[4] = 0;
  *(unsigned __int64 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  fn_829EC3B0();
  return param_1;
}

