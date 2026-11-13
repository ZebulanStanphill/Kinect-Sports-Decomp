extern int fn_82A59BF0();
extern int fn_82A5A300();
extern unsigned int lbl_8208DE60;


void fn_82A5A4D8(int *param_1)

{
  *param_1 = &lbl_8208DE60;
  if (param_1[1] != 0) {
    fn_82A59BF0();
    fn_82A5A300(param_1[8]);
    fn_82A5A300(param_1[7]);
    fn_82A5A300(param_1[6]);
    fn_82A5A300(param_1[5]);
  }
  return;
}

