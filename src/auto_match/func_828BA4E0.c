extern int fn_8265CA20();
extern void fn_8265CAA0(unsigned int);
extern unsigned int lbl_82025404;


unsigned int * fn_828BA4E0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_82025404;
  if (((((int *)param_1)[6] == 4) || (((int *)param_1)[6] == 6)) && (param_1[5] != 0)) {
    fn_8265CAA0(param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

