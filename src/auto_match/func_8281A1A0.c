typedef struct {
  char sub0[0x10];
  char sub1[0x10];
  int f20;
  int size;       /* 0x24 */
  int f28;
  short prev;   /* 0x2c */
  short next;   /* 0x2e */
  short link30; /* 0x30 */
  short link32; /* 0x32 */
  short link34; /* 0x34 */
  unsigned char flags;   /* 0x36 */
  char pad37[5];
  int f3c;
} Blk_8281A1A0;
typedef struct {
  char pad[0x7c];
  Blk_8281A1A0 *blocks;  /* 0x7c */
  short pad80;
  short freeCount;       /* 0x82 */
  short head;   /* 0x84 */
  char pad86[0x42];
  char list1[0x10];      /* 0xc8 */
  char list2[0x10];      /* 0xd8 */
} Pool_8281A1A0;
extern void fn_82819260(void);
extern void fn_82819288(void);
extern void fn_82819398(void *, short *, short);
extern void fn_8281C250(Pool_8281A1A0 *, int, int);
extern void fn_82822E38(void *);
extern void fn_82822F60(void *, void *, void (*)(void), int);
extern void fn_82823200(void *, void *);
extern void fn_828232B0(void *, void *);
extern void fn_828233A0(void *);

void fn_8281A1A0(Pool_8281A1A0 *pool, short idx)
{
  Blk_8281A1A0 *blocks = pool->blocks;
  Blk_8281A1A0 *b = blocks + idx;
  Blk_8281A1A0 *n;
  short nextIdx, prevIdx;
  short *head;
  short hv;
  int tmp[2];
  fn_8281C250(pool, b->f3c, b->f28);
  head = &pool->head;
  b->f3c = 0;
  b->flags = b->flags & 0xfe;
  if (pool->head != -1)
    blocks[pool->head].link32 = idx;
  hv = pool->head;
  b->link32 = -1;
  b->link30 = hv;
  pool->head = idx;
  fn_82822F60(pool->list1, b, fn_82819260, 0);
  fn_82822F60(pool->list2, b->sub1, fn_82819288, 0);
  fn_828233A0(pool->list2);
  nextIdx = b->next;
  prevIdx = b->prev;
  fn_82823200(b, tmp);
  fn_828232B0(b, tmp + 1);
  if (nextIdx != -1) {
    n = blocks + nextIdx;
    if ((n->flags & 1) == 0) {
      b->size = b->size + n->size;
      b->next = n->next;
      if (n->next != -1)
        blocks[n->next].prev = idx;
      pool->freeCount = pool->freeCount - 1;
      blocks[pool->freeCount].link34 = nextIdx;
      n->f20 = 0;
      n->size = 0;
      n->next = -1;
      n->prev = -1;
      fn_82819398(blocks, head, nextIdx);
      fn_82822E38(n);
      fn_82822E38(n->sub1);
      fn_828233A0(pool->list2);
    }
  }
  if (prevIdx != -1) {
    n = blocks + prevIdx;
    if ((blocks[prevIdx].flags & 1) == 0) {
      { int bs = b->size; int ns = blocks[prevIdx].size; blocks[prevIdx].size = bs + ns; }
      blocks[prevIdx].next = b->next;
      if (b->next != -1)
        blocks[b->next].prev = prevIdx;
      fn_82819398(blocks, head, idx);
      fn_82822E38(b);
      fn_82822E38(b->sub1);
      fn_828233A0(pool->list2);
      pool->freeCount = pool->freeCount - 1;
      blocks[pool->freeCount].link34 = idx;
      b->f20 = 0;
      b->size = 0;
      b->next = -1;
      b->prev = -1;
    }
  }
}




