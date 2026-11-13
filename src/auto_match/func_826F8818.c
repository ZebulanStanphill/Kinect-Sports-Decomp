extern void fn_8267BE38(int *);

int *fn_826F8818(int *a, int *b)
{
  int rb = *b;
  int *ra;
  if (rb != 0) {
    *(int *)rb = *(int *)rb + 1;
  }
  ra = (int *)*a;
  if (ra != 0) {
    if (--*ra == 0) fn_8267BE38(ra);
  }
  *a = *b;
  return a;
}
