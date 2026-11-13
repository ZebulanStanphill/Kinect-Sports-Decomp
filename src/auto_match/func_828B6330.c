extern int fn_828B6A10();


int * fn_828B6330(int *param_1,int *param_2)

{
  unsigned int iVar1;
  
  *param_1 = 0;
  iVar1 = *param_2;
  if (iVar1 != 0) {
    *param_1 = iVar1;
    fn_828B6A10(iVar1,param_1);
  }
  return param_1;
}

