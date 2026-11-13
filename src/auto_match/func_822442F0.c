extern unsigned int *puRam832975a0;
#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82A1BB18();
extern int atexit();
extern __int64 lRam832975a8;
extern unsigned int lbl_8219748C;
extern unsigned int lbl_8329759C;
extern unsigned int lbl_832979FC;
extern unsigned int lbl_83297A04;
extern unsigned int lbl_83297A0C;
extern unsigned int uRam83297a00;
extern unsigned int uRam83297a08;
extern unsigned int uRam83297a14;
extern unsigned int uRam83297a15;
extern unsigned int uRam83297a18;
extern unsigned int uRam83297a1c;
extern unsigned int uRam83298f74;
extern unsigned __int64 storeDoubleWordConditionalIndexed();


/* WARNING: Restarted to delay deadcode elimination for space: ram */

unsigned char ** fn_822442F0(void)

{
  __int64 lVar1;
  unsigned int uVar2;
  __int64 lVar3;

  uVar2 = fn_82A1BB18();
  lVar1 = CONCAT44(uVar2,1);
  lVar3 = lRam832975a8;
  if (lRam832975a8 == 0) {
    lRam832975a8 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832975a8);
  }
  else {
    lRam832975a8 = storeDoubleWordConditionalIndexed(lRam832975a8,0,0xffffffff832975a8);
  }
  while( true ) {
    if (lVar3 == lVar1) {
      return puRam832975a0;
    }
    if (lVar3 == 0) break;
    lVar3 = lRam832975a8;
    if (lRam832975a8 == 0) {
      lRam832975a8 = storeDoubleWordConditionalIndexed(lVar1,0,0xffffffff832975a8);
    }
    else {
      lRam832975a8 = storeDoubleWordConditionalIndexed(lRam832975a8,0,0xffffffff832975a8);
    }
  }
  sync(1);
  if (lbl_8329759C == (unsigned int *)0x0) {
    if ((uRam83298f74 & 1) == 0) {
      uRam83297a00 = 0;
      uRam83298f74 = uRam83298f74 | 1;
      lbl_83297A04 = 0;
      uRam83297a08 = 0;
      lbl_832979FC = &lbl_8219748C;
      lbl_83297A0C = 0;
      uRam83297a14 = 0;
      uRam83297a15 = 0;
      uRam83297a18 = 0;
      uRam83297a1c = 0;
      atexit(0xffffffff8313a768);
    }
    puRam832975a0 = &lbl_832979FC;
    (**(int (***)())(lbl_832979FC + 4))();
    lbl_8329759C = puRam832975a0;
    sync(1);
  }
  lRam832975a8 = 0;
  return (unsigned char **)lbl_8329759C;
}
