extern int fn_82587F30();
extern float lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_831E7984;
extern unsigned int lbl_8326B850;
extern unsigned int lbl_8326B85C;
extern unsigned int lbl_8326B860;
extern unsigned int lbl_8326B874;
extern unsigned int lbl_8326B878;
extern unsigned int lbl_8326B8E8;
extern unsigned int lbl_83274AE8;
extern unsigned int lbl_83274AEC;
extern float lbl_83274AFC;


void fn_82623EC0(void)

{
  lbl_83274AEC = 1;
  lbl_83274AE8 = 0;
  fn_82587F30();
  lbl_8326B860 = lbl_821CA460;
  lbl_8326B85C = lbl_83274AFC;
  lbl_8326B850 = lbl_831E7984;
  lbl_8326B874 = *(float *)((&lbl_8326B8E8)[lbl_831E7984] + 0x10) * lbl_8218E8E8;
  lbl_8326B878 = *(float *)((&lbl_8326B8E8)[lbl_831E7984] + 0x10) * lbl_83274AFC * lbl_8218E8E8;
  return;
}

