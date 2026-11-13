extern int fn_8265CA20();
extern int fn_8306AB80();
extern unsigned int lbl_8217E8A8;


unsigned int * fn_830664A0(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_8217E8A8;
  if (param_1[3] != 0) {
    fn_8306AB80(param_1[3],param_1);
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

