extern int fn_82FA5190();
extern int fn_82FF3F80();
extern int fn_83029008();
extern unsigned int lbl_8217C620;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_831BC768;


void fn_83029080(unsigned int *param_1)

{
  *param_1 = &lbl_8217C620;
  param_1[7] = &lbl_8217C940;
  fn_83029008(param_1);
  if (param_1[0x22] != 0) {
    param_1[0x23] = param_1[0x22];
    fn_82FA5190(lbl_831BC768,param_1[0x22]);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
  }
  fn_82FF3F80(param_1);
  return;
}

