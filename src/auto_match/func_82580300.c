extern int fn_8265CA20();
extern unsigned int lbl_821C55A0;


unsigned int * fn_82580300(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821C55A0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20();
  }
  return param_1;
}

