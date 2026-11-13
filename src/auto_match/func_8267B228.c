extern int fn_82A2B760();
extern unsigned int stack0x00000014;
extern unsigned int stack0x0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;


unsigned int fn_8267B228(unsigned __int64 param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  
  uStack00000014 = 0;
  uStack0000001c = param_2;
  iVar1 = NtAllocateVirtualMemory(&stack0x00000014,&stack0x0000001c,0x2000,4,0);
  if (iVar1 < 0) {
    fn_82A2B760();
    uStack00000014 = 0;
  }
  return uStack00000014;
}

