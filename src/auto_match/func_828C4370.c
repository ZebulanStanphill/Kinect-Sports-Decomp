void fn_828C4370(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(*(int *)(param_2 + 4) + 0xc);
  *(char *)(param_1 + 1) = '\x01' - (*(int *)(param_2 + 4) == 0);
  *param_1 = uVar1;
  return;
}

