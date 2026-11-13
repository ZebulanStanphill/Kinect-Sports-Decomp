extern unsigned int lbl_83264218;
extern unsigned int _CountLeadingZeros(unsigned int);
typedef struct Node_82FA5CA0 { int pad; unsigned int size; struct Node_82FA5CA0 *prev; struct Node_82FA5CA0 *next; } Node_82FA5CA0;

static __forceinline void Remove_82FA5CA0(unsigned *tbl, Node_82FA5CA0 *node, unsigned a, unsigned b)
{
  Node_82FA5CA0 *nx = node->next;
  Node_82FA5CA0 *pv = node->prev;
  unsigned m;
  pv->next = nx;
  nx->prev = pv;
  if (tbl[a * 0x20 + b + 0x19] != (unsigned)node) return;
  tbl[a * 0x20 + b + 0x19] = (unsigned)pv;
  if ((unsigned)pv != (unsigned)&lbl_83264218) return;
  m = tbl[a + 1] & ~(1 << b);
  tbl[a + 1] = m;
  if (m != 0) return;
  tbl[0] = tbl[0] & ~(1 << a);
}

void fn_82FA5CA0(unsigned *tbl, Node_82FA5CA0 *node)
{
  unsigned size = node->size & ~3;
  unsigned fl, sl;
  if (size < 0x80) {
    fl = 0;
    sl = size >> 2;
  } else {
    fl = 31 - _CountLeadingZeros(size);
    sl = (size >> (fl - 5)) ^ 0x20;
    fl -= 6;
  }
  Remove_82FA5CA0(tbl, node, fl, sl);
}
