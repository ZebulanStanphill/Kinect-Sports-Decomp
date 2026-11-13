extern int fn_8265CA20();


void fn_8243DD58(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  while (*(char *)((int)param_2 + 0x15) == '\0') {
    fn_8243DD58(param_1,param_2[2]);
    puVar1 = (unsigned int *)*param_2;
    fn_8265CA20(param_2);
    param_2 = puVar1;
  }
  return;
}

