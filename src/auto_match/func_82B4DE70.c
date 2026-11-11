typedef struct {
  int result;
  unsigned char flag;
  char pad5[3];
  unsigned int refs;
  int a;
  int b;
  int c;
} Entry_82B4DE70;

typedef struct Block_82B4DE70 {
  unsigned int next;
  unsigned int prev;
  unsigned int count;
  unsigned int cap;
  Entry_82B4DE70 entries[1];
} Block_82B4DE70;

typedef struct {
  char pad0[8];
  int b;
  int a;
  int c;
  char pad14[4];
  unsigned int list[2];
  unsigned char flag;
} Obj_82B4DE70;

extern int fn_82AA6648(void *list, void *node, int size);

int fn_82B4DE70(Obj_82B4DE70 *self)
{
  unsigned int *list = self->list;
  Block_82B4DE70 *blk;
  Entry_82B4DE70 *top;
  Block_82B4DE70 *n;
  Block_82B4DE70 *l;
  int r;

  blk = (list[1] & 1) ? (Block_82B4DE70 *)0 : (Block_82B4DE70 *)((list[0] & ~1u) - 4);
  top = &blk->entries[blk->count - 1];
  self->a = top->a;
  self->b = top->b;
  self->c = top->c;
  self->flag = top->flag;
  if (top->refs != 0) {
    r = top->result;
    top->refs--;
  } else {
    r = top->result;
    n = (list[1] & 1) ? (Block_82B4DE70 *)0 : (Block_82B4DE70 *)((list[0] & ~1u) - 4);
    if (--n->count == 0) {
      l = (Block_82B4DE70 *)((unsigned int)n & ~1u);
      *(unsigned int *)(l->prev & ~1u) = l->next;
      *(unsigned int *)(l->next & ~1u) = l->prev;
      fn_82AA6648(list, n, n->cap * 0x18 + 0x10);
    }
  }
  return r;
}
