extern int fn_82A1E4F0();
extern int fn_82A1E5C0();
extern int fn_82F70520();
extern unsigned int lbl_832636E8;
extern unsigned int lbl_832636EC;
extern unsigned int lbl_832636F4;
extern unsigned int lbl_83263738;
extern unsigned int uStack00000010;


void fn_82F84290(unsigned __int64 param_1)

{
  unsigned int in_LR;
  unsigned __int64 uStack00000010;
  
  uStack00000010 = param_1;
  RtlCaptureContext(0xffffffff83263740);
  lbl_832636E8 = 0xc0000409;
  lbl_832636EC = 1;
  lbl_83263738 = 0;
  lbl_832636F4 = in_LR;
  fn_82F70520(1);
  fn_82A1E4F0(0);
  fn_82A1E5C0(0xffffffff8216aaf8);
  if (lbl_83263738 == 0) {
    fn_82F70520(1);
  }
  KeBugCheck(0xf2);
  return;
}

