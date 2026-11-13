extern int fn_83008328();
extern int fn_8300E460();
extern unsigned int lbl_8217C564;


unsigned int * fn_8301E780(unsigned int *param_1)

{
  fn_83008328();
  param_1[4] = 0;
  *param_1 = &lbl_8217C564;
  fn_8300E460(param_1 + 5);
  return param_1;
}

