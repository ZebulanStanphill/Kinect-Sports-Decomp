extern unsigned int *auStack_18;
extern unsigned int *auStack_20;
extern int fn_828CB720();
extern int fn_828CB7A8();
extern int fn_828CBA80();
extern int fn_828E0268();
extern int fn_82F63EC8();
extern unsigned int lbl_832143E4;
extern unsigned int lbl_832143F8;
extern unsigned int lbl_832143FC;
extern unsigned int lbl_83214400;
extern unsigned int lbl_83214408;
extern unsigned int lbl_8321440C;


void fn_83129200(void)

{
  unsigned __int64 uVar1;
  unsigned int auStack_20 [2];
  unsigned char auStack_18 [8];
  
  fn_828E0268(auStack_20,0xffffffff83159ff0);
  lbl_832143FC = 0;
  lbl_832143F8 = 0;
  lbl_83214400 = 0;
  lbl_8321440C = fn_828CB720;
  lbl_83214408 = auStack_20[0];
  uVar1 = (unsigned __int64)lbl_832143E4;
  if (uVar1 == 0) {
    uVar1 = fn_828CBA80();
  }
  fn_828CB7A8(auStack_18,uVar1 + 4,0xffffffff832143f8);
  fn_82F63EC8(0xffffffff83141320);
  return;
}

