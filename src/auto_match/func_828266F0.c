void fn_828266F0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x24);
  *param_2 = iVar1;
  if (*(unsigned int *)(param_1 + 0x3e4) == 0) {
    return;
  }
  *param_2 = iVar1 + -1;
  return;
}

