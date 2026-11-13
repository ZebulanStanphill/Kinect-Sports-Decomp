extern int fn_82F691F0();


void fn_82A2CCF0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_2 + 0x50);
  RtlEnterCriticalSection();
  iVar2 = *(int *)(param_1 + 0x88);
  if (iVar2 != 0) {
    RtlLeaveCriticalSection(param_1);
    *(int *)(param_2 + 0x10) = iVar2;
    IoCompleteRequest(param_2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(unsigned int *)(param_2 + 0x1c),0,*(unsigned int *)(iVar1 + 4));
}

