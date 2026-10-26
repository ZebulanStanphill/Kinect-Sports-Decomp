typedef struct {
  char pad[0x110];
  unsigned int *buf;
  int n;
  int pad2;
  int idx;
} S;

int fn_829610C0(S *s)
{
  s->buf[s->idx] |= (s->n - s->idx - 1) << 24;
  return 0;
}
