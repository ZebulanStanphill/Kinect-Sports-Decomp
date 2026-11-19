void fn_8267AED0(int self,unsigned int *param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(*(int *)(self + 0xc) + 4);
  param_2[1] = 0;
  param_2[2] = 0;
  *(unsigned char *)(param_2 + 5) = 1;
  *param_2 = uVar1;
  return;
}

