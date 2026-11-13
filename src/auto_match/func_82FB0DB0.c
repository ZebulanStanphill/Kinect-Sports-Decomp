extern int fn_82FA5190();
extern int fn_82FB0D28();
extern int fn_82FF3F80();
extern unsigned int lbl_8216D2D0;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_831BC768;


void fn_82FB0DB0(unsigned int *param_1)

{
  *param_1 = &lbl_8216D2D0;
  param_1[7] = &lbl_8217C940;
  fn_82FB0D28();
  if (param_1[0x22] != 0) {
    param_1[0x23] = param_1[0x22];
    fn_82FA5190(lbl_831BC768,param_1[0x22]);
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x24] = 0;
  }
  if (param_1[0x26] != 0) {
    param_1[0x27] = param_1[0x26];
    fn_82FA5190(lbl_831BC768,param_1[0x26]);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
  }
  fn_82FF3F80(param_1);
  return;
}

