extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_828CB7A8();
extern int fn_828CBA80();
extern int fn_828E0268();
extern int fn_828E7B20();
extern int fn_82F63EC8();
extern unsigned int lbl_832143E4;
extern unsigned int lbl_832144D8;
extern unsigned int lbl_832144DC;
extern unsigned int lbl_832144E0;
extern unsigned int lbl_832144E8;
extern unsigned int lbl_832144EC;


void fn_831294E8(void)

{
  unsigned __int64 uVar1;
  unsigned int auStack_20 [2];
  unsigned char auStack_18 [8];
  
  fn_828E0268(auStack_20,0xffffffff8315a35c);
  lbl_832144DC = 0;
  lbl_832144D8 = 0;
  lbl_832144E0 = 0;
  lbl_832144EC = fn_828E7B20;
  lbl_832144E8 = auStack_20[0];
  uVar1 = (unsigned __int64)lbl_832143E4;
  if (uVar1 == 0) {
    uVar1 = fn_828CBA80();
  }
  fn_828CB7A8(auStack_18,uVar1 + 4,0xffffffff832144d8);
  fn_82F63EC8(0xffffffff831416e0);
  return;
}

