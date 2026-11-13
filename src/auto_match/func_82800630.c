unsigned int fn_82800630(int *param_1,int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)((param_2 + 0xe) * 4 + *param_1);
  if (puVar1 != (unsigned int *)0x0) {
    return *puVar1;
  }
  return 0;
}

