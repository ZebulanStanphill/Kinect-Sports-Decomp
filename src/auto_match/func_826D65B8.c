extern int fn_82686BD0();


unsigned int fn_826D65B8(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  
  RtlEnterCriticalSection(param_1 + 0x54);
  if ((*(int *)(param_1 + 0x10) == 0) || (cVar1 = fn_82686BD0(), cVar1 == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x10);
  }
  RtlLeaveCriticalSection(param_1 + 0x54);
  return uVar2;
}

