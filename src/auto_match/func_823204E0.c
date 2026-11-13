extern int fn_8231FF60();
extern int fn_8265CA20();
extern unsigned int lbl_821AFA70;


unsigned int * fn_823204E0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821AFA70;
  fn_8231FF60();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

