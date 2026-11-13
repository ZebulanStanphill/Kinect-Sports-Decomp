extern int fn_82881DF0();
extern int fn_828823E0();


void fn_828A2010(unsigned __int64 param_1)

{
  unsigned int *piVar1;
  
  piVar1 = (int *)fn_82881DF0();
  if (*piVar1 != 0) {
    fn_828823E0(param_1,(unsigned __int64)*(unsigned int *)(*piVar1 + 0x8c) + 0x14);
  }
  return;
}

