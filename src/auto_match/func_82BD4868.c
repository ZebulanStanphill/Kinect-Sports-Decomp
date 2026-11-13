extern __int64 fn_82BD6AD0();


unsigned __int64 fn_82BD4868(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int iVar1;
  unsigned __int64 uVar2;
  
  RtlEnterCriticalSection(param_1 + 0xf0);
  iVar1 = *(int *)((param_2 + 0x14) * 4 + param_1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uVar2 = fn_82BD6AD0(iVar1,param_3,param_4);
  }
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return uVar2;
}

