extern int fn_82E4FE40();
extern unsigned int lbl_82154D40;


void fn_82E58F30(unsigned int *param_1)

{
  *param_1 = &lbl_82154D40;
  if (param_1[2] != 0) {
    fn_82E4FE40(param_1[2]);
  }
  param_1[2] = 0;
  return;
}

