extern int fn_8223B998();
extern int fn_8265CA20();
extern unsigned int lbl_82196A24;


unsigned int * fn_822320B0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82196A24;
  fn_8223B998();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

