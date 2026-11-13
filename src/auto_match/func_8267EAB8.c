typedef unsigned char bool;
extern int fn_8267E910();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


bool fn_8267EAB8(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
  if (uVar1 != 0) {
    stack_pair_20.first = param_2;
    stack_pair_20.second = param_3;
    RtlEnterCriticalSection(uVar1 + 0x10);
    fn_8267E910((unsigned __int64)*(unsigned int *)(param_1 + 8) + 4,&stack_pair_20.first);
    RtlLeaveCriticalSection(uVar1 + 0x10);
  }
  return uVar1 != 0;
}

