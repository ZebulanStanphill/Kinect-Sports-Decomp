typedef struct Node_82CEAD30 { int pad0; struct Node_82CEAD30 *next; int pad8, padc; int base; int count; } Node_82CEAD30;
unsigned int fn_82CEAD30(Node_82CEAD30 *head, int idx)
{
  Node_82CEAD30 *n;
  int total = head->count;
  int v;
  for (n = head->next; n != 0; n = n->next) total = n->count + total;
  n = head;

  v = idx - total;
  do {
    v = n->count + v;
    if (v >= 0) return (unsigned int)(v + v * 4) * 4 + n->base;
    n = n->next;
  } while (n != 0);
  return head->base;
}
