extern int fn_829E7640();
extern int fn_829E8B10();
extern int fn_829EC538();
extern unsigned int lbl_820798C0;
extern unsigned int lbl_820798D8;


void fn_829E78C0(unsigned int *param_1)

{
  *param_1 = &lbl_820798D8;
  fn_829E7640(param_1 + 1);
  fn_829EC538(param_1 + 0x12);
  fn_829E8B10(param_1 + 5);
  *param_1 = &lbl_820798C0;
  return;
}

