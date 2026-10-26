extern int fn_8246F718(int a, const char *s, int c, int d);

int fn_82471998(int *p, int unused, const char *s, int c, int d)
{
  int h = p[1];
  int ok = s && *s;
  if (ok) {
    fn_8246F718(h, s, c, d);
  }
  return 0;
}
