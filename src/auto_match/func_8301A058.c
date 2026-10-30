typedef struct Node_8301A058 { struct Node_8301A058 *next; int a[1]; } Node_8301A058;
typedef struct {
  Node_8301A058 *f0;
  int f4;
  Node_8301A058 *head;
  unsigned count;
  unsigned used;
  int f14;
  Node_8301A058 *base;
  void *alloc;
} Pool_8301A058;
extern void fn_830133B8(Pool_8301A058 *);
extern void fn_82FA5190(void *, void *);

int fn_8301A058(Pool_8301A058 *p)
{
  if (p->used > 0) {
    Node_8301A058 *n;
    unsigned i;
    fn_830133B8(p);
    n = p->head;
    while (n != 0) {
      Node_8301A058 *next = n->next;
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
