extern int fn_82F529D0();
extern unsigned int lbl_82165B70;


unsigned int * fn_82F52D78(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = param_2;
  param_1[2] = 0;
  *param_1 = &lbl_82165B70;
  fn_82F529D0();
  return param_1;
}

