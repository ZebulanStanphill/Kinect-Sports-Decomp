void fn_82822278(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)*param_1;
  while (puVar1 = puVar2, puVar1 != (unsigned int *)0x0) {
    param_1 = puVar1;
    puVar2 = (unsigned int *)*puVar1;
  }
  *param_2 = param_1;
  return;
}

