extern int fn_8265CA20();
extern int fn_82FF8528();
extern int fn_8300ECA0();
extern unsigned int lbl_8217BCF8;
extern unsigned int lbl_8217D040;


unsigned int * fn_82FFE388(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217BCF8;
  fn_8300ECA0(param_1 + 0x129);
  fn_82FF8528(param_1 + 1);
  *param_1 = &lbl_8217D040;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

