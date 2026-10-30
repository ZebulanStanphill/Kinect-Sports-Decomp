void *memcpy(void *d, const void *s, unsigned int n);

int fn_82E76330(void *dst, unsigned int *pos, unsigned int n, unsigned int max)
{
  int hr = 0;
  if (max == 0 || *pos + n <= max) {
    memcpy(dst, (void *)*pos, n);
    *pos += n;
  } else {
    hr = 0x8000ffff;
  }
  return hr;
}
