typedef struct { int pad[3]; unsigned int key; } Node_8302BB20;
extern char *lbl_832642E0;
extern void fn_83015E68(void *table, Node_8302BB20 *node);

void fn_8302BB20(Node_8302BB20 *node)
{
  if (node->key == 0) {
    return;
  }
  fn_83015E68(lbl_832642E0 + 0x998, node);
}
