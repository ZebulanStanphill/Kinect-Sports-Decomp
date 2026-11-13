typedef struct Node_82E91590 { struct Node_82E91590 *next; int value; } Node_82E91590;
typedef struct List_82E91590 { Node_82E91590 *head; int pad[3]; int count; } List_82E91590;
int fn_82E91590(List_82E91590 *l, int *out, int idx)
{
  if (out != 0 && idx < l->count) {
    Node_82E91590 *n;
    int i;
    if (idx == -1) idx = l->count - 1;
    n = l->head;
    for (i = 0; i < idx; i++) n = n->next;
    *out = n->value;
    return 1;
  }
  return 0;
}
