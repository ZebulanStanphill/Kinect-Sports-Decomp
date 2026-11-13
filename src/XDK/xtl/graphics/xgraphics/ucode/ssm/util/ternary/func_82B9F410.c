extern int fn_82B6B128();


void fn_82B9F410(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82B6B128(*(unsigned int *)(param_1 + 0x10));
  *puVar1 = param_2;
  puVar1[4] = param_3;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  return;
}

