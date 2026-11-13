extern unsigned int lbl_832642E0;


__int64 fn_8302B1F0(int param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  
  lVar1 = (unsigned __int64)lbl_832642E0 + 0x350;
  if ((*(unsigned int *)(param_1 + 0x28) & 0x40000000) == 0) {
    lVar1 = (unsigned __int64)lbl_832642E0 + 0x328;
  }
  RtlEnterCriticalSection(lVar1);
  lVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = (int)lVar2;
  RtlLeaveCriticalSection(lVar1);
  return lVar2;
}

