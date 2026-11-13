extern int fn_82517978();


unsigned int * fn_828DE290(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  fn_82517978(param_1,*param_2,param_2[1],0);
  param_1[2] = 0;
  param_1[3] = 0;
  fn_82517978(param_1 + 2,*param_3,param_3[1],0);
  return param_1;
}

