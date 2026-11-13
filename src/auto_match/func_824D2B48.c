extern int fn_823B78E0();
extern int fn_8265CA20();
extern unsigned int lbl_821B5BEC;


unsigned int * fn_824D2B48(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = &lbl_821B5BEC;
  if (param_1[1] != 0) {
    fn_823B78E0(param_1[1],param_1);
  }
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

