void fn_82862308(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0x54) + *(int *)(param_2 + 8));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return;
}

