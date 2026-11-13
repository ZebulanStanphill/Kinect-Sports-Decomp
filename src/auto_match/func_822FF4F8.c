extern int fn_822FF888();
extern int fn_82359C18();
extern int fn_8265CA20();
extern int fn_8289D4C0();
extern unsigned int lbl_82197100;
extern unsigned int lbl_821AEC2C;


unsigned int * fn_822FF4F8(unsigned int *param_1,unsigned int param_2)

{
  param_1[0xc] = &lbl_82197100;
  fn_8289D4C0(param_1 + 0xc);
  *param_1 = &lbl_821AEC2C;
  fn_82359C18(param_1 + 6);
  fn_822FF888(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

