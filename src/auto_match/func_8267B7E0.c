extern int fn_826914D0();
extern int fn_82692948();


void fn_8267B7E0(int param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  RtlEnterCriticalSection(param_1 + 0x48);
  if (((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x2c)) &&
     (uVar1 = fn_826914D0(*(unsigned int *)(param_1 + 0x68)),
     (param_2 & 0xffffffff) < (uVar1 & 0xffffffff))) {
    param_2 = fn_826914D0(*(unsigned int *)(param_1 + 0x68));
  }
  uVar2 = fn_82692948(*(unsigned int *)(param_1 + 0x68),param_2);
  *(unsigned int *)(param_1 + 0x2c) = uVar2;
  RtlLeaveCriticalSection(param_1 + 0x48);
  return;
}

