extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_828CB7A8();
extern int fn_828CBA80();
extern int fn_828E0268();
extern int fn_828E3A68();
extern int fn_82F63EC8();
extern unsigned int lbl_832143E4;
extern unsigned int lbl_83214460;
extern unsigned int lbl_83214464;
extern unsigned int lbl_83214468;
extern unsigned int lbl_83214470;
extern unsigned int lbl_83214474;


void fn_83129438(void)

{
  unsigned __int64 uVar1;
  unsigned int auStack_20 [2];
  unsigned char auStack_18 [8];
  
  fn_828E0268(auStack_20,0xffffffff8315a2ec);
  lbl_83214464 = 0;
  lbl_83214460 = 0;
  lbl_83214468 = 0;
  lbl_83214474 = fn_828E3A68;
  lbl_83214470 = auStack_20[0];
  uVar1 = (unsigned __int64)lbl_832143E4;
  if (uVar1 == 0) {
    uVar1 = fn_828CBA80();
  }
  fn_828CB7A8(auStack_18,uVar1 + 4,0xffffffff83214460);
  fn_82F63EC8(0xffffffff831415d0);
  return;
}

