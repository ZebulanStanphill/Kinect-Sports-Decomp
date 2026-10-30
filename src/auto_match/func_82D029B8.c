struct Alloc_82D029B8;
typedef struct AllocVt_82D029B8 {
  int pad[4];
  void (*free)(struct Alloc_82D029B8 *, void *, unsigned int);
} AllocVt_82D029B8;
typedef struct Alloc_82D029B8 {
  AllocVt_82D029B8 *vt;
} Alloc_82D029B8;
typedef struct Node_82D029B8 {
  struct Node_82D029B8 *next;
  struct Node_82D029B8 *prev;
  int pad;
  unsigned int size;
} Node_82D029B8;
typedef struct Cont_82D029B8 {
  int pad0[2];
  int f8;
  int fc;
  int *f10;
  int b[0x21];
  Alloc_82D029B8 *alloc;
  int f9c;
  int fa0;
  Node_82D029B8 head;
  int pad1[2];
  int fbc;
  int fc0;
} Cont_82D029B8;

void fn_82D029B8(Cont_82D029B8 *p)
{
  Node_82D029B8 *end = &p->head;
  Node_82D029B8 *n = p->head.prev;
  int i;
  while (n != end) {
    Node_82D029B8 *next = n->prev;
    p->alloc->vt->free(p->alloc, n, n->size);
    n = next;
  }
  p->fc0 = 0;
  p->fbc = 0;
  p->f8 = 0;
  p->fc = 0;
  for (i = 0; i < 0x20; i++) p->b[i + 1] = 0;
  p->head.prev = end;
  end->next = end;
  p->fa0 = 3;
  p->f10 = &p->f9c;
  p->f9c = 0;
  p->b[0] = 0;
}
