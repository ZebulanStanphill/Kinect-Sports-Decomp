extern int fn_8265CA20();
extern unsigned int lbl_82005928;


unsigned int * fn_82683D28(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82005928;
  if ((param_2 & 1) != 0) {
    fn_8265CA20();
  }
  return param_1;
}

