typedef struct { unsigned key; int *val; } Ent;
typedef struct { int a; Ent *first; Ent *last; } Map;
static int **sel(Ent *e, int ok) { return ok ? &e->val : 0; }
int fn_82FF6450(Map *m, unsigned k, int v)
{
  Ent *end = m->last; Ent *e = m->first;
  int **p;
  int d;
  while (e != end && e->key != k) e++;
  d = (unsigned)end - (unsigned)e;
  p = sel(e, d != 0);
  if (p != 0) { (*p)[1] = v; return 1; }
  return 0x14;
}
