extern unsigned int lbl_832192F8;
extern unsigned int uRam83219308;


unsigned int fn_82A1CF28(void)

{
  int iVar1;
  unsigned int uVar2;
  
  uVar2 = 0;
  iVar1 = XexCheckExecutablePrivilege(0xb);
  if (iVar1 == 0) {
    KeEnterCriticalRegion();
    RtlEnterCriticalSection(0xffffffff8315d230);
    lbl_832192F8 = 1;
    KeSetEvent(0xffffffff8315d24c,1,0);
    KeWaitForSingleObject(0xffffffff8315d25c,3,1,0,0);
    KeResetEvent(0xffffffff8315d25c);
    uVar2 = uRam83219308;
    RtlLeaveCriticalSection(0xffffffff8315d230);
    KeLeaveCriticalRegion();
  }
  return uVar2;
}

