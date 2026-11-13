typedef int (*Pred_82822510)(void *, int);
typedef struct Node_82822510 {
  struct Node_82822510 *first;
  struct Node_82822510 *next;
} Node_82822510;

void fn_82822510(Node_82822510 *h, Pred_82822510 pred, int arg, Node_82822510 **out)
{
  Node_82822510 *n = h;
  if (h->first == 0) {
    n = h->next;
  }
  *out = 0;
  while (n != 0) {
    if (pred(n, arg) != 0) {
      *out = n;
      return;
    }
    n = n->next;
  }
}
