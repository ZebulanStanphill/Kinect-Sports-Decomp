#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_828C1700();
extern int fn_82A1BB18();
extern int atexit();
extern int iRam83213f40;
extern int iRam83213f90;
extern __int64 lRam83213f98;
extern unsigned int lbl_83213F8C;
extern unsigned int uRam83213f88;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


int fn_828A1660(void)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned int uVar3;
  
  uVar3 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar3,1);
  lVar2 = lRam83213f98;
  if (lRam83213f98 == 0) {
    lRam83213f98 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83213f98);
  }
  else {
    lRam83213f98 = storeDoubleWordConditionalIndexed(lRam83213f98,0,0xffffffff83213f98);
  }
  while( true ) {
    if (lVar2 == lVar1) {
      return iRam83213f90;
    }
    if (lVar2 == 0) break;
    lVar2 = lRam83213f98;
    if (lRam83213f98 == 0) {
      lRam83213f98 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83213f98);
    }
    else {
      lRam83213f98 = storeDoubleWordConditionalIndexed(lRam83213f98,0,0xffffffff83213f98);
    }
  }
  sync(1);
  if (lbl_83213F8C == 0) {
    if ((uRam83213f88 & 1) == 0) {
      uRam83213f88 = uRam83213f88 | 1;
      fn_828C1700(0xffffffff83213f40);
      atexit(0xffffffff83140a18);
    }
    iRam83213f90 = -0x7cdec0c0;
    (**(int (***)())(iRam83213f40 + 4))();
    lbl_83213F8C = iRam83213f90;
    sync(1);
  }
  lRam83213f98 = 0;
  return lbl_83213F8C;
}

