extern int fn_82FA5190();
extern int fn_82FAFDD8();
extern int fn_82FB6710();
extern unsigned int lbl_8216D858;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_831BC768;


void fn_82FB6790(unsigned int *param_1)

{
  *param_1 = &lbl_8216D858;
  param_1[7] = &lbl_8217C940;
  fn_82FB6710();
  if (param_1[0x28] != 0) {
    param_1[0x29] = param_1[0x28];
    fn_82FA5190(lbl_831BC768, param_1[0x28]);
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
  }
  fn_82FAFDD8(param_1);
  return;
}

