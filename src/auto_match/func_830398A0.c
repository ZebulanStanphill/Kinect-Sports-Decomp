extern int fn_8265CA20();
extern int fn_830386B0();
extern unsigned int lbl_8217D264;
extern unsigned int lbl_8217D2B0;
extern unsigned int lbl_8217D2B8;


unsigned int * fn_830398A0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217D2B8;
  param_1[1] = &lbl_8217D2B0;
  param_1[3] = &lbl_8217D264;
  fn_830386B0();
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

