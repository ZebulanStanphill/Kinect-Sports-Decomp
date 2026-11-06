typedef struct S_82AF8720 { int pad; unsigned int *cur; unsigned int cnt; } S_82AF8720;
unsigned int *fn_82AF8720(S_82AF8720 *s)
{
  unsigned int *p;
  unsigned int u;
  if (s->cnt == 0) {
    u = *(unsigned int *)((unsigned int)s->cur & 0xfffffffe);
    if (u & 1) p = 0; else p = (unsigned int *)((u & 0xfffffffe) - 4);
    s->cur = p;
    s->cnt = p[2];
  }
  s->cnt = s->cnt - 1;
  return s->cur + s->cnt + 4;
}
