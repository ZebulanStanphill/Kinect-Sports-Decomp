extern void fn_8265CA20(void *);
extern unsigned int lbl_8216CCD0;


unsigned int * fn_82FAC5A0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8216CCD0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

