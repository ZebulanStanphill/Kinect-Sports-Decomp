unsigned char fn_82773748(unsigned int flags, unsigned short c)
{
  if ((flags & 4) != 0 &&
      ((c >= 0x1100 && c <= 0x11ff) || (c >= 0x3130 && c <= 0x318f) ||
       (c >= 0xac00 && c <= 0xd7a3))) {
    return 0;
  }
  return (c >= 0x1100 && c <= 0x11ff) || (c >= 0x3000 && c <= 0xd7af) ||
         (c >= 0xf900 && c <= 0xfaff) || (c >= 0xff00 && c <= 0xffdc);
}
