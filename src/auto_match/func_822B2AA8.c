extern unsigned int fn_822B26F8(unsigned int, int, unsigned int);

unsigned char fn_822B2AA8(unsigned int *p, unsigned int x)
{
  unsigned int obj = p[2] + 0x84;
  unsigned int a = fn_822B26F8(obj, 0, x);
  unsigned char ok;

  fn_822B26F8(obj, 1, x);
  if (fn_822B26F8(obj, 2, x))
    ok = 1;
  else
    ok = 0;
  return ok && a == p[1];
}
