typedef struct Node_func_8268E408 { char pad[8]; struct Node_func_8268E408 *parent; struct Node_func_8268E408 *kid[2]; } Node_func_8268E408;

void fn_8268E408(Node_func_8268E408 **root, Node_func_8268E408 *node, Node_func_8268E408 *repl)
{
  Node_func_8268E408 *parent = node->parent;
  if (parent != 0) {
    if (node == *root) {
      *root = repl;
    } else {
      parent->kid[parent->kid[0] != node] = repl;
    }
    if (repl != 0) {
      Node_func_8268E408 *k;
      repl->parent = parent;
      k = node->kid[0];
      if (k != 0) {
        repl->kid[0] = k;
        k->parent = repl;
      }
      k = node->kid[1];
      if (k != 0) {
        repl->kid[1] = k;
        k->parent = repl;
      }
    }
  }
  node->kid[1] = 0;
  node->kid[0] = 0;
  node->parent = 0;
}
