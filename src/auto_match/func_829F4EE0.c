extern int fn_829F5FF8(int, int, int, int, int, unsigned, int, unsigned);
extern unsigned lbl_83218C30;
int fn_829F4EE0(int a, int b, int c, unsigned d, unsigned e)
{
  int hr = 0;
  if (d == 0 || e == 0 || lbl_83218C30 == 0) {
    hr = 0x57;
  } else {
    fn_829F5FF8(lbl_83218C30, a, b, c, 2, d, 0, e);
  }
  return hr;
}
