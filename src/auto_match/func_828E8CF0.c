extern int fn_828E8C60();
extern unsigned int uStack_20;


unsigned char fn_828E8CF0(int param_1)

{
  unsigned char uVar1;
  unsigned char uStack_20;
  
  RtlEnterCriticalSection(param_1 + 0x48);
  fn_828E8C60(param_1,uStack_20);
  uVar1 = *(unsigned char *)(param_1 + 4);
  RtlLeaveCriticalSection(param_1 + 0x48);
  return uVar1;
}

