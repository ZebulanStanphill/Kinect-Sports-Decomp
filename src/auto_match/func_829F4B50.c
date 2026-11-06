typedef struct { unsigned f0; unsigned f4; } Ds;
extern void fn_8263C7D8(void *, int, void *, int, int);
extern void fn_8263C620(void *, int);
extern void fn_829F4980(unsigned, int, unsigned, int, int, char *, void *);
int fn_829F4B50(void *a, void *b, int idx, char *base, void *extra, Ds *p6, Ds *p7)
{
  Ds buf1[1], buf2[1];
  int w, h;
  unsigned s7, s6;
  if (a == 0 || b == 0 || idx < 0 || idx >= 6) return 0x80070057;
  if (p6 == 0) {
    fn_8263C7D8(a, 0, buf1, 0, 0x10);
    p6 = buf1;
  }
  if (p7 == 0) {
    fn_8263C7D8(b, 0, buf2, 0, 0x10);
    p7 = buf2;
  }
  w = p7->f0 >> 1;
  s7 = p7->f4;
  h = p6->f0 >> 1;
  s6 = p6->f4;
  if (w >= 0 && h >= 0 && s7 != 0 && s6 != 0) {
    fn_829F4980(s7, w, s6, h, idx + 1, base + idx * 0x1c0 + 0x50, extra);
    fn_8263C620(a, 0);
    fn_8263C620(b, 0);
    return 0;
  }
  fn_8263C620(a, 0);
  fn_8263C620(b, 0);
  return 0x80004005;
}
