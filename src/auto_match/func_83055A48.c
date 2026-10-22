extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern unsigned int fn_82FA52E8(void *p);
extern unsigned char fn_83050858(void *m, unsigned int n);
extern void fn_830514A8(void *m);
extern void fn_83054338(void *q, void *node);
extern void fn_83055EC8(void *p);

typedef struct Node {
  int f0;
  int f4;
  unsigned int f8;
  unsigned int size;
  struct Node *next;
} Node;

typedef struct {
  char pad0[0x10];
  char cs[0x78 - 0x10];
  Node *head;
  char pad7c[0x8c - 0x7c];
  void *f8c;
} Pool;

typedef struct {
  char pad0[0x38];
  char cs[0x60 - 0x38];
  Pool *pool;
  char pad64[0x98 - 0x64];
  unsigned int avail;
  char q[4];
  Node *first;
  void *fa4;
} M;

unsigned int fn_83055A48(M *m)
{
  void *cs;
  unsigned int r;
  unsigned int size;
  Node *node;
  Pool *pool;

  cs = m->cs;
  RtlEnterCriticalSection(cs);
  if (m->fa4 == 0) {
    RtlLeaveCriticalSection(cs);
    return 0;
  }
  RtlEnterCriticalSection(m->pool->cs);
  r = fn_82FA52E8(m->pool->f8c);
  if (r == 0) {
    size = m->first->size;
    if (m->avail < size || fn_83050858(m, m->avail - size)) {
      fn_83055EC8(m->pool);
    } else {
      node = m->first;
      m->avail -= size;
      r = node->f8;
      fn_83054338(m->q, node);
      pool = m->pool;
      if (pool->head == 0) {
        pool->head = node;
        node->next = 0;
      } else {
        node->next = pool->head;
        pool->head = node;
      }
      fn_830514A8(m);
    }
  }
  RtlLeaveCriticalSection(m->pool->cs);
  RtlLeaveCriticalSection(cs);
  return r;
}
