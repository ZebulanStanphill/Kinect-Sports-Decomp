extern int fn_8265CA20();
extern int fn_82F53B68();
extern unsigned int lbl_82165B14;


unsigned int * fn_82F50D30(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82165B14;
  fn_82F53B68();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

