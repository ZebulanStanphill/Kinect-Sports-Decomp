extern float fRam83217b78;
extern unsigned int lbl_820162A0;
extern unsigned int lbl_82021540;
extern unsigned int lbl_820579A8;
extern unsigned int uRam83217b7c;


unsigned __int64 fn_829DD528(double param_1)

{
  if ((uRam83217b7c & 1) == 0) {
    uRam83217b7c = uRam83217b7c | 1;
    fRam83217b78 = lbl_820162A0;
  }
  if ((double)lbl_820579A8 < param_1) {
    if (param_1 < (double)lbl_82021540) {
      return (__int64)((float)(param_1 - (double)lbl_820579A8) / fRam83217b78) & 0xffffffff;
    }
    return 7;
  }
  return 0;
}

