typedef unsigned char bool;
extern unsigned int lbl_83156680;
extern unsigned int lbl_83156684;
extern unsigned int lbl_83156688;
extern unsigned int lbl_8315668C;
extern unsigned int lbl_83156690;
extern unsigned int lbl_83156694;
extern unsigned int lbl_83156698;
extern unsigned int lbl_8315669C;


unsigned char * fn_82752D38(unsigned int param_1)

{
  bool bVar1;
  
  if (param_1 != 0) {
    bVar1 = (param_1 & 3) == 3;
    if ((param_1 & 0x10) != 0) {
      if (bVar1) {
        return lbl_8315669C;
      }
      if ((param_1 & 2) != 0) {
        return lbl_83156694;
      }
      if ((param_1 & 1) != 0) {
        return lbl_83156698;
      }
      return lbl_83156690;
    }
    if (bVar1) {
      return lbl_8315668C;
    }
    if ((param_1 & 2) != 0) {
      return lbl_83156684;
    }
    if ((param_1 & 1) != 0) {
      return lbl_83156688;
    }
  }
  return lbl_83156680;
}

