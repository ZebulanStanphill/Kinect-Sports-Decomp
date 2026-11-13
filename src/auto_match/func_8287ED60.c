typedef struct Proxy_8287ED60 {
  struct Deque_8287ED60 *cont;
  void *firstiter;
} Proxy_8287ED60;

typedef struct Deque_8287ED60 {
  Proxy_8287ED60 *proxy;
  void *map;
  unsigned int mapsize;
  unsigned int off;
  unsigned int size;
} Deque_8287ED60;

typedef struct It_8287ED60 {
  Proxy_8287ED60 *proxy;
  void *nextiter;
  unsigned int off;
} It_8287ED60;

extern void fn_825ACAC8(void *self, void *alloc);
extern void fn_8287EC98(Deque_8287ED60 *, It_8287ED60 *, It_8287ED60 *, It_8287ED60 *);

static __forceinline void Adopt_8287ED60(It_8287ED60 *it, const Deque_8287ED60 *parent)
{
  if (parent != 0)
    it->proxy = parent->proxy;
}

static __forceinline void Copy_8287ED60(It_8287ED60 *it, const It_8287ED60 *right)
{
  it->proxy = 0;
  it->nextiter = 0;
  if (it->proxy != right->proxy)
    Adopt_8287ED60(it, right->proxy->cont);
  it->off = right->off;
}

/* deque copy constructor: construct empty, then insert(begin(), right.begin(), right.end()) */
Deque_8287ED60 *fn_8287ED60(Deque_8287ED60 *self, const Deque_8287ED60 *right)
{
  char al;
  It_8287ED60 where, first, last, begin;
  fn_825ACAC8(self, &al);
  last.proxy = right->proxy;
  last.nextiter = 0;
  last.off = right->off + right->size;
  first.proxy = right->proxy;
  first.nextiter = 0;
  first.off = right->off;
  begin.proxy = self->proxy;
  begin.nextiter = 0;
  begin.off = self->off;
  Copy_8287ED60(&where, &begin);
  fn_8287EC98(self, &where, &first, &last);
  return self;
}
