extern int fn_82FF4970();
extern int fn_82FF5200();


void fn_82FF5198(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  
  RtlEnterCriticalSection(param_1 + 0x88);
  iVar1 = fn_82FF5200(param_1 + 4,param_2);
  if (iVar1 == 0) {
    RtlLeaveCriticalSection(param_1 + 0x88);
  }
  else {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    fn_82FF4970(param_1,param_2);
  }
  return;
}

