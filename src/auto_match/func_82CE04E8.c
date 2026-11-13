extern int fn_82CE0298();
extern int iRam8323a8e0;
extern int iRam8323a8e4;


unsigned __int64 fn_82CE04E8(void)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = XamGetSystemVersion();
  if ((uVar1 & 0xffff00) < 0x8a100) {
    RtlEnterCriticalSection(0xffffffff83177904);
    if (iRam8323a8e0 == 0) {
      uVar2 = 0x65b;
    }
    else {
      uVar2 = 0;
      if (iRam8323a8e4 != 1) {
        uVar2 = 4;
      }
      uVar2 = fn_82CE0298(2,uVar2,0);
      iRam8323a8e4 = 0;
      iRam8323a8e0 = 0;
    }
    RtlLeaveCriticalSection(0xffffffff83177904);
  }
  else {
    uVar2 = fn_82CE0298(2,4,0);
  }
  return uVar2;
}

