extern int fn_82A2E260();


void fn_82A2E648(int param_1,int param_2)

{
  int iVar1;
  int r;
  
  RtlEnterCriticalSection();
  r = *(int *)(param_1 + 0x88);
  if (r != 0) {
    iVar1 = r;
  } else {
    iVar1 = fn_82A2E260(param_1,0,-1);
  }
  RtlLeaveCriticalSection(param_1);
  *(int *)(param_2 + 0x10) = iVar1;
  IoCompleteRequest(param_2,1);
  return;
}

