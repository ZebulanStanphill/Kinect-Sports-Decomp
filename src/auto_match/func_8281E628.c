extern int fn_8280E418();


float * fn_8281E628(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  *param_1 = (float)param_2;
  param_1[1] = (float)param_3;
  param_1[2] = (float)param_4;
  param_1[3] = (float)param_5;
  fn_8280E418(param_1,param_1);
  return param_1;
}

