typedef struct Edge_82AF5350 { struct Node_82AF5350 *node; struct Edge_82AF5350 *next; } Edge_82AF5350;
typedef struct Node_82AF5350 {
  unsigned f0; int f4; unsigned f8; int fc; int f10; Edge_82AF5350 *edges; struct Node_82AF5350 *f18;
} Node_82AF5350;
unsigned char fn_82AF5350(void *ctx, Node_82AF5350 *n0, Node_82AF5350 *t)
{
  Edge_82AF5350 *e;
  Node_82AF5350 *n = n0;
  unsigned char r;
  if (n == t) return 1;
  if ((n->f8 & 0x8000) == 0) {
      e = n->edges;
      n->f8 = n->f8 | 0x8000;
      for (; e != 0; e = e->next) {
        if (fn_82AF5350(ctx, e->node, t) != 0) return 1;
      }
      if ((n->f0 & 0x1fffe000) == 0) {
        if (fn_82AF5350(ctx, n->f18, t) != 0) return 1;
      }
  }
  return 0;
}
