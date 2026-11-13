extern int fn_8265CA20();
extern unsigned int lbl_821CAD1C;


unsigned int * fn_8261A200(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = 0;
  *param_1 = &lbl_821CAD1C;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20();
  }
  return param_1;
}

