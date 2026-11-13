extern unsigned int lbl_832642E0;


__int64 fn_83027FB8(int param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  uVar1 = (unsigned __int64)lbl_832642E0;
  RtlEnterCriticalSection(uVar1 + 0xfe0);
  lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = (int)lVar2;
  RtlLeaveCriticalSection(uVar1 + 0xfe0);
  return lVar2;
}

