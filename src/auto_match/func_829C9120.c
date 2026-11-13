extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned int  fn_829C9120(unsigned __int64 param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  
  stack_pair_20.first = (unsigned int)param_1;
  iVar2 = XamXStudioRequest(0x1003,&stack_pair_20.first);
  if (iVar2 >= 0) {
    return (unsigned __int64)stack_pair_20.second;
  }
  uVar1 = PsCamDeviceRequest(param_1);
  return uVar1;
}

