extern int fn_8265CA20();
extern int fn_82897D88();
extern unsigned int lbl_82197534;


unsigned int * fn_82243F30(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82197534;
  fn_82897D88();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

