typedef struct Link_82AF7650 {
  unsigned int prev;
  unsigned int next;
} Link_82AF7650;

typedef struct List_82AF7650 {
  int unk0;
  unsigned int head;
  void *begin;
  void *end;
} List_82AF7650;

typedef struct Pool_82AF7650 {
  char pad[0x2c];
  unsigned int *free;
} Pool_82AF7650;

void fn_82AF7650(List_82AF7650 *self)
{
  unsigned int head;
  unsigned int *node;
  Link_82AF7650 *link;
  unsigned int next;
  Pool_82AF7650 *pool;

  self->begin = 0;
  self->end = 0;
  for (;;) {
    head = self->head;
    node = (unsigned int *)((head & 1) == 0 ? head : 0);
    link = (Link_82AF7650 *)((unsigned int)node & ~1u);
    next = link->next;
    if ((next & 1) != 0 || next == 0) {
      return;
    }
    *(unsigned int *)(link->next & ~1u) = link->prev;
    *(unsigned int *)(link->prev & ~1u) = link->next;
    pool = *(Pool_82AF7650 **)((unsigned int)self & ~0xfffu);
    *node = (unsigned int)pool->free;
    pool->free = node;
  }
}
