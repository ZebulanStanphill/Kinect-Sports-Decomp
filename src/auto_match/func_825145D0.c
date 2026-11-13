extern unsigned int **ppuRam83297954;
#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82A1BB18();
extern int atexit();
extern int iRam83297824;
extern __int64 lRam83297828;
extern unsigned int lbl_821C2504;
extern unsigned int lbl_83297820;
extern unsigned int uRam83297958;
extern unsigned int uRam8329795c;
extern unsigned int uRam83297960;
extern unsigned int uRam83297964;
extern unsigned int uRam83297d10;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

unsigned char *** fn_825145D0(void)

{
  __int64 lVar1;
  unsigned int uVar2;
  __int64 lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam83297828;
  if (lRam83297828 == 0) {
    lRam83297828 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297828);
  }
  else {
    lRam83297828 = storeDoubleWordConditionalIndexed(lRam83297828,0,0xffffffff83297828);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return iRam83297824;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam83297828;
    if (lRam83297828 == 0) {
      lRam83297828 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297828);
    }
    else {
      lRam83297828 = storeDoubleWordConditionalIndexed(lRam83297828,0,0xffffffff83297828);
    }
  }
  sync(1);
  if (lbl_83297820 == 0) {
    if ((uRam83297d10 & 1) == 0) {
      uRam83297958 = 0;
      uRam83297d10 = uRam83297d10 | 1;
      uRam83297964 = 0;
      ppuRam83297954 = &lbl_821C2504;
      uRam8329795c = &uRam83297958;
      uRam83297960 = &uRam83297958;
      atexit(0xffffffff8313f0b0);
    }
    iRam83297824 = &ppuRam83297954;
    (*(int (**)())ppuRam83297954[1])();
    lbl_83297820 = (int)iRam83297824;
    sync(1);
  }
  lRam83297828 = 0;
  return (unsigned char ***)lbl_83297820;
}
