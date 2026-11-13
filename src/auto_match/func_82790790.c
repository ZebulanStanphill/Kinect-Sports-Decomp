extern void fn_8267C4C8(int);
extern void fn_8267C4F0(unsigned int);


unsigned int * fn_82790790(unsigned int *param_1,int *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (param_2[2] != 0) {
    fn_8267C4C8(param_2[2]);
  }
  if (param_1[2] != 0) {
    fn_8267C4F0(param_1[2]);
  }
  param_1[2] = param_2[2];
  return param_1;
}

