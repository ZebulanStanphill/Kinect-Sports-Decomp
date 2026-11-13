extern int fn_8265CA20();


void fn_828A2920(unsigned __int64 param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  
  cVar1 = *(char *)((int)param_2 + 0x51);
  while (cVar1 == '\0') {
    fn_828A2920(param_1,param_2[2]);
    piVar2 = (int *)*param_2;
    fn_8265CA20(param_2);
    param_2 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x51);
  }
  return;
}

