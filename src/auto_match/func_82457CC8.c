extern int fn_8265CA20();


void fn_82457CC8(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  while (*(char *)((int)param_2 + 0x31) == '\0') {
    fn_82457CC8(param_1,param_2[2]);
    puVar1 = (unsigned int *)*param_2;
    fn_8265CA20(param_2);
    param_2 = puVar1;
  }
  return;
}

