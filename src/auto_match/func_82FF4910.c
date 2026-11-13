extern int fn_82A1E650();
extern int fn_82FF5200();


void fn_82FF4910(int param_1,unsigned __int64 param_2)

{
  unsigned int iVar1;
  
  RtlEnterCriticalSection(param_1 + 0x88);
  iVar1 = fn_82FF5200(param_1 + 4,param_2);
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 0x20) = 0;
    *(unsigned short *)(iVar1 + 0x2a) = 0;
  }
  RtlLeaveCriticalSection(param_1 + 0x88);
  fn_82A1E650(*(unsigned int *)(param_1 + 0xa4),0xffffffffffffffff);
  return;
}

