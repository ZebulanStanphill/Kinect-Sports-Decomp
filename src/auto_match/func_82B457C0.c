typedef struct Node_82B457C0 {
  int unknown0;
  int kind;
  struct Node_82B457C0 *inner;
  void *extra;
} Node_82B457C0;

extern int fn_82B45740(void *self, Node_82B457C0 *node, int *count, int *type);

/* Skips wrapper nodes (kind 1) that carry nothing extra, then asks fn_82B45740. */
int fn_82B457C0(void *self, Node_82B457C0 *node, int *count, int *type)
{
  while (node->kind == 1) {
    if (node->extra != 0) {
      return 0;
    }
    node = node->inner;
  }
  return fn_82B45740(self, node, count, type);
}
