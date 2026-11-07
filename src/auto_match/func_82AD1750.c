typedef struct Node_82AD1750 {
  unsigned char pad[0x34];
  struct Node_82AD1750 *parent;   /* 0x34 */
  struct Node_82AD1750 *child;    /* 0x38 */
  struct Node_82AD1750 *sibling;  /* 0x3c */
} Node_82AD1750;

typedef struct Iter_82AD1750 {
  Node_82AD1750 *root;  /* 0x0 */
  Node_82AD1750 *cur;   /* 0x4 */
} Iter_82AD1750;

Node_82AD1750 *fn_82AD1750(Iter_82AD1750 *it)
{
  Node_82AD1750 *cur;
  Node_82AD1750 *w;
  Node_82AD1750 *n;

  cur = it->cur;
  if (cur != 0) {
    n = cur->child;
    w = cur;
    if (n == 0) {
      do {
        for (;;) {
          if (w == it->root) {
            n = 0;
            goto done;
          }
          n = w->sibling;
          if (n != 0)
            break;
          w = w->parent;
        }
        w = n;
        n = n->child;
      } while (n == 0);
    }
done:
    it->cur = n;
  }
  return cur;
}
