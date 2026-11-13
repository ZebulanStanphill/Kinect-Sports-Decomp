extern int fn_8265CA20();
extern int fn_82A1E658();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217E188;


unsigned int * fn_830563D0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217E188;
  if (param_1[1] != 0) {
    fn_82A1E658(param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = &lbl_8217D040;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

