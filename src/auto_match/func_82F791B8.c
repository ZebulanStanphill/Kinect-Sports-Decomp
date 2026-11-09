extern int *_errno(void);
extern double fn_82F79028(int, int, double, double, double, int);
extern int _ctrlfp(int, unsigned int);
extern int lbl_831BC2A4;

double fn_82F791B8(int a, int b, int c, int d, double x, double y)
{
  double r = x + y;
  if (lbl_831BC2A4 == 0) {
    r = fn_82F79028(1, a, x, y, r, d);
  } else {
    *_errno() = 0x21;
    _ctrlfp(d, 0xc007feff);
  }
  return r;
}
