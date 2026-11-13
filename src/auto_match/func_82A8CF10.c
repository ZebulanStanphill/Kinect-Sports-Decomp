extern unsigned int lbl_820D1768;


unsigned int * fn_82A8CF10(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  
  param_1[1] = param_2;
  *param_1 = &lbl_820D1768;
  uVar1 = (*(int (**)())(*param_2 + 8))(param_2);
  param_1[2] = uVar1;
  return param_1;
}

