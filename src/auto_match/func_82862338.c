typedef struct {
  char pad[0x34];
  char *a;
  unsigned short n;
  char *b;
} S;

char *fn_82862338(S *s, int base, int i)
{
  if (i < s->n) {
    return s->a + i * 0x2c;
  }
  return (char *)(*(int *)(s->b + (i - s->n) * 0x14 + 0xc) + base);
}
