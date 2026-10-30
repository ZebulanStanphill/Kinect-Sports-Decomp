typedef struct E { int f0; int f4; int f8; int fc; int f10; int f14; int f18; int f1c; } E;
typedef struct S { int f0; E *items; int f8; int fc; unsigned int count; } S;
int fn_8245D278(S *p, unsigned int idx)
{
  unsigned int i;
  if (idx >= p->count) return 0;
  p->items[idx].f4 = 0; p->items[idx].fc = 0; p->items[idx].f10 = 0; p->items[idx].f14 = 0; p->items[idx].f18 = 0; p->items[idx].f1c = 0;
  for (i = 0; i < p->count; i++) {
      if (i == idx) {
        p->items[i].f8 = 0;
      } else if (p->items[i].fc != 0) {
        p->items[i].f8 = p->items[i].f8 + 1;
      }
  }
  return 1;
}
