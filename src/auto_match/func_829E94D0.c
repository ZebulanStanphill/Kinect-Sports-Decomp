extern int fn_829E9000();
extern int fn_829E9460();
extern int fn_829EC3F8();
extern unsigned int lbl_82079ADC;


void fn_829E94D0(unsigned int *param_1)

{
  *param_1 = &lbl_82079ADC;
  fn_829E9000();
  if (param_1[8] != 0) {
    fn_829E9460(param_1[8],1);
    param_1[8] = 0;
  }
  fn_829EC3F8();
  return;
}

