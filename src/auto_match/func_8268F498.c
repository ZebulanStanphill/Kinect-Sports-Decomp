extern unsigned int lbl_8200E6B0;


unsigned __int64 fn_8268F498(unsigned int param_1)

{
  if ((param_1 & 0xffff) == 0xffff) {
    if ((param_1 & 0xffffff) == 0xffffff) {
      return (unsigned __int64)(unsigned char)(&lbl_8200E6B0)[param_1 >> 0x18] + 0x18;
    }
    return (unsigned __int64)(unsigned char)(&lbl_8200E6B0)[param_1 >> 0x10 & 0xff] + 0x10;
  }
  if ((param_1 & 0xff) == 0xff) {
    return (unsigned __int64)(unsigned char)(&lbl_8200E6B0)[param_1 >> 8 & 0xff] + 8;
  }
  return (unsigned __int64)(unsigned char)(&lbl_8200E6B0)[param_1 & 0xff];
}

