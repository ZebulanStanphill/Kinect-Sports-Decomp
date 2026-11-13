extern int fn_82E4FE40();
extern unsigned int lbl_8215ED00;


void fn_82E6DF58(unsigned int *param_1)

{
  *param_1 = &lbl_8215ED00;
  if ((int *)param_1[2] != (int *)0x0) {
    (*(int (**)())(*(int *)param_1[2] + 8))(param_1[2]);
    param_1[2] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_82E4FE40(param_1[0xe]);
  }
  param_1[0xe] = 0;
  return;
}

