extern void fn_8267C4C8(int);
extern void fn_82687270(unsigned int);


int * fn_826F3080(unsigned int *param_1,int *param_2)

{
  *param_1 = 0;
  if (*param_2 != 0) {
    fn_8267C4C8(*param_2);
    if (*param_1 != 0) {
      fn_82687270(*param_1);
    }
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return param_1;
}

