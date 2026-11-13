typedef unsigned char bool;
extern int fn_82A1E810();
extern int fn_82A1E968();
extern unsigned int lbl_8326F740;
extern unsigned int lbl_8326F748;
extern unsigned int lbl_8326F750;
extern unsigned int lbl_8326F754;
extern unsigned int lbl_832748CC;
extern unsigned int lbl_832748D0;
extern unsigned int uStack_20;
extern unsigned __int64 storeDoubleWordConditionalIndexed();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8259C888(int param_1)

{
  int iVar1;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned __int64 uStack_20;
  
  if ((lbl_832748CC == 0) && (lbl_832748D0 == 0)) {
    lbl_8326F740 = lbl_8326F740 + 1;
    fn_82A1E968(&uStack_20);
    do {
      iVar1 = lbl_8326F754;
      if (in_RESERVE != '\0') {
        lbl_8326F754 = storeWordConditionalIndexed
                                 ((unsigned __int64)*(unsigned int *)(param_1 + 4),0,0xffffffff8326f754);
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (iVar1 != *(int *)(param_1 + 4)) {
      lbl_8326F748 = storeDoubleWordConditionalIndexed(uStack_20,0,0xffffffff8326f748);
      fn_82A1E810(lbl_8326F750);
    }
  }
  return;
}

