extern int fn_82A1E658();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217E188;


void fn_83055C98(unsigned int *param_1)

{
  *param_1 = &lbl_8217E188;
  if (param_1[1] != 0) {
    fn_82A1E658(param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = &lbl_8217D040;
  return;
}

