typedef struct O O;
typedef struct { void *f[6]; unsigned int (*get)(O *); } VT;
struct O { VT *vt; };
typedef struct { int pad[4]; O *items[7]; unsigned int count; } P;

O *fn_82BD6300(P *p, unsigned int v)
{
  unsigned int i;
  for (i = 0; i < p->count; i++) {
    if (v == p->items[i]->vt->get(p->items[i])) {
      return p->items[i];
    }
  }
  return 0;
}
