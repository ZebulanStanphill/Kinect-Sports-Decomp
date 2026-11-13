extern unsigned int *puRam832143e8;
#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82A1BB18();
extern int atexit();
extern __int64 lRam832143f0;
extern unsigned int lbl_820264A0;
extern unsigned int lbl_832143CC;
extern unsigned int lbl_832143D0;
extern unsigned int lbl_832143D4;
extern unsigned int lbl_832143D8;
extern unsigned int lbl_832143DC;
extern unsigned int lbl_832143E4;
extern unsigned int uRam832143e0;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

unsigned char ** fn_828CBA80(void)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned int uVar3;

  uVar3 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar3,1);
  lVar2 = lRam832143f0;
  if (lRam832143f0 == 0) {
    lRam832143f0 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832143f0);
  }
  else {
    lRam832143f0 = storeDoubleWordConditionalIndexed(lRam832143f0,0,0xffffffff832143f0);
  }
  while( true ) {
    if (lVar2 == lVar1) {
      return puRam832143e8;
    }
    if (lVar2 == 0) break;
    lVar2 = lRam832143f0;
    if (lRam832143f0 == 0) {
      lRam832143f0 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832143f0);
    }
    else {
      lRam832143f0 = storeDoubleWordConditionalIndexed(lRam832143f0,0,0xffffffff832143f0);
    }
  }
  sync(1);
  if (lbl_832143E4 == (unsigned int *)0x0) {
    if ((uRam832143e0 & 1) == 0) {
      lbl_832143D0 = 0;
      uRam832143e0 = uRam832143e0 | 1;
      lbl_832143DC = 0;
      lbl_832143CC = &lbl_820264A0;
      lbl_832143D4 = &lbl_832143D0;
      lbl_832143D8 = &lbl_832143D0;
      atexit(0xffffffff831413d8);
    }
    puRam832143e8 = &lbl_832143CC;
    (**(int (***)())(lbl_832143CC + 4))();
    lbl_832143E4 = puRam832143e8;
    sync(1);
  }
  lRam832143f0 = 0;
  return (unsigned char **)lbl_832143E4;
}
