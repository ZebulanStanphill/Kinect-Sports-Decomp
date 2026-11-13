extern int fn_82A1E810();


void fn_8267CA08(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  RtlEnterCriticalSection();
  puVar1 = *(unsigned int **)(param_1 + 0x20);
  if (puVar1 != (unsigned int *)0x0) {
    iVar2 = puVar1[1];
    if (iVar2 == 0) {
      *(unsigned int *)(param_1 + 0x20) = 0;
      *(unsigned int *)(param_1 + 0x24) = 0;
    }
    else {
      *(int *)(param_1 + 0x20) = iVar2;
      *(unsigned int *)(iVar2 + 8) = 0;
    }
    fn_82A1E810(*puVar1);
  }
  RtlLeaveCriticalSection(param_1);
  return;
}

