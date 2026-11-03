unsigned short fn_82F631E8(unsigned short c, unsigned int *p)
{
  if (c == 0xffff) {
    return c;
  }
  if (*p != 0) {
    return c;
  }
  if (c >= 0x100) {
    return c;
  }
  if (c < 0x61) {
    return c;
  }
  if (c > 0x7a) {
    return c;
  }
  return c - 0x20;
}
