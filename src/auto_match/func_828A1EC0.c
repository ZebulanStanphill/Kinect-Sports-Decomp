extern void fn_8265CA20(void *);
extern unsigned int lbl_82023C0C;


unsigned int * fn_828A1EC0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82023C0C;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

