extern int fn_82FA5538();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_831BC7F4[];
extern unsigned int lbl_8326430C[];


unsigned __int64 fn_82FE7D90(void)

{
  unsigned int uVar1;
  
  if (lbl_831BC768 == -1) {
    uVar1 = lbl_8326430C[3];
    if (lbl_8326430C[3] <= 0x40) {
      uVar1 = 0x1000000;
    }
    lbl_831BC768 = fn_82FA5538(0,uVar1,0x40,3,0);
    lbl_831BC7F4[1] = lbl_831BC768;
    if (lbl_831BC768 == -1) {
      return 0x34;
    }
  }
  return 1;
}

