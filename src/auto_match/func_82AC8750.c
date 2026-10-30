typedef struct { unsigned int pad0 : 4; unsigned int n : 3; unsigned int pad1 : 12; unsigned int v : 8; unsigned int pad2 : 5; } S;
unsigned int fn_82AC8750(unsigned int *p)
{
  S *s = (S *)p;
  unsigned int x = *p;
  unsigned int r = 0;
  unsigned int i;
  for (i = 0; i < s->n; i++)
    r |= 1 << ((s->v >> (i * 2)) & 3);
  return ((x >> 13) & 0xff0) | (r & 0xf);
}
