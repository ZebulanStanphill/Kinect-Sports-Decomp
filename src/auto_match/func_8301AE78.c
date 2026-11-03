typedef struct Pair_8301AE78 { int a, b; } Pair_8301AE78;
typedef struct Ent_8301AE78 { unsigned key; Pair_8301AE78 val; } Ent_8301AE78;
typedef struct Tab_8301AE78 { char pad[0x34]; Ent_8301AE78 *first; Ent_8301AE78 *last; } Tab_8301AE78;

static __forceinline Pair_8301AE78 *Value(unsigned ok, Ent_8301AE78 *e)
{
  return ok ? &e->val : 0;
}

void fn_8301AE78(Pair_8301AE78 *out, int unused, Tab_8301AE78 *t, unsigned key)
{
  Pair_8301AE78 z;
  Pair_8301AE78 *r;
  Ent_8301AE78 *e;
  int x, y;
  if (t != 0) {
    for (e = t->first; e != t->last && e->key != key; e++) {
    }
    r = Value(e != t->last, e);
    if (r != 0) {
      y = r->b;
      x = r->a;
      out->b = y;
      out->a = x;
      return;
    }
  }
  z.a = 0;
  z.b = 0;
  *out = z;
}
