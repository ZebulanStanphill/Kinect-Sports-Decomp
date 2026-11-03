extern int fn_82CBA440(int, char *, unsigned, char *, unsigned, int, int, int);
void fn_82CBB580(int a, char *b, unsigned c, char *d, unsigned e, int f, int g, int h)
{
  fn_82CBA440(a, b, c, d, e, f, g, h);
  b += 8;
  fn_82CBA440(a, b, c, d + 8, e, f, g, h);
  b += c * 8;
  d += e * 8;
  fn_82CBA440(a, b, c, d + 8, e, f, g, h);
  fn_82CBA440(a, b - 8, c, d, e, f, g, h);
}
