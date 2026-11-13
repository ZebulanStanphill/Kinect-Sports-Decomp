extern unsigned int lbl_8200E5B0;


unsigned __int64 fn_8268F518(unsigned int param_1)

{
  if ((param_1 & 0xffff) == 0) {
    if ((param_1 & 0xff0000) != 0) {
      return (unsigned __int64)(unsigned char)(&lbl_8200E5B0)[param_1 >> 0x10 & 0xff] + 0x10;
    }
    return (unsigned __int64)(unsigned char)(&lbl_8200E5B0)[param_1 >> 0x18] + 0x18;
  }
  if ((param_1 & 0xff) != 0) {
    return (unsigned __int64)(unsigned char)(&lbl_8200E5B0)[param_1 & 0xff];
  }
  return (unsigned __int64)(unsigned char)(&lbl_8200E5B0)[param_1 >> 8 & 0xff] + 8;
}

