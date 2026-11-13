void fn_828222C8(int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  for (; *param_1 != 0; param_1 = (int *)*param_1) {
  }
  puVar1 = (unsigned int *)param_1[1];
  param_1[1] = (int)param_2;
  *param_2 = param_1;
  param_2[1] = puVar1;
  if (puVar1 == (unsigned int *)0x0) {
    return;
  }
  *puVar1 = param_2;
  return;
}

