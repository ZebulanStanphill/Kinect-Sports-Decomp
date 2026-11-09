typedef struct N_825155F8 {
  struct N_825155F8 *left;
  struct N_825155F8 *parent;
  struct N_825155F8 *right;
  unsigned key;
  char pad[0x49 - 0x10];
  char isnil;
} N_825155F8;
typedef struct { int pad; N_825155F8 *head; } T_825155F8;
extern void fn_822509A0(N_825155F8 **);
extern void fn_825158E0(N_825155F8 **, T_825155F8 *, N_825155F8 *, N_825155F8 *);

void fn_825155F8(T_825155F8 *t, unsigned *key)
{
  N_825155F8 *lo;
  N_825155F8 *hi;
  N_825155F8 *p;
  N_825155F8 *it;

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
  it = lo;
  while (it != hi) {
    fn_822509A0(&it);
  }
  fn_825158E0(&it, t, lo, hi);
}
