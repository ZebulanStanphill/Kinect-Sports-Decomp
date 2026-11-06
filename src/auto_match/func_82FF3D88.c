typedef struct Pool_82FF3D88 Pool_82FF3D88;
typedef struct Node_82FF3D88 { struct Node_82FF3D88 *next; int w[4]; } Node_82FF3D88;
struct Pool_82FF3D88 {
  void *head;
  int f4;
  Node_82FF3D88 *chunks;
  unsigned count;
  unsigned used;
  int f14;
  Node_82FF3D88 *base;
  void *heap;
};
extern void fn_82FA5190(void *, void *);
extern void fn_82FF3B98(Pool_82FF3D88 *, void *, int);

static int notNull(void *p) { if (p) return 1; return 0; }

int fn_82FF3D88(Pool_82FF3D88 *p)
{
  Node_82FF3D88 *n;
  Node_82FF3D88 *next;
  unsigned i;
  unsigned char out;

  if (p->used > 0) {
    while (notNull(p->head)) {
      fn_82FF3B98(p, p->head, 0);
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
