extern int fn_8265CA20();


void fn_823E14E8(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  while (*(char *)((int)param_2 + 0xa5) == '\0') {
    fn_823E14E8(param_1,param_2[2]);
    puVar1 = (unsigned int *)*param_2;
    fn_8265CA20(param_2);
    param_2 = puVar1;
  }
  return;
}

