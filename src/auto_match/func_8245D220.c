typedef struct { int a, b, c, d, e, f, g, h; } E;
typedef struct { int x0; E *items; int x8, xc; unsigned int count; } S;
int fn_8245D220(S *s)
{
  unsigned int i;
  for (i = 0; i < s->count; i++) {
    if (s->items[i].d != 0 && s->items[i].g == 0) {
      return 1;
    }
  }
  return 0;
}
