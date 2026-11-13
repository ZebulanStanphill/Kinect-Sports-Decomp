extern int fn_8265CA20();
extern int fn_82FA5190();
extern int fn_83008310();
extern unsigned int lbl_8217C7C0;
extern unsigned int lbl_831BC768;


unsigned int * fn_8302BFD0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217C7C0;
  if (param_1[6] != 0) {
    fn_82FA5190(lbl_831BC768, param_1[6]);
    param_1[6] = 0;
  }
  fn_83008310(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

