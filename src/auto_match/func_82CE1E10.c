
extern int fn_82CE08A0(int, void *);
extern int fn_82CE28C0(char *, unsigned int, unsigned int);
extern char lbl_8323A8F0[];
int fn_82CE1E10(unsigned int *p)
{
  int r;
  int hr;
  unsigned char buf[400];
  if (p == 0 || p[0] == 0 || p[1] == 0) return 0x57;
  r = fn_82CE08A0(2, buf);
  if (r != 0) return r;
  hr = fn_82CE28C0(lbl_8323A8F0, p[0], p[1]);
  return hr < 0 ? 0x65b : 0;
}
