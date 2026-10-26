extern void *memcpy(void *dst, const void *src, unsigned int n);

int fn_8306CB18(unsigned char *self, const void *src)
{
  int hr = 0;

  if (src == 0) {
    hr = 0x80070057;
  } else {
    memcpy(self + 4, src, 0x30);
  }
  return hr;
}
