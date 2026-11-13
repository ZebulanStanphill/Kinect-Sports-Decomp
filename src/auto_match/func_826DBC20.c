extern int fn_826D97A0();


unsigned __int64 fn_826DBC20(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  __int64 lVar2;
  int iVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20);
  iVar3 = 0;
  if (*(int *)(iVar1 + 0x74) < 2) {
    RtlEnterCriticalSection(iVar1 + 0xac);
    iVar3 = iVar1;
  }
  lVar2 = fn_826D97A0((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xc) + 0x20) + 0xd0
                        ,param_2);
  if (iVar3 != 0) {
    RtlLeaveCriticalSection(iVar3 + 0xac);
  }
  return -(unsigned __int64)(lVar2 != 0) & lVar2 + 4U;
}

