typedef unsigned char bool;


bool fn_827D57E8(int param_1)

{
  int iVar1;
  int iVar2;
  
  RtlEnterCriticalSection(param_1 + 0x6c);
  iVar1 = *(int *)(param_1 + 0xcc);
  iVar2 = *(int *)(param_1 + 0xd0);
  { bool result = iVar1 == iVar2;
  RtlLeaveCriticalSection(param_1 + 0x6c);
  return result; }
}

