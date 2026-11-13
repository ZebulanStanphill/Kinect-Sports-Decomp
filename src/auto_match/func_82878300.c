extern int fn_8265CA20();
extern int fn_828782A8();


void fn_82878300(unsigned int *param_1)

{
  if (*param_1 != 0) {
    fn_828782A8(*param_1,param_1[1],param_1 + 3);
    fn_8265CA20(*param_1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

