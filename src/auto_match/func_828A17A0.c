#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_828D06D0();
extern int fn_82A1BB18();
extern int atexit();
extern int iRam83213fa0;
extern int iRam83213fcc;
extern __int64 lRam83213fd0;
extern unsigned int lbl_83213FC8;
extern unsigned int uRam83213fc4;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


int fn_828A17A0(void)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned int uVar3;
  
  uVar3 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar3,1);
  lVar2 = lRam83213fd0;
  if (lRam83213fd0 == 0) {
    lRam83213fd0 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83213fd0);
  }
  else {
    lRam83213fd0 = storeDoubleWordConditionalIndexed(lRam83213fd0,0,0xffffffff83213fd0);
  }
  while( true ) {
    if (lVar2 == lVar1) {
      return iRam83213fcc;
    }
    if (lVar2 == 0) break;
    lVar2 = lRam83213fd0;
    if (lRam83213fd0 == 0) {
      lRam83213fd0 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83213fd0);
    }
    else {
      lRam83213fd0 = storeDoubleWordConditionalIndexed(lRam83213fd0,0,0xffffffff83213fd0);
    }
  }
  sync(1);
  if (lbl_83213FC8 == 0) {
    if ((uRam83213fc4 & 1) == 0) {
      uRam83213fc4 = uRam83213fc4 | 1;
      fn_828D06D0(0xffffffff83213fa0);
      atexit(0xffffffff83140a08);
    }
    iRam83213fcc = -0x7cdec060;
    (**(int (***)())(iRam83213fa0 + 4))();
    lbl_83213FC8 = iRam83213fcc;
    sync(1);
  }
  lRam83213fd0 = 0;
  return lbl_83213FC8;
}

