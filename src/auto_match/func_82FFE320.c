extern int fn_8265CA20();
extern int fn_82FF9188();
extern unsigned int lbl_8217BCF4;
extern unsigned int lbl_8217D040;


unsigned int * fn_82FFE320(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217BCF4;
  fn_82FF9188();
  *param_1 = &lbl_8217D040;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

