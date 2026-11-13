typedef struct Proxy_823BABB0 {
  struct Deque_823BABB0 *cont;
  void *firstiter;
} Proxy_823BABB0;

typedef struct Deque_823BABB0 {
  Proxy_823BABB0 *proxy;
  void *map;
  unsigned int mapsize;
  unsigned int off;
  unsigned int size;
} Deque_823BABB0;

typedef struct It_823BABB0 {
  Proxy_823BABB0 *proxy;
  void *nextiter;
  unsigned int off;
} It_823BABB0;

extern void fn_825ACAC8(void *p);
extern void fn_823BA248(Deque_823BABB0 *, It_823BABB0 *, It_823BABB0 *, It_823BABB0 *);

static __forceinline void Adopt_823BABB0(It_823BABB0 *it, const Deque_823BABB0 *parent)
{
  if (parent != 0)
    it->proxy = parent->proxy;
}

static __forceinline void Copy_823BABB0(It_823BABB0 *it, const It_823BABB0 *right)
{
  it->proxy = 0;
  it->nextiter = 0;
  if (it->proxy != right->proxy)
    Adopt_823BABB0(it, right->proxy->cont);
  it->off = right->off;
}

Deque_823BABB0 *fn_823BABB0(Deque_823BABB0 *self, const Deque_823BABB0 *right)
{
  It_823BABB0 where, first, last, begin;
  fn_825ACAC8(self);
  last.proxy = right->proxy;
  last.nextiter = 0;
  last.off = right->off + right->size;
  first.proxy = right->proxy;
  first.nextiter = 0;
  first.off = right->off;
  begin.proxy = self->proxy;
  begin.nextiter = 0;
  begin.off = self->off;
  Copy_823BABB0(&where, &begin);
  fn_823BA248(self, &where, &first, &last);
  return self;
}
