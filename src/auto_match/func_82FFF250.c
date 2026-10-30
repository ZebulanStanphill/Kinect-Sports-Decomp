typedef struct Node_82FFF250 { struct Node_82FFF250 *next; int f4, f8, fc; void *f10; void *f14; void *f18; } Node_82FFF250;
typedef struct { void *alloc; Node_82FFF250 *bucket[0xc1]; int count; } Tab_82FFF250;
extern void fn_82FA5190(void *, void *);
extern void *lbl_831BC768;

void fn_82FFF250(Tab_82FFF250 *t, int idx, Node_82FFF250 *n, Node_82FFF250 *prev)
{
  if (prev != 0) {
    prev->next = n->next;
  } else {
    t->bucket[idx] = n->next;
  }
  if (n->f10 != 0) {
    n->f14 = n->f10;
    fn_82FA5190(lbl_831BC768, n->f10);
    n->f10 = 0;
    n->f14 = 0;
    n->f18 = 0;
  }
  fn_82FA5190(t->alloc, n);
  t->count = t->count - 1;
}
