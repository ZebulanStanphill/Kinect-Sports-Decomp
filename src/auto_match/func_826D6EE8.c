void fn_826D6EE8(int param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  RtlEnterCriticalSection(param_1 + 0xd4);
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0x78) * 8 + *(int *)(param_1 + 0xfc));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return;
}

