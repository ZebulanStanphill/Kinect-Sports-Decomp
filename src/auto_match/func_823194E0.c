extern int fn_8265CA20();


void fn_823194E0(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  while (*(char *)((int)param_2 + 0x25) == '\0') {
    fn_823194E0(param_1,param_2[2]);
    puVar1 = (unsigned int *)*param_2;
    fn_8265CA20(param_2);
    param_2 = puVar1;
  }
  return;
}

