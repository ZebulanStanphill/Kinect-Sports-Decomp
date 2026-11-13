extern void fn_8305BE58(double t);
extern double lbl_82011630;

void fn_8305BD18(int *ticks, double scale)
{
  double t = (double)*ticks * scale;
  fn_8305BE58(t * lbl_82011630);
}
