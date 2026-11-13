extern int fn_8278BFA8();
extern int fn_8278CD58();


unsigned int * fn_82793430(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  fn_8278CD58(param_1 + 4,param_2 + 4,0);
  fn_8278BFA8(param_1 + 0xf,param_2 + 0xf);
  return param_1;
}

