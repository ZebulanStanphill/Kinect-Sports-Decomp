extern unsigned fn_82FAD0A8(unsigned);


int * fn_82FA9648(int *param_1,unsigned int param_2,int *param_3)

{
  unsigned iVar1;
  
  iVar1 = (*(int (**)())(*param_3 + 0x18))(param_3);
  *param_1 = iVar1;
  if (iVar1 != 0) { iVar1 = fn_82FAD0A8(iVar1); } else { iVar1 = 0; }
  param_1[1] = iVar1;
  return param_1;
}

