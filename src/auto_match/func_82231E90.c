extern int fn_82231CD8();
extern int fn_8265CA20();
extern unsigned int lbl_82196A14;


unsigned int * fn_82231E90(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82196A14;
  fn_82231CD8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

