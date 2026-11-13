extern __int64 fn_82E2AD40();


unsigned __int64 fn_82E2BB58(__int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(param_1 + 8);
  uVar1 = fn_82E2AD40(param_1,param_2);
  RtlLeaveCriticalSection(param_1 + 8);
  return uVar1;
}

