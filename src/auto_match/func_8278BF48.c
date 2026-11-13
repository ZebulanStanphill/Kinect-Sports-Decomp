extern int fn_8267C498();


int * fn_8278BF48(unsigned int *param_1,int *param_2)

{
  unsigned int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  if (*param_1 != 0) {
    fn_8267C498(*param_1);
  }
  *param_1 = iVar1;
  return param_1;
}

