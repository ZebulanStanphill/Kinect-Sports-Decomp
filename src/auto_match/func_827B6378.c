extern unsigned int *auStack_20;
extern void *fn_8267BED0(void *, int, unsigned *);


typedef struct Elem_827B6378 { unsigned v[9]; } Elem_827B6378;
typedef struct Block_827B6378 {
  Elem_827B6378 e[0x7f];
  struct Block_827B6378 *next;
} Block_827B6378;
typedef struct Pool_827B6378 {
  Block_827B6378 *head;
  Block_827B6378 *cur;
  unsigned used;
  Elem_827B6378 *freelist;
  void *heap;
} Pool_827B6378;

Elem_827B6378 *fn_827B6378(Pool_827B6378 *p)
{
  Elem_827B6378 *r;
  unsigned n;
  int k;
  unsigned id[4];
  Block_827B6378 *b;

  r = p->freelist;
  if (r != 0) {
    p->freelist = *(Elem_827B6378 **)r;
  } else {
    n = p->used;
    if (n < 0x7f) {
      k = n + 1;
      r = &p->cur->e[n];
    } else {
      id[0] = 0xc3;
      b = (Block_827B6378 *)fn_8267BED0(p->heap, 0x11e0, id);
      b->next = 0;
      if (p->cur != 0) {
        p->cur->next = b;
      } else {
        p->head = b;
      }
      r = (Elem_827B6378 *)b;
      p->cur = b;
      k = 1;
    }
    p->used = k;
  }
  return r;
}
