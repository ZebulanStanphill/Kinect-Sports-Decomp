typedef struct Node_82A26800 { struct Node_82A26800 *next; unsigned int off; unsigned int size; } Node_82A26800;
typedef struct { char pad[0x4c]; Node_82A26800 *freelist; } Alloc_82A26800;
typedef struct {
  char pad0[0x18];
  Alloc_82A26800 *alloc;
  unsigned int maxsize;
  char pad1[0x34 - 0x20];
  int count;
  Node_82A26800 *head;
} Pool_82A26800;
extern Node_82A26800 *fn_82A26628(Pool_82A26800 *p);

void fn_82A26800(Pool_82A26800 *p, unsigned int off, unsigned int size)
{
  Node_82A26800 *prev = (Node_82A26800 *)&p->head;
  Node_82A26800 *n = p->head;
  unsigned int noff;
  for (;;) {
    if (n == 0)
      break;
    noff = n->off;
    if (noff > off) {
      if (off + size == noff) {
        n->off = off;
        size = size + n->size;
        n->size = size;
        if (size > p->maxsize)
          p->maxsize = size;
        return;
      }
      break;
    }
    if (n->size + noff == off) {
      size = n->size + size;
      prev->next = n->next;
      n->next = p->alloc->freelist;
      p->alloc->freelist = n;
      n->off = 0;
      n->size = 0;
      p->count = p->count - 1;
      off = noff;
      if (size > p->maxsize)
        p->maxsize = size;
    } else {
      prev = n;
    }
    n = prev->next;
  }
  n = fn_82A26628(p);
  if (n != 0) {
    n->off = off;
    n->size = size;
    n->next = prev->next;
    prev->next = n;
    p->count = p->count + 1;
    if (size >= p->maxsize)
      p->maxsize = size;
  }
}
