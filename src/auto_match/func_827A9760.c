extern void fn_827A9620(char *, unsigned, unsigned);

typedef struct {
  unsigned small : 1;
  unsigned on : 1;
  unsigned rest : 30;
  unsigned n;
  char pad[0x14];
  unsigned char sn;
} Cont_827A9760;

static __forceinline char *Data(Cont_827A9760 *c)
{
  if (c->small) return (char *)c + 0x1e;
  return (char *)c + 0x2a;
}
static __forceinline unsigned Count(Cont_827A9760 *c)
{
  if (c->small) return c->sn;
  return c->n;
}

void fn_827A9760(Cont_827A9760 *param_1)
{
  char *a, *c;
  unsigned b, d;
  if ((unsigned char)param_1->on) {
    a = Data(param_1);
    b = Count(param_1);
    c = Data(param_1);
    d = Count(param_1);
    fn_827A9620(a, b, (d * 8 + (unsigned)c + 3) & 0xfffffffc);
    if ((unsigned char)param_1->small) {
      param_1->sn = 0;
    } else {
      param_1->n = 0;
    }
  }
}
