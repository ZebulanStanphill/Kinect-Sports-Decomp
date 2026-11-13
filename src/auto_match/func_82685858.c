extern int fn_82685698();


void fn_82685858(int param_1)

{
  int iVar1;
  int iVar2;
  
  RtlEnterCriticalSection(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x58);
  while (iVar2 != param_1 + 0x54) {
    iVar2 = *(int *)(param_1 + 0x58);
    iVar1 = *(int *)(iVar2 + 0x1c);
    while (iVar1 != iVar2 + 0x10) {
      fn_82685698(param_1,*(unsigned int *)(iVar2 + 0x1c));
      iVar1 = *(int *)(iVar2 + 0x1c);
    }
    iVar2 = *(int *)(param_1 + 0x58);
  }
  RtlLeaveCriticalSection(param_1 + 0x5c);
  return;
}

