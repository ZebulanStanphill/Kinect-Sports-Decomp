typedef struct Node_82F564F0 {
  struct Node_82F564F0 *left;
  struct Node_82F564F0 *parent;
  struct Node_82F564F0 *right;
  __int64 value[7]; /* 8-aligned 0x38-byte value at 0x10 */
  char color;
  char isnil;
} Node_82F564F0;

typedef struct Tree_82F564F0 {
  int alloc;
  Node_82F564F0 *head;
  unsigned int size;
} Tree_82F564F0;

extern void *fn_825B1970(unsigned int size);

Node_82F564F0 *fn_82F564F0(Tree_82F564F0 *tree)
{
  Node_82F564F0 *node = (Node_82F564F0 *)fn_825B1970(sizeof(Node_82F564F0));
  node->left = tree->head;
  node->parent = tree->head;
  node->right = tree->head;
  node->color = 0;
  node->isnil = 0;
  return node;
}
