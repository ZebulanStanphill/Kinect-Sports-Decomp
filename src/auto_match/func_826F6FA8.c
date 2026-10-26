typedef struct { int k; int v; } P;
typedef struct { char pad[0x5c]; P *items; unsigned int n; } X;
int fn_826F6FA8(X *p, int k)
{
  unsigned int i;
  for (i = 0; i < p->n; i++)
    if (p->items[i].k == k) return p->items[i].v;
  return 0;
}
