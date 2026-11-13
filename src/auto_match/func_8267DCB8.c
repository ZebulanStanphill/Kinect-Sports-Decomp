extern int fn_8267C838();
extern int fn_8267D068();
extern int fn_8267D840();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


void fn_8267DCB8(int param_1,unsigned __int64 param_2)

{
  unsigned int uStack0000001c;
  
  uStack0000001c = (unsigned int)param_2;
  fn_8267C838(*(unsigned int *)(param_1 + 0x14));
  fn_8267D068(param_1,param_1,&stack0x0000001c,(param_2 & 0xffffffff) >> 6 ^ param_2);
  fn_8267D840(*(unsigned int *)(param_1 + 0x14),param_1 + 4);
  return;
}

