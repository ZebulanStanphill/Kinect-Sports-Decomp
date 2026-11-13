extern int fn_82459C60();
extern int fn_8245CBE0();
extern float fn_82522FF0();


void fn_8245CB70(int param_1,int param_2)

{
  double dVar1;
  
  RtlEnterCriticalSection();
  *(unsigned int *)(param_1 + 0x6a4) = 0;
  *(unsigned int *)(param_1 + 0xc4) = 0;
  *(unsigned int *)(param_1 + 200) = 0;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xcc) = 0;
  fn_82459C60(param_1 + 0x40);
  fn_8245CBE0(param_1);
  if (param_2 != 0) {
    dVar1 = (double)fn_82522FF0();
    *(double *)(param_1 + 0x678) = dVar1 - *(double *)(param_1 + 0x670);
  }
  *(unsigned int *)(param_1 + 0x6a8) = 0;
  RtlLeaveCriticalSection(param_1);
  return;
}

