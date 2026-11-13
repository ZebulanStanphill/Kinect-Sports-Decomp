extern int memcpy();


void fn_8285A248(int param_1,int param_2,int param_3)

{
  param_2 = *(int *)(param_1 + 0x50) + param_2;
  param_3 = *(int *)(param_1 + 0x50) + param_3;
  memcpy(param_3 + 0x10,param_2 + 0x10,0x40);
  *(unsigned int *)(param_3 + 0x50) = *(unsigned int *)(param_2 + 0x50);
  return;
}

