void *memset(void *d, int c, unsigned int n);

int fn_82E763E8(unsigned int *pos, unsigned int n, unsigned int max)
{
  int hr = 0;
  if (max == 0 || *pos + n <= max) {
    memset((void *)*pos, 0, n);
    *pos += n;
  } else {
    hr = 0x8000ffff;
  }
  return hr;
}
