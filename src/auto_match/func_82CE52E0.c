unsigned int * fn_82CE52E0(int *param_1,__int64 param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)(*(int (**)())(*param_1 + 4))(param_1,param_2 + 0x10);
  *puVar1 = param_1;
  puVar1[1] = (int)param_2;
  return puVar1 + 4;
}

