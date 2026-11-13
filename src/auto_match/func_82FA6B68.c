extern int fn_82A1E6A0();
extern int fn_82FA7E00();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_831BC680;
extern unsigned int lbl_831BC684;
extern unsigned int lbl_831BC688;
extern unsigned int lbl_831BC68C;
extern unsigned int lbl_831BC690;
extern unsigned int lbl_831BC694;
extern unsigned int lbl_831BC698;
extern unsigned int lbl_831BC69C;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_83264228;
extern unsigned int lbl_8326422C;
extern unsigned int lbl_83264234;
extern unsigned int lbl_83264238;
extern unsigned int lbl_8326423C;


void fn_82FA6B68(unsigned __int64 param_1,unsigned int *param_2)

{
  if (param_2 == (unsigned int *)0x0) {
    lbl_8326422C = lbl_82002AE0;
  }
  else {
    lbl_8326422C = *param_2;
  }
  lbl_83264234 = 0;
  lbl_83264238 = 0;
  lbl_8326423C = 0;
  fn_82FA7E00(0xffffffff83264240);
  lbl_83264228 = fn_82A1E6A0(0,0,0,0);
  if ((unsigned int)LZCOUNT(lbl_83264228) >> 5 == 0) {
    lbl_831BC680 = 0;
    lbl_831BC694 = 0;
    lbl_831BC68C = 0;
    lbl_831BC69C = lbl_831BC768;
    lbl_831BC690 = 0xffffffff;
    lbl_831BC698 = 0;
    lbl_831BC688 = 0;
    lbl_831BC684 = 0;
  }
  return;
}

