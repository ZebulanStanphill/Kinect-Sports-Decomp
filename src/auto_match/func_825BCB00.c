extern int fn_8252DB70();
extern int fn_8265CA20();
extern unsigned int lbl_821C8C58;


unsigned int * fn_825BCB00(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821C8C58;
  fn_8252DB70();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

