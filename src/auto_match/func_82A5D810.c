extern int fn_82A5D4A0();
extern int iRam8321a308;


void fn_82A5D810(void)

{
  __int64 lVar1;
  int *piVar2;
  
  RtlEnterCriticalSection(0xffffffff8315f6f0);
  ExRegisterTitleTerminateNotification(0xffffffff8315f6e0,0);
  lVar1 = 8;
  piVar2 = (int *)0x8321a2e8;
  do {
    if (*piVar2 != 0) {
      fn_82A5D4A0();
      iRam8321a308 = iRam8321a308 + -1;
      *piVar2 = 0;
    }
    lVar1 = lVar1 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar1 != 0);
  RtlLeaveCriticalSection(0xffffffff8315f6f0);
  return;
}

