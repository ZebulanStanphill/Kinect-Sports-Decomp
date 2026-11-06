typedef struct { unsigned key; int *val; } Ent;
typedef struct { char pad[0x88]; Ent *first; Ent *last; } Map;
static int *sel(Ent *e, int ok) { return ok ? (int *)&e->val : 0; }
int fn_82FB1410(Map *m, unsigned k)
{
  Ent *end = m->last; Ent *e = m->first;
  int *p;
  int d;
  while (e != end && e->key != k) e++;
  d = (unsigned)end - (unsigned)e;
  p = sel(e, d != 0);
  if (p != 0) { return *p; }
  return 0;
}
