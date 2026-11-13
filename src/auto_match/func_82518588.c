typedef struct N_82518588 {
  struct N_82518588 *left;
  struct N_82518588 *parent;
  struct N_82518588 *right;
  int pad;
  unsigned key;
  char pad2[0x69 - 0x14];
  char isnil;
} N_82518588;
typedef struct { int pad; N_82518588 *head; } T_82518588;
extern void fn_825159C8(N_82518588 **);
extern void fn_825188C8(N_82518588 **, T_82518588 *, N_82518588 *, N_82518588 *);

int fn_82518588(T_82518588 *t, unsigned *key)
{
  N_82518588 *lo;
  N_82518588 *hi;
  N_82518588 *p;
  N_82518588 *it;
  int n;

  lo = t->head;
  hi = t->head;
  p = lo->parent;
  if (p->isnil == 0) {
    do {
      if (p->key < *key) {
        p = p->right;
      } else {
        if (hi->isnil != 0 && *key < p->key) hi = p;
        lo = p;
        p = p->left;
      }
    } while (p->isnil == 0);
  }
  if (hi->isnil != 0) {
    p = t->head->parent;
  } else {
    p = hi->left;
  }
  if (p->isnil == 0) {
    do {
      if (*key < p->key) {
        hi = p;
        p = p->left;
      } else {
        p = p->right;
      }
    } while (p->isnil == 0);
  }
  n = 0;
  it = lo;
  while (it != hi) {
    n++;
    fn_825159C8(&it);
  }
  fn_825188C8(&it, t, lo, hi);
  return n;
}
