extern void *memcpy(void *, const void *, unsigned int);
extern void fn_828EC900(void *);

typedef struct Bytes8_828ECFB8 {
    unsigned char b[8];
} Bytes8_828ECFB8;

void fn_828ECFB8(char *p, unsigned int a, const Bytes8_828ECFB8 *id, const void *key, const void *src, unsigned char b, unsigned char c)
{
  *(unsigned int *)(p + 0x1e4) = a;
  p[0x1e2] = 1;
  p[0x1e1] = 0;
  *(unsigned int *)(p + 0x224) = 2;
  *(Bytes8_828ECFB8 *)(p + 0x1e8) = *id;
  memcpy(p + 0x1f0, key, 0x10);
  memcpy(p + 0x200, src, 0x24);
  p[0x228] = b;
  *(unsigned int *)(p + 0x150) = 0x10;
  *(unsigned int *)(p + 0x154) = 0;
  p[0x229] = c;
  fn_828EC900(p);
}
