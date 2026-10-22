extern void fn_82A88D40(void *s);
extern unsigned char fn_82A88080(int a, int b, void *s);
extern unsigned char fn_82A88550(int a, int b, void *s, int c, int d, int e);

unsigned char fn_82A88CC8(int a, int b, int c, int d, int e)
{
  char s[112];

  fn_82A88D40(s);
  return fn_82A88080(a, b, s) && fn_82A88550(a, b, s, c, d, e);
}
