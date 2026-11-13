void fn_82685518(int param_1,int param_2)

{
  unsigned int *puVar1;
  
  RtlEnterCriticalSection(param_1 + 0x5c);
  puVar1 = *(unsigned int **)(param_2 + 0x1c);
  if (puVar1 != (unsigned int *)0x0) {
    *(unsigned int *)(param_2 + 0x1c) = 0;
    *(unsigned int *)(param_2 + 0x18) = 0;
    puVar1[2] = 0;
    *puVar1 = *(unsigned int *)(param_1 + 0x54);
    puVar1[1] = param_1 + 0x54;
    *(unsigned int **)(*(int *)(param_1 + 0x54) + 4) = puVar1;
    *(unsigned int **)(param_1 + 0x54) = puVar1;
  }
  RtlLeaveCriticalSection(param_1 + 0x5c);
  return;
}

