extern int fn_82A1E6A0();


unsigned int * fn_82813350(unsigned int *param_1)

{
  unsigned int uVar1;
  
  *param_1 = 0;
  RtlInitializeCriticalSectionAndSpinCount(param_1 + 1);
  uVar1 = fn_82A1E6A0(0,1,1,0);
  param_1[8] = uVar1;
  return param_1;
}

