extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;


unsigned __int64 fn_82930478(unsigned int param_1,unsigned __int64 param_2)

{
  int *piVar1;
  unsigned int uStack00000014;
  
  uStack00000014 = param_1;
  if (param_1 == 0) {
    return param_2;
  }
  piVar1 = (int *)&stack0x00000014;
  do {
    piVar1 = (int *)(*piVar1 + 0xc);
  } while (*piVar1 != 0);
  *piVar1 = (int)param_2;
  return (unsigned __int64)param_1;
}

