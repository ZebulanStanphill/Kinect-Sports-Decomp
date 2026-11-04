extern int fn_828FA8D8();

unsigned int fn_82935BA0(int *p, unsigned int x)
{
  if (x != 0)
    return x;
  if (p[0xd] == 0) {
    fn_828FA8D8(*p, p + 4, 0, "internal error: production failed");
    p[0xd] = 1;
  }
  p[0xe] = 1;
  return 0;
}
