void fn_82F51408(int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)*param_1;
  if (param_2 != puVar1) {
    if (puVar1 != (unsigned int *)0x0) {
      (*(int (**)())*puVar1)(puVar1,1);
    }
    *param_1 = (int)param_2;
  }
  return;
}

