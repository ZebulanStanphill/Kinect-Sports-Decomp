extern __int64 fn_8301EEA8();


extern char lbl_8326434C[];
unsigned __int64 fn_82FEB010(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(lbl_8326434C);
  uVar1 = fn_8301EEA8(param_1,param_2,param_3);
  RtlLeaveCriticalSection(lbl_8326434C);
  return uVar1;
}

