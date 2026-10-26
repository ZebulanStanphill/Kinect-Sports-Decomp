typedef struct { int a, b; } Pair;

void fn_826EF250(Pair *out, char *p)
{
  int t[2];
  t[0] = *(int *)(p + 0x14);
  t[1] = *(int *)(p + 0x18);
  out->a = t[0];
  out->b = t[1];
}
