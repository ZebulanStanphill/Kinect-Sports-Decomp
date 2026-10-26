char *fn_82D018D0(char *p, unsigned int n)
{
  if (n <= 0x10) {
    return p + 0x10;
  }
  return p + n;
}
