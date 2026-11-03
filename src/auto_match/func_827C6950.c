typedef struct { char pad[0x14]; int a; int b; } Comp_827C6950;
typedef struct {
  char pad0[0xbc];
  unsigned int f_bc;
  char pad1[0xe4 - 0xc0];
  int f_e4;
  char pad2[0x100 - 0xe8];
  int cnt;
  int items[1];
} Ctx_827C6950;
typedef struct {
  char pad[0x15c];
  int *st;
} Ctx2_827C6950;

extern void fn_827C67E8(void *c, short *src, unsigned int a, unsigned int b, unsigned int c2);

int fn_827C6950(Ctx_827C6950 *c, short **src)
{
  unsigned int *st = *(unsigned int **)((char *)c + 0x15c);
  int n = 0;
  int j;
  unsigned int *p;
  int i;
  int idx;
  Comp_827C6950 *comp;
  int slot;

  if (c->f_bc != 0) {
    if (st[9] == 0) {
      j = 0;
      if (c->f_e4 > 0) {
        p = st + 4;
        do {
          j = j + 1;
          p = p + 1;
          *p = 0;
        } while (j < c->f_e4);
      }
      st[9] = c->f_bc;
    }
    st[9] = st[9] - 1;
  }
  i = 0;
  if (c->cnt > 0) {
    do {
      idx = c->items[i];
      slot = idx + 5;
      comp = *(Comp_827C6950 **)((char *)c + (idx + 0x3a) * 4);
      fn_827C67E8(c, src[i], st[slot], st[comp->a + 0x13], st[comp->b + 0x17]);
      st[slot] = *src[i];
      i = i + 1;
    } while (i < c->cnt);
  }
  return 1;
}
