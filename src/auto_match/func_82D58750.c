extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82D58750(unsigned int *param_1,unsigned int param_2,int param_3,int param_4)

{
  fn_82CE4040(param_2);
  fn_82CE4118(param_1[param_4 * 8 + param_3 + 3]);
  param_1[param_4 * 8 + param_3 + 3] = param_2;
  fn_82CE4040(param_2);
  fn_82CE4118(param_1[param_3 * 8 + param_4 + 3]);
  param_1[param_3 * 8 + param_4 + 3] = param_2;
}
