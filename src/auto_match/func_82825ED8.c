extern int fn_8265CA20();


int * fn_82825ED8(unsigned int *param_1,unsigned int param_2)

{
  if (*param_1 != 0) {
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

