typedef struct E_82E05480 { void *p; int k1, k2; } E_82E05480;
extern void fn_82CE4040(void *);
extern void fn_82CE4118(void *);
static __forceinline E_82E05480 *At(E_82E05480 *first, int i) { return (E_82E05480 *)((char *)first + i * 0xc) - 1; }
static __forceinline char Less(E_82E05480 *a, E_82E05480 *b)
{
  if (a->k1 < b->k1 || (a->k1 == b->k1 && a->k2 < b->k2)) return 1;
  return 0;
}
void fn_82E05480(E_82E05480 *first, int hole, int n)
{
  E_82E05480 val;
  E_82E05480 *q, *c;
  int child;
  q = At(first, hole);
  if (q->p != 0) fn_82CE4040(q->p);
  val.p = q->p;
  val.k1 = q->k1;
  val.k2 = q->k2;
  while (hole <= n / 2) {
    child = hole * 2;
    if (child < n && Less(At(first, child), At(first, child + 1))) child++;
    c = At(first, child);
    if (!Less(&val, c)) break;
    q = At(first, hole);
    if (q != c) {
      void *p = c->p;
      if (p != 0) fn_82CE4040(p);
      if (q->p != 0) fn_82CE4118(q->p);
      q->p = p;
    }
    q->k1 = c->k1;
    q->k2 = c->k2;
    hole = child;
  }
  q = At(first, hole);
  if (q != &val) {
    void *p = val.p;
    if (p != 0) fn_82CE4040(p);
    if (q->p != 0) fn_82CE4118(q->p);
    q->p = p;
  }
  q->k1 = val.k1;
  q->k2 = val.k2;
  if (val.p != 0) fn_82CE4118(val.p);
}
