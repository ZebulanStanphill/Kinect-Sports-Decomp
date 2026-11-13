void fn_829E7640(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)*param_1;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    *param_1 = 0;
  }
  return;
}

