extern int fn_822BD338();


void fn_82455100(unsigned int *param_1)

{
  int *piVar1;
  unsigned char cVar2;
  
  cVar2 = fn_822BD338((unsigned __int64)*param_1 + 0x38,"coach");
  if (cVar2 != '\0') {
    piVar1 = (int *)*param_1;
    *(unsigned int *)(*piVar1 + 0x1d0) = 1;
    piVar1[6] = 1;
  }
  return;
}

