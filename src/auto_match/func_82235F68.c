extern int fn_8265CA20();
extern int fn_82897D88();
extern unsigned int lbl_82196D88;


unsigned int * fn_82235F68(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82196D88;
  fn_82897D88();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

