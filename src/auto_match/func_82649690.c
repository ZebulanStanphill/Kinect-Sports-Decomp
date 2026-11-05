typedef struct Ctx_82649690 {
  char pad0[0x30];
  unsigned *cur;
  int pad34;
  unsigned *end;
  char pad3c[0x2aa4 - 0x3c];
  unsigned state;
} Ctx_82649690;
extern unsigned *fn_82645110(Ctx_82649690 *);

void fn_82649690(Ctx_82649690 *c, unsigned v)
{
  unsigned *p;
  c->state = (v & 3) << 12 | (c->state & 0xffffcfff);
  p = c->cur;
  if (p > c->end)
    p = fn_82645110(c);
  *++p = 0x5c8;
  *++p = 0x20000;
  *++p = 0xf01;
  *++p = c->state;
  c->cur = p;
}
