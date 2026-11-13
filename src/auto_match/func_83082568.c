extern int fn_82CE4040();


int * fn_83082568(int *param_1,int *param_2)

{
  unsigned int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    fn_82CE4040(iVar1);
  }
  *param_1 = iVar1;
  return param_1;
}

