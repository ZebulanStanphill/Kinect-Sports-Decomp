typedef struct Node_83031790 { struct Node_83031790 *next; int a; int b; int c; int d; } Node_83031790;
typedef struct {
  Node_83031790 *f0;
  int f4;
  Node_83031790 *head;
  unsigned count;
  unsigned used;
  int f14;
  Node_83031790 *base;
  void *alloc;
} Pool_83031790;
extern void fn_830133B8(Pool_83031790 *);
extern void fn_82FA5190(void *, void *);

int fn_83031790(Pool_83031790 *p)
{
  if (p->used > 0) {
    Node_83031790 *n;
    unsigned i;
    fn_830133B8(p);
    n = p->head;
    while (n != 0) {
      Node_83031790 *next = n->next;
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
