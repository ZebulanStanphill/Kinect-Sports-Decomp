extern int fn_824C41E8();
extern int fn_8265CA20();
extern unsigned int lbl_821C097C;


unsigned int * fn_824C4120(unsigned int *param_1,unsigned int param_2)

{
  fn_824C41E8(param_1 + 4);
  *param_1 = &lbl_821C097C;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

