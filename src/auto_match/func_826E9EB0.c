extern int fn_8268C750();
extern int fn_826E9740();
extern unsigned int lbl_8200D790;


unsigned int * fn_826E9EB0(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  param_1[1] = 1;
  *param_1 = &lbl_8200D790;
  fn_8268C750(param_1 + 2);
  param_1[5] = param_3;
  fn_826E9740(param_1);
  return param_1;
}

