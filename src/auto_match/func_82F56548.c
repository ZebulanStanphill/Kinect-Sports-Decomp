typedef struct Node_82F56548 {
  struct Node_82F56548 *left;
  struct Node_82F56548 *parent;
  struct Node_82F56548 *right;
  unsigned char value[0x14];
  char color;
  char isnil;
} Node_82F56548;

typedef struct Tree_82F56548 {
  int alloc;
  Node_82F56548 *head;
  unsigned int size;
} Tree_82F56548;

extern void *fn_825B1970(unsigned int size);

Node_82F56548 *fn_82F56548(Tree_82F56548 *tree)
{
  Node_82F56548 *node = (Node_82F56548 *)fn_825B1970(sizeof(Node_82F56548));
  node->left = tree->head;
  node->parent = tree->head;
  node->right = tree->head;
  node->color = 0;
  node->isnil = 0;
  return node;
}
