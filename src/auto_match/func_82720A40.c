extern int fn_8265CA20();
extern unsigned int lbl_82010454;


unsigned int * fn_82720A40(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82010454;
  if ((param_2 & 1) != 0) {
    fn_8265CA20();
  }
  return param_1;
}

