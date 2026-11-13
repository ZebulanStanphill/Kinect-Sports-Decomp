extern int fn_82F70238(unsigned short *, unsigned int);


int fn_82E49B68(unsigned short *dst, unsigned int n)
{
  unsigned short zero = 0;
  int hr = zero;
  unsigned int m;
  unsigned int len;
  if (n == 0) {
    hr = 0x80070057;
  } else {
    m = n - 1;
    len = fn_82F70238(dst, m);
    if (((int)len < 0) || (m < len)) {
      hr = 0x8007007a;
      dst[m] = zero;
    } else if (len == m) {
      dst[m] = zero;
    }
  }
  return hr;
}
