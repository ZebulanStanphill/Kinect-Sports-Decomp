extern int fn_8265C940();
extern int fn_82F691F0();
extern int iRam83217168;
extern int iRam8321716c;
extern unsigned int lbl_83217170;


unsigned __int64 fn_829CD918(void)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  if (((iRam83217168 == 0) && (iRam8321716c == 0)) && (lbl_83217170 == 0)) {
    RtlEnterCriticalSection(0xffffffff8315c428);
    uVar1 = fn_8265C940(0xab0,0x209c0000);
    if ((uVar1 & 0xffffffff) != 0) {
      iRam83217168 = (int)uVar1;
      iVar2 = fn_8265C940(0x78,0x209c0000);
      if ((iVar2 != 0) && (iVar2 = fn_8265C940(0x78,0x209c0000), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar1,0,0xab0);
      }
    }
    uVar3 = 0xffffffff8007000e;
    RtlLeaveCriticalSection(0xffffffff8315c428);
  }
  else {
    uVar3 = 0xffffffff800704df;
  }
  return uVar3;
}

