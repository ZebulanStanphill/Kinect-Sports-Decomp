extern int fn_82522ED8();
extern int fn_8265CA20();
extern unsigned int lbl_821BE9C0;


unsigned int * fn_82489A40(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821BE9C0;
  fn_82522ED8(param_1[3]);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

