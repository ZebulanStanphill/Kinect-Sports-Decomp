extern void fn_829ECE40(int, int *, int, int);
extern void fn_829ECEE8(int, int *, int, int);
extern void fn_829ED760(int, int *, int, int, int);
extern void fn_829ED8C0(int, int *, int, int);

void fn_829EDA68(int a, unsigned kind, int *buf, int n, int x, int y)
{
  int half;

  switch (kind) {
  case 0:
    fn_829ECE40(a, buf, n, x);
    break;
  case 10:
    fn_829ED8C0(a, buf, n, x);
    break;
  case 4:
    fn_829ED760(a, buf, n, x, y);
    break;
  case 0xb:
    half = n / 2;
    fn_829ED760(a, buf, half, x, y);
    fn_829ED760(a, buf + half, half, x, y);
    break;
  default:
    fn_829ECEE8(a, buf, n, x);
    break;
  }
}
