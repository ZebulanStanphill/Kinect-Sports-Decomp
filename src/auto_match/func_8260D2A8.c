typedef struct { int v; char d[0x18]; } S_8260D2A8;

extern void fn_82811400(void *p, int n);
extern void fn_8256D798(void *o, int a, int b);
extern void fn_8256DA00(void *o, void *src, int a, int b);
extern void *memcpy(void *d, const void *s, unsigned int n);

void *fn_8260D2A8(unsigned char *o, unsigned char *src)
{
  S_8260D2A8 tmp;
  unsigned char *s = src + 0x18;
  unsigned char *t;

  fn_82811400(tmp.d, 0x10);
  tmp.v = *(int *)s;
  memcpy(tmp.d, s + 4, 0x18);
  t = o + 0x18;
  fn_82811400(t + 4, 0x10);
  *(int *)t = tmp.v;
  memcpy(t + 4, tmp.d, 0x18);
  fn_8256D798(o, 0, 0);
  fn_8256DA00(o, src, 0, -1);
  return o;
}
