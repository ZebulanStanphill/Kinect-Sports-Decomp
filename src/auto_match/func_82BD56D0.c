extern int fn_82BD4D50();
extern __int64 fn_82BDA0F8();


unsigned __int64 fn_82BD56D0(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  RtlEnterCriticalSection(param_1 + 0xf0);
  uVar1 = fn_82BD4D50(param_1,param_2);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = fn_82BDA0F8(uVar1,param_3,param_4);
  }
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return uVar2;
}

