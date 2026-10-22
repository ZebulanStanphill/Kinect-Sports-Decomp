typedef unsigned int uint;
extern uint fn_822B26F8(uint, int, uint);

unsigned char fn_822B2AA8(uint *p, uint x)
{
  uint obj = p[2] + 0x84;
  uint a = fn_822B26F8(obj, 0, x);
  unsigned char ok;

  fn_822B26F8(obj, 1, x);
  if (fn_822B26F8(obj, 2, x))
    ok = 1;
  else
    ok = 0;
  return ok && a == p[1];
}
