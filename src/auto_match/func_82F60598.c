unsigned __int64 fn_82F60598(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar2 = 0;
  RtlEnterCriticalSection(param_1 + 0xd4);
  if (*(char *)(param_1 + 4) == '\0') {
    uVar2 = 0xffffffff82240404;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0xc) != 0) {
      iVar4 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x1c) + iVar4) != 0) {
          puVar1 = *(unsigned int **)(*(int *)(param_1 + 0x1c) + iVar4);
          (**(int (***)())*puVar1)(puVar1);
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (uVar3 < *(unsigned int *)(param_1 + 0xc));
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return uVar2;
}

