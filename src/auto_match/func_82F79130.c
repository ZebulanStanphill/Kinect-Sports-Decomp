extern int *_errno(void);
extern double fn_82F79028(int, int, double, double, double, int);
extern int _ctrlfp(int, unsigned int);
extern double lbl_82005710;
extern int lbl_831BC2A4;

double fn_82F79130(int a, int b, int c, double x)
{
  if (lbl_831BC2A4 == 0) {
    x = fn_82F79028(1, a, x, lbl_82005710, x, c);
  } else {
    *_errno() = 0x21;
    _ctrlfp(c, 0xc007feff);
  }
  return x;
}
