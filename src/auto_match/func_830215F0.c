extern unsigned int lbl_832642E0;


__int64 fn_830215F0(int param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  uVar1 = (unsigned __int64)lbl_832642E0;
  RtlEnterCriticalSection(uVar1 + 0x674);
  lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = (int)lVar2;
  RtlLeaveCriticalSection(uVar1 + 0x674);
  return lVar2;
}

