typedef struct { unsigned base; unsigned idx; } Cur_82D2ED10;
extern void fn_82D2E9B8(int, Cur_82D2ED10 *, char *);

void fn_82D2ED10(int a, Cur_82D2ED10 *c, char *p)
{
  int i;
  unsigned u;
  for (i = 0; i < 2; i++) {
    if (*p != 0) fn_82D2E9B8(a, c, p + 4);
    u = *(unsigned *)(c->base + (c->idx + 5) * 4);
    if ((u & 0xfffffffc) == 0) break;
    c->idx = u & 3;
    c->base = (u >> 2) * 4;
    p += 0x20;
  }
}
