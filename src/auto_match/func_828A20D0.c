extern int fn_825089A0();


unsigned int * fn_828A20D0(unsigned int *param_1)

{
  int *piVar1;
  unsigned __int64 *puVar2;
  struct Pair { int a,b; } z;
  
  *param_1 = 0;
  piVar1 = (int *)fn_825089A0();
  puVar2 = (unsigned __int64 *)(*(int (**)())(*piVar1 + 0x24))(piVar1,8,1);
  z.a = 0; z.b = 0;
  *param_1 = puVar2;
  if (puVar2 != (unsigned __int64 *)0x0) {
    *(struct Pair *)puVar2 = z;
  }
  *(unsigned int **)*param_1 = param_1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}

