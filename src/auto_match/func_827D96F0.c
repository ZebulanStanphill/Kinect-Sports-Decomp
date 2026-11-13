extern int fn_827E0658();


int fn_827D96F0(int param_1,int param_2)

{
  int iVar1;
  int aiStack_30 [12];
  
  if (*(int *)(param_1 + 0x14) == 0) {
    RtlEnterCriticalSection(param_2 + 0x3c8);
    fn_827E0658(aiStack_30,param_2 + 0x350,param_1);
    if (aiStack_30[0] == *(int *)(param_2 + 0x354)) {
      iVar1 = *(int *)(param_2 + 0x400);
    }
    else {
      iVar1 = *(int *)(aiStack_30[0] + 0xc);
    }
    RtlLeaveCriticalSection(param_2 + 0x3c8);
    return iVar1;
  }
  return *(int *)(param_1 + 0x14);
}

