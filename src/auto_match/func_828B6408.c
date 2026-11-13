extern int fn_828B6A10();


unsigned int * fn_828B6408(unsigned int *param_1,unsigned int param_2)

{
  *param_1 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    *param_1 = (int)param_2;
    fn_828B6A10(param_2,param_1);
  }
  return param_1;
}

