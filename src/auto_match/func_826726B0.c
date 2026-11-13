extern unsigned int *auStack_20;
extern int fn_82671700();


unsigned __int64 fn_826726B0(int param_1)

{
  unsigned int iVar1;
  unsigned char auStack_20 [8];
  
  iVar1 = param_1 + 0x124;
  if (iVar1 != 0) {
    RtlEnterCriticalSection(iVar1);
  }
  fn_82671700(auStack_20,param_1 + 0x14,*(unsigned int *)(param_1 + 0x14),
                *(unsigned int *)(param_1 + 0x18));
  if (iVar1 != 0) {
    RtlLeaveCriticalSection(iVar1);
  }
  return 1;
}

