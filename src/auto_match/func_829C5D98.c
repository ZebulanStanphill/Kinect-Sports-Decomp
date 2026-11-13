extern int fn_82A1F2F8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83214DD8;
extern unsigned int lbl_83214DE0;
extern unsigned int lbl_83214DEC;
extern unsigned int lbl_83214E00;
extern unsigned int lbl_83214E04;
extern unsigned int lbl_83214F2C;
extern unsigned int lbl_83214F3C;
extern unsigned int lbl_83214F54;


void fn_829C5D98(void)

{
  lbl_83214E00 = 2;
  lbl_83214DD8 = 0;
  lbl_83214E04 = 0x3c;
  if (((lbl_83214F2C & 0x10) != 0) || ((lbl_83214F3C == lbl_821AAD20 && (lbl_83214DEC == 0)))) {
    lbl_83214F54 = fn_82A1F2F8();
    XamNuiCameraElevationSetAngle(0xffffffffffffffe7);
    lbl_83214DE0 = 1;
  }
  return;
}

