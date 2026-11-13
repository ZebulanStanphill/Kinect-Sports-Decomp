extern __int64 fn_8301A738();
extern unsigned int lbl_832642EC;


extern char lbl_8326434C[];
unsigned __int64 fn_82FEB810(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(lbl_8326434C);
  uVar1 = fn_8301A738(lbl_832642EC,param_1);
  RtlLeaveCriticalSection(lbl_8326434C);
  return uVar1;
}

