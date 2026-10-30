void *memcpy(void *d, const void *s, unsigned int n);
extern void *fn_82E4FE08(unsigned int n);

typedef struct {
  unsigned short type;
  short pad;
  int r4;
  unsigned int size;
  void *data;
} Blob;

int fn_82E7E710(Blob *b, const void *src, unsigned int n)
{
  int hr = 0;
  void *p;
  b->type = 0x41;
  p = fn_82E4FE08(n);
  b->data = p;
  if (p == 0) {
    hr = 0x8007000e;
  } else {
    memcpy(p, src, n);
    b->size = n;
  }
  return hr;
}
