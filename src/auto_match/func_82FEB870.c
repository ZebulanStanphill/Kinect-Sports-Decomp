extern __int64 fn_82FF3640();


extern char lbl_8326434C[];
unsigned __int64 fn_82FEB870(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(lbl_8326434C);
  uVar1 = fn_82FF3640(param_1);
  RtlLeaveCriticalSection(lbl_8326434C);
  return uVar1;
}

