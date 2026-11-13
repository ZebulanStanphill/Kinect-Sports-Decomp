typedef struct Node_82EF10C8 { char d[8]; struct Node_82EF10C8 *next; } Node_82EF10C8;
typedef struct Block_82EF10C8 { struct Block_82EF10C8 *next; Node_82EF10C8 nodes[1]; } Block_82EF10C8;
typedef struct Pool_82EF10C8 { Node_82EF10C8 *free; Block_82EF10C8 *blocks; unsigned n; } Pool_82EF10C8;
extern int fn_82A2A360();
extern Block_82EF10C8 *fn_82A28568(int, int, unsigned);

int fn_82EF10C8(Pool_82EF10C8 *pool, Node_82EF10C8 **out)
{
  if (pool->free == 0) {
    Block_82EF10C8 *b;
    unsigned i;
    unsigned n = pool->n;
    Node_82EF10C8 *p;
    b = fn_82A28568(fn_82A2A360(), 0, (n - 1) * sizeof(Node_82EF10C8) + sizeof(Block_82EF10C8));
    if (b == 0) {
      return 0x8007000e;
    }
    i = 0;
    if (i < pool->n) {
      p = b->nodes;
      while (i < pool->n) {
        Node_82EF10C8 *q;
        if (p != 0) {
          p->next = 0;
          q = p;
        } else {
          q = 0;
        }
        i++;
        p++;
        q->next = pool->free;
        pool->free = q;
      }
    }
    b->next = pool->blocks;
    pool->blocks = b;
  }
  *out = pool->free;
  pool->free = pool->free->next;
  return 0;
}
