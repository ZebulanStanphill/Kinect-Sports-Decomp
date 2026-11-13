extern int fn_82F691F0();


void fn_82A2E560(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_2 + 0x50);
  iVar2 = *(int *)(iVar1 + 0x18);
  RtlEnterCriticalSection();
  iVar3 = *(int *)(param_1 + 0x88);
  if (iVar3 == 0) {
    if ((*(unsigned char *)(iVar2 + 2) & 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(unsigned int *)(param_2 + 0x1c),0,*(unsigned int *)(iVar1 + 4));
    }
    iVar3 = -0x3ffffed8;
  }
  RtlLeaveCriticalSection(param_1);
  *(int *)(param_2 + 0x10) = iVar3;
  IoCompleteRequest(param_2,1);
  return;
}

