typedef struct Node_83031598 { struct Node_83031598 *next; int a[27]; } Node_83031598;
typedef struct {
  Node_83031598 *f0;
  int f4;
  Node_83031598 *head;
  unsigned count;
  unsigned used;
  int f14;
  Node_83031598 *base;
  void *alloc;
} Pool_83031598;
extern void fn_830133B8(Pool_83031598 *);
extern void fn_82FA5190(void *, void *);

int fn_83031598(Pool_83031598 *p)
{
  if (p->used > 0) {
    Node_83031598 *n;
    unsigned i;
    fn_830133B8(p);
    n = p->head;
    while (n != 0) {
      Node_83031598 *next = n->next;
      unsigned char outside;
      if (n < p->base || n >= p->base + p->count) outside = 1; else outside = 0;
      if (outside) fn_82FA5190(p->alloc, n);
      n = next;
    }
    if (p->base != 0) {
      for (i = 0; i < p->count; i++) ;
      fn_82FA5190(p->alloc, p->base);
    }
    p->count = 0;
    p->used = 0;
    p->f0 = 0;
    p->f4 = 0;
  }
  return 1;
}
