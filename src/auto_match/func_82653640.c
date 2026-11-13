extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_8265C940();
extern int memset();
extern int VdSetGraphicsInterruptCallback();
extern int VdInitializeEngines();


unsigned __int64 fn_82653640(int param_1)

{
  int *piVar1;
  int iVar3;
  unsigned __int64 uVar2;
  
  RtlInitializeCriticalSection(param_1 + 0x3b34);
  RtlInitializeCriticalSection(param_1 + 0x3b50);
  *(unsigned char *)(param_1 + 0x2abe) = *(unsigned char *)(param_1 + 0x2abe) | 4;
  VdInitializeEngines(0x2dff0003,0xffffffff826535b8,0,0xffffffff821883a0,0xffffffff82188820);
  iVar3 = KeGetCurrentProcessType();
  if (iVar3 != 2) {
    ExRegisterTitleTerminateNotification(0xffffffff831bea50,1);
    ExRegisterTitleTerminateNotification(0xffffffff831bea60,1);
  }
  *(unsigned int *)(param_1 + 0x4220) = 0;
  VdSetGraphicsInterruptCallback(0xffffffff826455f0,param_1);
  iVar3 = KeGetCurrentProcessType();
  piVar1 = __imp__VdGlobalXamDevice;
  if (iVar3 != 2) {
    piVar1 = __imp__VdGlobalDevice;
  }
  *piVar1 = param_1;
  uVar2 = fn_8265C940(0x60,0xffffffffa5800000);
  *(int *)(param_1 + 0x2a90) = (int)uVar2;
  if ((uVar2 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
    memset(uVar2,0,0x60);
  }
  return 0xffffffff8007000e;
}

