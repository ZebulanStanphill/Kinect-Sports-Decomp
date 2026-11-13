extern int fn_82FA5190();
extern unsigned int lbl_831BC768;


void fn_8300ECA0(unsigned int *param_1)

{
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    fn_82FA5190(lbl_831BC768, *param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

