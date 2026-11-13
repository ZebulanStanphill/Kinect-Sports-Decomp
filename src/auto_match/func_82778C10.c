extern __int64 fn_827773D8();


unsigned __int64
fn_82778C10(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(param_1 + 0x9e4);
  uVar1 = fn_827773D8(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  RtlLeaveCriticalSection(param_1 + 0x9e4);
  return uVar1;
}

