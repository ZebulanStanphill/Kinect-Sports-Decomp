extern void fn_8265CA20(void *);
extern unsigned int lbl_82027158;


unsigned int * fn_828E26A8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82027158;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

