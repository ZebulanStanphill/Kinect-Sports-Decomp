extern void *fn_825B1970(unsigned);


unsigned int * fn_82F54610(unsigned int *param_1)

{
  int *piVar1;
  unsigned __int64 *puVar2;
  struct Pair { int a,b; } z;
  
  *param_1 = 0;
  puVar2 = (unsigned __int64 *)fn_825B1970(8);
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

