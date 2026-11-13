extern int fn_82BD4D50();
extern __int64 fn_82BDA238();


unsigned __int64 fn_82BD5848(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  unsigned __int64 uVar2;
  
  RtlEnterCriticalSection(param_1 + 0xf0);
  iVar1 = fn_82BD4D50(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = fn_82BDA238();
  }
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return uVar2;
}

