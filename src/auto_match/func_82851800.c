extern void *fn_82817B98(void *a, void *b);
typedef struct { char pad[0x20]; void *x; } S;

void fn_82851800(S *s, void *b, void **out)
{
  if (s != 0 && s->x != 0 && b != 0 && out != 0) {
    *out = fn_82817B98(s->x, b);
  }
}
