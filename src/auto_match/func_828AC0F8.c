extern void fn_8265CA20(void *);
extern unsigned int lbl_82197048;


unsigned int * fn_828AC0F8(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82197048;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

