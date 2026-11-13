extern int fn_8267FB90();
extern int fn_82686608();
extern int fn_8268B8E8();


void fn_82687570(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 8) + 0xc;
  RtlEnterCriticalSection(lVar1);
  *(unsigned int *)(param_1 + 0xc) = 2;
  fn_8268B8E8(param_1 + 0x1c,param_2);
  fn_82686608((unsigned __int64)*(unsigned int *)(param_1 + 8) + 0x28,param_1 + 0x14);
  fn_8267FB90(param_1 + 0x20);
  RtlLeaveCriticalSection(lVar1);
  return;
}

