extern void *fn_82E4FE08(unsigned int);
extern int fn_82E50F00(void *, int);
extern int fn_82E51028(void *, int);
extern unsigned char *fn_82E52428(void *, unsigned int);
extern void *memcpy(void *, const void *, unsigned int);

int fn_82E4B390(unsigned char *self, unsigned int key, void **out, unsigned int *outSize)
{
  unsigned char *rec;
  void *buf;
  int hr;

  hr = 0;
  fn_82E50F00(self + 4, 1);
  rec = fn_82E52428(self, key);
  if (rec != 0) {
    if (*(unsigned short *)rec == 0x1011) {
      if (outSize != 0) {
        *outSize = *(unsigned int *)(rec + 8);
      }
      buf = fn_82E4FE08(*(unsigned int *)(rec + 8));
      *out = buf;
      if (buf == 0) {
        hr = 0x8007000e;
      } else {
        memcpy(buf, *(void **)(rec + 0xc), *(unsigned int *)(rec + 8));
      }
    } else {
      hr = 0xc00d36bd;
    }
  } else {
    hr = 0xc00d36e6;
  }
  fn_82E51028(self + 4, 1);
  return hr;
}
