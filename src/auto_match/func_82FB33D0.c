extern int fn_8265CA20();
extern int fn_82FB2BD0();
extern int fn_82FB6790();
extern int fn_82FB7DB8();
extern unsigned int lbl_8216D5B0;
extern unsigned int lbl_8217C940;


unsigned int * fn_82FB33D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8216D5B0;
  param_1[7] = &lbl_8217C940;
  fn_82FB2BD0();
  fn_82FB7DB8(param_1 + 0x2b);
  fn_82FB6790(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

