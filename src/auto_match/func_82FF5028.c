extern int fn_82FF5200();


unsigned __int64 fn_82FF5028(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4)

{
  int *piVar1;
  
  RtlEnterCriticalSection(param_1 + 0x88);
  piVar1 = (int *)fn_82FF5200(param_1 + 4,param_2);
  if (piVar1 != (int *)0x0) {
    *piVar1 = *piVar1 + 1;
    *param_4 = piVar1[10];
  }
  RtlLeaveCriticalSection(param_1 + 0x88);
  return 1;
}

