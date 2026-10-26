unsigned int fn_82AB14E0(unsigned char *buf, int pos, int n)
{
  unsigned int i = (unsigned int)(pos - 1) >> 3;
  unsigned char *p = buf + i;
  unsigned int w = ((((p[3] << 8) | p[2]) << 8 | p[1]) << 8) | buf[i];
  return (w << (i * 8 - pos - n + 33)) >> (32 - n);
}
