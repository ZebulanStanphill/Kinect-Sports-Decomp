typedef struct Fl_82ADD2D8 { unsigned :2; unsigned f:1; unsigned :15; unsigned g:11; unsigned :3; } Fl_82ADD2D8;
int fn_82ADD2D8(int *p1, int *p2)
{
  Fl_82ADD2D8 *f1 = (Fl_82ADD2D8 *)(*p1 + 0xc0);
  Fl_82ADD2D8 *f2 = (Fl_82ADD2D8 *)(*p2 + 0xc0);
  int d = f2->f - f1->f;
  long long e;
  if (d != 0) return d;
  e = (long long)*(unsigned *)(*p2 + 0xc4) - (long long)*(unsigned *)(*p1 + 0xc4);
  if (e < 0) return -1;
  if (e > 0) return 1;
  return f2->g - f1->g;
}
