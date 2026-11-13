extern __int64 fn_82E479E8();


unsigned __int64 fn_82E48D30(__int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(param_1 + 4);
  uVar1 = fn_82E479E8(param_1,param_2);
  RtlLeaveCriticalSection(param_1 + 4);
  return uVar1;
}

