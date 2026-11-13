extern int fn_8265CA20();
extern int fn_82FA5190();
extern unsigned int lbl_8217BB44;
extern unsigned int lbl_831BC768;


unsigned int * fn_82FF2330(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217BB44;
  if (param_1[1] != 0) {
    fn_82FA5190(lbl_831BC768,param_1[1]);
    param_1[1] = 0;
    *(unsigned short *)(param_1 + 2) = 0;
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

