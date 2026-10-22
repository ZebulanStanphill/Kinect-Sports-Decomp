#define F(T,o) (*(T *)((char *)p + (o)))

void fn_82E8D6A0(char *p)
{
  int max;
  int lim;

  F(int,0x1f54) = (int)(F(double,0x1f48) * (double)F(__int64,0x1e40));
  if (F(int,0x1f54) <= 0) {
    F(int,0x1f54) = F(int,0x1ecc);
  }
  if (F(int,0x1dac) == 5) {
    F(int,0x7774) = (int)(F(double,0x7768) * (double)F(__int64,0x1e40));
    if (F(int,0x7774) <= 0) {
      F(int,0x7774) = F(int,0x7770);
    }
  }
  max = F(int,0x1f40);
  lim = 0x7ffffffd - max;
  F(int,0x1f54) = F(int,0x1f54) < lim ? F(int,0x1f54) : lim;
  if (F(int,0x1dac) == 5) F(int,0x1f10) += F(int,0x7774); else F(int,0x1f10) += F(int,0x1f54);
  F(int,0x1f10) = F(int,0x1f10) < max ? F(int,0x1f10) : max;
  F(int,0x890) -= F(int,0x898);
  if (F(int,0x890) < 0) {
    F(int,0x890) = 0;
  }
}
