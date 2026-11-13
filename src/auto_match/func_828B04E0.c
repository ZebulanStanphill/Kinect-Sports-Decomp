extern void fn_8265CA20(void *);
extern unsigned int lbl_82024D24;


unsigned int * fn_828B04E0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82024D24;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

