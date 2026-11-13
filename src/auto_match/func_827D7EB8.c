extern int fn_822315A0();
extern int fn_827D9138();
extern unsigned int iStack0000001c;


void fn_827D7EB8(__int64 param_1,int param_2)

{
  int iStack0000001c;
  
  iStack0000001c = param_2;
  RtlEnterCriticalSection(param_1 + 0x6c);
  fn_827D9138(param_1 + 0xa4,param_2);
  RtlLeaveCriticalSection(param_1 + 0x6c);
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

