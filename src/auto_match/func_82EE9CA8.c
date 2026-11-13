typedef struct Node_82EE9CA8 { int pad[2]; struct Node_82EE9CA8 *next; } Node_82EE9CA8;
extern void *fn_82A2A360(void);
extern Node_82EE9CA8 *fn_82A28568(void *, int, int);
Node_82EE9CA8 *fn_82EE9CA8(Node_82EE9CA8 **head)
{
  Node_82EE9CA8 *r;
  Node_82EE9CA8 *n = *head;
  if (n != 0) { *head = n->next; r = n; }
  else r = fn_82A28568(fn_82A2A360(), 0, 0x30);
  return r;
}
