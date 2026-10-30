typedef struct N_82496720 { struct N_82496720 *next; int pad[3]; int key; } N_82496720;
typedef struct B_82496720 { N_82496720 *first; N_82496720 *last; } B_82496720;
typedef struct M_82496720 { char pad[4]; N_82496720 *end; char pad8[8]; B_82496720 *tab; } M_82496720;
extern unsigned int fn_824973B0(M_82496720 *, int *);

N_82496720 **fn_82496720(N_82496720 **out, M_82496720 *m, int *key)
{
  B_82496720 *b, *tab;
  unsigned int idx;
  N_82496720 *p, *stop, *end, *first;
  idx = fn_824973B0(m, key);
  b = &m->tab[idx];
  end = m->end;
  first = b->first;
  p = first;
  for (; p != (first == end ? end : b->last->next); p = p->next) {
    if (p->key == *key) {
      *out = p;
      return out;
    }
  }
  *out = end;
  return out;
}
