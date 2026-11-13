extern int fn_824248C8();
extern int fn_8265CA20();
extern unsigned int lbl_821B85D0;
extern unsigned int lbl_821B8B38;


unsigned int * fn_82428140(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B8B38;
  fn_824248C8(param_1 + 3);
  *param_1 = &lbl_821B85D0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

