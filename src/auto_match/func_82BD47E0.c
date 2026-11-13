unsigned __int64 fn_82BD47E0(__int64 param_1,unsigned int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    RtlEnterCriticalSection(param_1 + 0xf0);
  }
  else if (param_2 == 1) {
    lVar1 = RtlTryEnterCriticalSection(param_1 + 0xf0);
    uVar2 = -(unsigned __int64)(lVar1 != 1) & 0xffffffff80004004;
  }
  else if (param_2 < 3) {
    RtlLeaveCriticalSection(param_1 + 0xf0);
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  return uVar2;
}

