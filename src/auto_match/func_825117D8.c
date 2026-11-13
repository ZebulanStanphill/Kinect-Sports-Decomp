extern unsigned int **ppuRam83297968;
#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82A1BB18();
extern int atexit();
extern int iRam83297804;
extern __int64 lRam83297808;
extern unsigned int lbl_821C097C;
extern unsigned int lbl_83297800;
extern unsigned int uRam8329796c;
extern unsigned int uRam83297970;
extern unsigned int uRam83297971;
extern unsigned int uRam83297972;
extern unsigned int uRam83297d14;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

unsigned char *** fn_825117D8(void)

{
  __int64 lVar1;
  unsigned int uVar2;
  __int64 lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam83297808;
  if (lRam83297808 == 0) {
    lRam83297808 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297808);
  }
  else {
    lRam83297808 = storeDoubleWordConditionalIndexed(lRam83297808,0,0xffffffff83297808);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return iRam83297804;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam83297808;
    if (lRam83297808 == 0) {
      lRam83297808 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297808);
    }
    else {
      lRam83297808 = storeDoubleWordConditionalIndexed(lRam83297808,0,0xffffffff83297808);
    }
  }
  sync(1);
  if (lbl_83297800 == 0) {
    if ((uRam83297d14 & 1) == 0) {
      uRam8329796c = 0;
      uRam83297d14 = uRam83297d14 | 1;
      uRam83297970 = 0;
      uRam83297972 = 0;
      ppuRam83297968 = &lbl_821C097C;
      uRam83297971 = 1;
      atexit(0xffffffff8313f020);
    }
    iRam83297804 = &ppuRam83297968;
    (*(int (**)())ppuRam83297968[1])();
    lbl_83297800 = (int)iRam83297804;
    sync(1);
  }
  lRam83297808 = 0;
  return (unsigned char ***)lbl_83297800;
}
