extern unsigned int *auStack_2c;
extern int fn_82CE0298();
extern int fn_82CE0340();
extern int iRam8323a8e0;
extern unsigned int uRam8323a8e4;
extern unsigned int uStack_30;


__int64 fn_82CE0410(void)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int uStack_30;
  unsigned char auStack_2c [44];
  
  uVar1 = XamGetSystemVersion();
  if (0x8a0ff < (uVar1 & 0xffff00)) {
    lVar2 = fn_82CE0298(2,0,1);
    return lVar2;
  }
  RtlEnterCriticalSection(0xffffffff83177904);
  if (iRam8323a8e0 == 1) {
    lVar2 = 0x65b;
  }
  else {
    lVar2 = fn_82CE0340(2,&uStack_30,auStack_2c);
    if (lVar2 == 0) {
      uRam8323a8e4 = (unsigned int)LZCOUNT(uStack_30) >> 5;
      lVar2 = fn_82CE0298(2,0,1);
      if (lVar2 == 0) {
        iRam8323a8e0 = 1;
        goto LAB_82ce04bc;
      }
    }
    iRam8323a8e0 = 0;
    uRam8323a8e4 = 0;
  }
LAB_82ce04bc:
  RtlLeaveCriticalSection(0xffffffff83177904);
  return lVar2;
}

