extern int fn_828FA8D8();

unsigned int fn_828FC540(int *p, unsigned int x)
{
  if (x != 0)
    return x;
  if (p[0x13] == 0) {
    fn_828FA8D8(*p, p + 4, 0, "internal error: production failed");
    p[0x13] = 1;
  }
  p[0x14] = 1;
  return 0;
}
