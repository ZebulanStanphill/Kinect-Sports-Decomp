extern int fn_82FA5190();
extern unsigned int lbl_8217C330;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC768;


void fn_8300CF70(unsigned int *param_1)

{
  *param_1 = &lbl_8217C330;
  if (param_1[9] != 0) {
    fn_82FA5190(lbl_831BC768,param_1[9]);
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    fn_82FA5190(lbl_831BC768,param_1[6]);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
  }
  *param_1 = &lbl_8217D040;
  return;
}

