extern int fn_82FA5190();
extern int fn_83008310();
extern int fn_83021680();
extern unsigned int lbl_8217C594;
extern unsigned int lbl_831BC768;


void fn_830216F0(unsigned int *param_1)

{
  *param_1 = &lbl_8217C594;
  fn_83021680();
  if (param_1[4] != 0) {
    param_1[5] = param_1[4];
    fn_82FA5190(lbl_831BC768, param_1[4]);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  fn_83008310(param_1);
  return;
}

