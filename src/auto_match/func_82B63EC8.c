void fn_82B63EC8(int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[1];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  puVar1 = (unsigned int *)*param_1;
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  return;
}

