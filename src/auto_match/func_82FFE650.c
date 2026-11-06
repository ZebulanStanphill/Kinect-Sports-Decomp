typedef struct Pool_82FFE650 Pool_82FFE650;
typedef struct Node_82FFE650 { struct Node_82FFE650 *next; int w[9]; } Node_82FFE650;
struct Pool_82FFE650 {
  void *head;
  int f4;
  Node_82FFE650 *chunks;
  unsigned count;
  unsigned used;
  int f14;
  Node_82FFE650 *base;
  void *heap;
};
extern void fn_82FA5190(void *, void *);
extern void fn_82FFE268(Pool_82FFE650 *, void *, int);

static int notNull(void *p) { if (p) return 1; return 0; }

int fn_82FFE650(Pool_82FFE650 *p)
{
  Node_82FFE650 *n;
  Node_82FFE650 *next;
  unsigned i;
  unsigned char out;

  if (p->used > 0) {
    while (notNull(p->head)) {
      fn_82FFE268(p, p->head, 0);
    }
    n = p->chunks;
    while (n != 0) {
      next = n->next;
      if (n < p->base || n >= p->base + p->count) out = 1; else out = 0;
      if (out) fn_82FA5190(p->heap, n);
      n = next;
    }
    if (p->base != 0) {
      for (i = 0; i < p->count; i++)
        ;
      fn_82FA5190(p->heap, p->base);
    }
    p->count = 0;
    p->used = 0;
    p->head = 0;
    p->f4 = 0;
  }
  return 1;
}
