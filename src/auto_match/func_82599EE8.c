extern void XMemCpy(int a, int b);

int fn_82599EE8(unsigned int *p, int base, int c, int d)
{
  if (p[1] != 0) {
    XMemCpy(d, p[1] + base);
  }
  return 0;
}
