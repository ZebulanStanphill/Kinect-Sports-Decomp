typedef struct Node_82594EC8 { struct Node_82594EC8 *left, *parent, *right; unsigned key; unsigned pad; char color; char isnil; } Node_82594EC8;
extern int fn_82381BC0(void *);
extern int fn_82825F40(void *, void *, void *, void *);
extern Node_82594EC8 *lbl_83296FF4[];

int fn_82594EC8(unsigned *key)
{
  Node_82594EC8 *head = lbl_83296FF4[1];
  Node_82594EC8 *lo = head;
  Node_82594EC8 *hi = head;
  Node_82594EC8 *root = head->parent;
  Node_82594EC8 *n = root;
  Node_82594EC8 *it;
  int count;
  while (n->isnil == 0) {
    if (n->key < *key) {
      n = n->right;
    } else {
      if (hi->isnil != 0 && *key < n->key) hi = n;
      lo = n;
      n = n->left;
    }
  }
  if (hi->isnil != 0) n = root; else n = hi->left;
  while (n->isnil == 0) {
    if (*key < n->key) { hi = n; n = n->left; }
    else n = n->right;
  }
  count = 0;
  it = lo;
  while (it != hi) {
    count++;
    fn_82381BC0(&it);
  }
  fn_82825F40(&it, lbl_83296FF4, lo, hi);
  return count;
}
