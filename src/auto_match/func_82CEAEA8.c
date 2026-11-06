typedef struct Node_82CEAEA8 { int p0; struct Node_82CEAEA8 *next; int p8[4]; int base; int cnt; } Node_82CEAEA8;
int fn_82CEAEA8(Node_82CEAEA8 *n, int total)
{
  int sum;
  int v;
  Node_82CEAEA8 *c;
  sum = n->cnt;
  for (c = n->next; c != 0; c = c->next) {
    sum = c->cnt + sum;
  }
  c = n;
  v = total - sum;
  do {
    v = c->cnt + v;
    if (v >= 0) {
      return v * 24 + c->base;
    }
    c = c->next;
  } while (c != 0);
  return n->base;
}
