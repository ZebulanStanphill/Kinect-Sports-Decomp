extern void fn_82A88D40(void *s);
extern unsigned char fn_82A88398(int a, int b, void *s);
extern unsigned char fn_82A88FF0(int a, int b, void *s, int c, int d, int e);

unsigned char fn_82A898C8(int a, int b, int c, int d, int e)
{
  char s[128];

  fn_82A88D40(s);
  return fn_82A88398(a, b, s) && fn_82A88FF0(a, b, s, c, d, e);
}
