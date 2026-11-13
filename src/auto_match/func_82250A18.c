extern unsigned int *puRam832975b4;
#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_824BFFB0();
extern int fn_82A1BB18();
extern int atexit();
extern __int64 lRam832975b8;
extern unsigned int lbl_821963EC;
extern unsigned int lbl_832975B0;
extern unsigned int *lbl_83297998;
extern unsigned int uRam8329799c;
extern unsigned int uRam832979a0;
extern unsigned int uRam832979f0;
extern unsigned int uRam832979f4;
extern unsigned int uRam832979f8;
extern unsigned int uRam83299070;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

unsigned char *** fn_82250A18(void)

{
  __int64 lVar1;
  unsigned int uVar2;
  __int64 lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam832975b8;
  if (lRam832975b8 == 0) {
    lRam832975b8 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832975b8);
  }
  else {
    lRam832975b8 = storeDoubleWordConditionalIndexed(lRam832975b8,0,0xffffffff832975b8);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return puRam832975b4;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam832975b8;
    if (lRam832975b8 == 0) {
      lRam832975b8 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832975b8);
    }
    else {
      lRam832975b8 = storeDoubleWordConditionalIndexed(lRam832975b8,0,0xffffffff832975b8);
    }
  }
  sync(1);
  if (lbl_832975B0 == (unsigned int *)0x0) {
    if ((uRam83299070 & 1) == 0) {
      uRam8329799c = 0;
      uRam83299070 = uRam83299070 | 1;
      uRam832979a0 = 0;
      lbl_83297998 = &lbl_821963EC;
      fn_824BFFB0(0xffffffff832979a4);
      uRam832979f0 = 0;
      uRam832979f4 = 0;
      uRam832979f8 = 0;
      atexit(0xffffffff8313aa48);
    }
    puRam832975b4 = &lbl_83297998;
    (*(int (**)())lbl_83297998[1])();
    lbl_832975B0 = puRam832975b4;
    sync(1);
  }
  lRam832975b8 = 0;
  return (unsigned char ***)lbl_832975B0;
}
