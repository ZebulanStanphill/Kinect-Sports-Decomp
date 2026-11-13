extern int fn_82A1F198();
extern int fn_82C561E8();


unsigned __int64 fn_82C44E50(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    if (param_1[4] != 0) {
      RtlEnterCriticalSection();
    }
    uVar1 = param_1[1];
    param_1[1] = param_1[1] + (int)param_2;
    if ((unsigned int)param_1[1] <= (unsigned int)(param_1[2] + -1 + *param_1)) {
      param_1[1] = param_1[1] + 0x1000U & 0xfffff000;
      if (param_1[4] != 0) {
        RtlLeaveCriticalSection();
      }
      fn_82C561E8(param_1[3],(unsigned __int64)uVar1,0,0);
      return (unsigned __int64)uVar1;
    }
    param_1[1] = param_1[1] - (int)param_2;
    if (param_1[4] != 0) {
      RtlLeaveCriticalSection();
    }
  }
  uVar2 = fn_82A1F198(param_2,0xffffffffffffffff,0,0x20000004);
  fn_82C561E8(param_1[3],uVar2,0,0);
  return uVar2;
}

