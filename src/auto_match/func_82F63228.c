unsigned short fn_82F63228(unsigned short c, unsigned int *locale)
{
  if (c == 0xffff) return c;
  if (*locale != 0) return c;
  if (c >= 0x100) return c;
  if (c < 'A') return c;
  if (c > 'Z') return c;
  return c + 0x20;
}
