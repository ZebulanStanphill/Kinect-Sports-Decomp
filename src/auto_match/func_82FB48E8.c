typedef struct Node_82FB48E8 {
  char pad0[0xc];
  struct Node_82FB48E8 *parent;
  char pad10[0x64];
  int *flag;
} Node_82FB48E8;

int fn_82FB48E8(Node_82FB48E8 *node)
{
  Node_82FB48E8 *p = node;
  int v = *p->flag;
  while (1) {
    if (v != 0) return 1;
    p = p->parent;
    if (p == 0) break;
    v = *p->flag;
  }
  return 0;
}
