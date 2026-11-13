extern int fn_8269D1E8();


unsigned int * fn_8269F140(unsigned int *param_1,int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)*param_2;
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  puVar1 = (unsigned int *)param_2[1];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  fn_8269D1E8(param_1 + 4,*puVar1,puVar1[1]);
  return param_1;
}

