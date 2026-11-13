typedef unsigned char bool;
#define true 1
extern int fn_8265C940();
extern int fn_82A1E108();
extern int fn_82F691F0();
extern int iRam83214584;
extern unsigned int lbl_8315AB38;
extern unsigned int uRam83214588;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82934180(void)

{
  int iVar2;
  __int64 lVar1;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  char in_RESERVE;
  unsigned char in_cr0;
  
  uVar4 = 0;
  do {
    uVar3 = (unsigned __int64)uRam83214588;
    if (uRam83214588 != 0) {
      if (in_RESERVE != '\0') {
        uRam83214588 = storeWordConditionalIndexed(uVar3,0,0xffffffff83214588);
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uRam83214588 = storeWordConditionalIndexed(1,0,0xffffffff83214588);
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  do {
    if ((int)uVar3 != 1) {
      if (iRam83214584 == 0) {
        lbl_8315AB38 = KeTlsAlloc();
      }
      iRam83214584 = iRam83214584 + 1;
      if (lbl_8315AB38 == -1) {
        uVar4 = 0xffffffff80004005;
      }
      else {
        iVar2 = KeTlsGetValue();
        in_cr0 = (iVar2 == 0) << 1;
        if (iVar2 == 0) {
          lVar1 = fn_8265C940(0x18,0x24810000);
          if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(lVar1,0,0x18);
          }
          uVar4 = 0xffffffff8007000e;
          in_cr0 = 2;
        }
        else {
          *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + 1;
        }
      }
      do {
        if (in_RESERVE != '\0') {
          uRam83214588 = storeWordConditionalIndexed(0,0,0xffffffff83214588);
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      return uVar4;
    }
    fn_82A1E108(1);
    do {
      uVar3 = (unsigned __int64)uRam83214588;
      if (uRam83214588 != 0) {
        if (in_RESERVE != '\0') {
          uRam83214588 = storeWordConditionalIndexed(uVar3,0,0xffffffff83214588);
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uRam83214588 = storeWordConditionalIndexed(1,0,0xffffffff83214588);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  } while( true );
}

