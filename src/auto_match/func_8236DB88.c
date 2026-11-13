extern int fn_8236DD08();
extern int fn_8265CA20();
extern unsigned int lbl_821B30C8;


unsigned int * fn_8236DB88(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B30C8;
  fn_8236DD08();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

