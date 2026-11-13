extern int fn_8265CA20();
extern int fn_8265CAA0();
extern int fn_827F38B0();
extern int fn_827F38B8();
extern unsigned int lbl_821CAA48;


unsigned int * fn_8260B200(unsigned int *param_1,int param_2)

{
  *param_1 = &lbl_821CAA48;
  if (param_1[0x2f] != 0) {
    fn_8265CAA0(param_1[0x2f]);
  }
  fn_827F38B0(param_1 + 8);
  fn_827F38B8(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

