extern int fn_8265CA20();
extern int fn_82FA5190();
extern int fn_83008310();
extern int fn_8300E470();
extern unsigned int lbl_8217C564;
extern unsigned int lbl_831BC768;


unsigned int * fn_8301EA88(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217C564;
  if (param_1[4] != 0) {
    fn_82FA5190(lbl_831BC768, param_1[4]);
  }
  fn_8300E470(param_1 + 5);
  fn_83008310(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

