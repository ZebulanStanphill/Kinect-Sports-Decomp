extern unsigned int lbl_83264218;
typedef struct Node_82FA5BC0 { int pad[2]; struct Node_82FA5BC0 *prev; struct Node_82FA5BC0 *next; } Node_82FA5BC0;
void fn_82FA5BC0(unsigned *tbl, Node_82FA5BC0 *node, unsigned a, unsigned b)
{
  Node_82FA5BC0 *nx = node->next;
  Node_82FA5BC0 *pv = node->prev;
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
