typedef struct Node_82B85910 {
  char pad0[0x24];
  unsigned int parentLink;
  char pad28[8];
} Node_82B85910;

int fn_82B85910(Node_82B85910 *node, Node_82B85910 *target)
{
  Node_82B85910 *n = node;
  do {
    unsigned int link = ((Node_82B85910 *)((unsigned int)n & ~1u))->parentLink;
    if (link & 1)
      return 0;
    n = (Node_82B85910 *)((link & ~1u) - 0x28);
    if (n == 0)
      return 0;
  } while (n != target);
  return 1;
}
