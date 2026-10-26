extern void *memcpy(void *dst, const void *src, unsigned int n);

typedef struct { unsigned short a; unsigned short flags; } Hdr;

int fn_82F33B20(Hdr *h, const void *src)
{
  if (h == 0 || (h->flags & 0x40) == 0) {
    return 0x80070057;
  }
  memcpy((unsigned char *)h - 0x10, src, 0x10);
  return 0;
}
