typedef struct Pool_8300C5C0 Pool_8300C5C0;
typedef struct Node_8300C5C0 { struct Node_8300C5C0 *next; int a, b, c, d, e; } Node_8300C5C0;
struct Pool_8300C5C0 {
  void *head;
  int f4;
  Node_8300C5C0 *chunks;
  unsigned count;
  unsigned used;
  int f14;
  Node_8300C5C0 *base;
  void *heap;
};
extern void fn_82FA5190(void *, void *);
extern void fn_8300BBC0(Pool_8300C5C0 *, void *, int);

static int notNull(void *p) { if (p) return 1; return 0; }

int fn_8300C5C0(Pool_8300C5C0 *p)
{
  Node_8300C5C0 *n;
  Node_8300C5C0 *next;
  unsigned i;
  unsigned char out;

  if (p->used > 0) {
    while (notNull(p->head)) {
      fn_8300BBC0(p, p->head, 0);
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
