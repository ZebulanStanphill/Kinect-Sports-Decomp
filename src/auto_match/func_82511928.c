extern unsigned int *puRam83297814;
#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82511A50();
extern int fn_82A1BB18();
extern int atexit();
extern __int64 lRam83297818;
extern unsigned int lbl_832977D0;
extern unsigned int lbl_83297810;
extern unsigned int uRam832977cc;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


unsigned int * fn_82511928(void)

{
  __int64 lVar1;
  unsigned int uVar2;
  __int64 lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam83297818;
  if (lRam83297818 == 0) {
    lRam83297818 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297818);
  }
  else {
    lRam83297818 = storeDoubleWordConditionalIndexed(lRam83297818,0,0xffffffff83297818);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return puRam83297814;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam83297818;
    if (lRam83297818 == 0) {
      lRam83297818 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff83297818);
    }
    else {
      lRam83297818 = storeDoubleWordConditionalIndexed(lRam83297818,0,0xffffffff83297818);
    }
  }
  sync(1);
  if (lbl_83297810 == (unsigned int *)0x0) {
    if ((uRam832977cc & 1) == 0) {
      uRam832977cc = uRam832977cc | 1;
      fn_82511A50();
      atexit(0xffffffff8313f038);
    }
    puRam83297814 = &lbl_832977D0;
    (**(int (***)())(lbl_832977D0 + 4))();
    lbl_83297810 = puRam83297814;
    sync(1);
  }
  lRam83297818 = 0;
  return lbl_83297810;
}
