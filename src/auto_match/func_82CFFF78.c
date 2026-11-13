extern int fn_82CFD5A8();


unsigned int * fn_82CFFF78(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar2 = fn_82CFD5A8(param_2[1]);
  uVar1 = *param_2;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return param_1;
}

