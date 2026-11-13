extern int fn_8223B688();


unsigned int * fn_822378A0(unsigned int *param_1,unsigned int *param_2)

{
  *param_1 = *param_2;
  fn_8223B688(param_1 + 1,param_2 + 1);
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  return param_1;
}

