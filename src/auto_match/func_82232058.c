extern int fn_8223BC88();
extern int fn_8265CA20();
extern unsigned int lbl_82196A34;


unsigned int * fn_82232058(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82196A34;
  fn_8223BC88();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

