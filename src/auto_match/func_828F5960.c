extern int fn_82F6EDE8();

int fn_828F5960(char *dst, unsigned int n)
{
  int hr = 0;
  if (n == 0) {
    hr = 0x80070057;
  } else {
    unsigned int k = n - 1;
    int len = fn_82F6EDE8(dst, k);
    if (len < 0 || (unsigned int)len > k) {
      hr = 0x8007007a;
      dst[k] = 0;
    } else if ((unsigned int)len == k) {
      dst[k] = 0;
    }
  }
  return hr;
}
