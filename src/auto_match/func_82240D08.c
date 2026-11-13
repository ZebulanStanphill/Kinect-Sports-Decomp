extern int fn_8265CA20();
extern int fn_82897F68();
extern unsigned int lbl_82197140;


void fn_82240D08(int *param_1)

{
  *param_1 = &lbl_82197140;
  if (param_1[1] == 7) {
    if (4 < (unsigned int)param_1[3]) {
      fn_8265CA20(param_1[2]);
    }
    param_1[2] = 0;
  }
  else if (param_1[1] == 8) {
    fn_82897F68(param_1 + 2,0);
  }
  return;
}

