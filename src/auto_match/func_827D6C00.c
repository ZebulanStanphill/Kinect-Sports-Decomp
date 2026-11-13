extern int fn_827E40D0();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_827D6C00(int param_1,unsigned int param_2)

{
  unsigned int uStack0000001c;
  
  uStack0000001c = param_2;
  RtlEnterCriticalSection(param_1 + 0x88);
  fn_827E40D0(param_1 + 4,*(unsigned int *)(param_1 + 4),&stack0x0000001c);
  RtlLeaveCriticalSection(param_1 + 0x88);
  return;
}

