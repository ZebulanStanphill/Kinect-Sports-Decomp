extern int fn_82406338();
extern int fn_8265CA20();
extern unsigned int lbl_821B7DE8;


unsigned int * fn_82406660(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B7DE8;
  fn_82406338();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

