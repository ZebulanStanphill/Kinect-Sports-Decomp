extern int fn_82232AE8();
extern int fn_8265CA20();
extern unsigned int lbl_8219732C;


unsigned int * fn_82240FD8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8219732C;
  fn_82232AE8();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

