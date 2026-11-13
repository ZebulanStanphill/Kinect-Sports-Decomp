extern int fn_82BE56C0();
extern int fn_82BE5230();
extern unsigned int lbl_820EBE90;


unsigned int * fn_82BFB028(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_820EBE90;
  fn_82BE5230();
  if ((param_2 & 1) != 0) {
    fn_82BE56C0(param_1);
  }
  return param_1;
}

