extern int fn_82A1CD98();
extern int iRam832192e0;
extern int iRam832192e8;
extern unsigned int lbl_832192E4;
extern unsigned int lbl_832192F8;


void fn_82A1D008(void)

{
  if (iRam832192e8 == 0) {
    if (lbl_832192E4 != 0) {
      fn_82A1CD98();
    }
  }
  else {
    KeEnterCriticalRegion();
    if (iRam832192e0 != 0) {
      iRam832192e0 = 0;
      ExRegisterTitleTerminateNotification(0xffffffff8315d26c,0);
    }
    RtlEnterCriticalSection(0xffffffff8315d230);
    lbl_832192F8 = 2;
    KeSetEvent(0xffffffff8315d24c,1,0);
    KeWaitForSingleObject(0xffffffff8315d25c,3,1,0,0);
    KeResetEvent(0xffffffff8315d25c);
    RtlLeaveCriticalSection(0xffffffff8315d230);
    KeLeaveCriticalRegion();
  }
  lbl_832192E4 = 0;
  return;
}

