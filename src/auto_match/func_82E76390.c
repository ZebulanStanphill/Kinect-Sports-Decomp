extern int fn_82EE5F60(void *, void *, int);
extern unsigned short _byteswap_ushort(unsigned short);

int fn_82E76390(unsigned short *p, void *s)
{
  unsigned short v;
  int r = fn_82EE5F60(s, &v, 2);
  if (r >= 0) {
    *p = _byteswap_ushort(v);
    r = 0;
  }
  return r;
}
