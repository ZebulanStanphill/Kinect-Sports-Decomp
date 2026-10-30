typedef struct {
  int pad0;
  unsigned int w4;
  char data[0x7d0];
  int w7d8;
} Rec_829E0EE8;
extern Rec_829E0EE8 *fn_829E0C20(int, unsigned int);
extern int fn_829E0980(Rec_829E0EE8 *, int, int, int, int);
extern void fn_82A1DDC0(void *, void *, int);
int fn_829E0EE8(char *src, int p2, unsigned short *idx)
{
  Rec_829E0EE8 *r;
  int hr;
  r = fn_829E0C20(p2, *idx);
  if (r == 0) return 0x80004005;
  hr = fn_829E0980(r, 0x7dc, 0, 7, p2);
  if (hr < 0) return hr;
  *idx = (unsigned short)(r->w4 >> 17);
  fn_82A1DDC0(r->data, src, 2000);
  r->w7d8 = *(int *)(src + 2000);
  return 0;
}
