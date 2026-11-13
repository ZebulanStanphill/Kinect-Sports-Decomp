extern unsigned int *puRam8322b1e0;
typedef unsigned char bool;
extern int fn_82BA02A8();
extern int fn_82BEA1F8();
extern int fn_82BEA230();
extern unsigned int lbl_831751CC;
extern unsigned int *lbl_8322B1DC;
extern unsigned int lbl_8322B1E8;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82BE7678(void)

{
  __int64 lVar1;
  int *piVar2;
  char in_RESERVE;
  unsigned char in_cr0;

  if (lbl_8322B1DC != (unsigned int *)0x0) {
    (**(int (***)())*lbl_8322B1DC)(lbl_8322B1DC,1);
    lbl_8322B1DC = (unsigned int *)0x0;
    fn_82BA02A8();
    if (puRam8322b1e0 != (unsigned int *)0x0) {
      (**(int (***)())*puRam8322b1e0)(puRam8322b1e0,1);
      puRam8322b1e0 = (unsigned int *)0x0;
    }
    do {
      if (in_RESERVE != '\0') {
        lbl_8322B1E8 = storeWordConditionalIndexed((unsigned __int64)lbl_8322B1E8 - 1,0,0xffffffff8322b1e8)
        ;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (lbl_8322B1E8 == 0) {
      fn_82BEA1F8(0xffffffff8322b1ec,0xffffffff820e9990);
      lVar1 = 0x10;
      piVar2 = (int *)0x83175250;
      do {
        piVar2[-2] = 0;
        *(unsigned short *)(piVar2 + -1) = 1000;
        if (*piVar2 != 0) {
          (*(int (**)())lbl_831751CC)();
          *piVar2 = 0;
        }
        lVar1 = lVar1 + -1;
        piVar2 = piVar2 + 3;
      } while (lVar1 != 0);
      fn_82BEA230(0xffffffff8322b1ec,0xffffffff820e9990);
    }
  }
  return;
}
