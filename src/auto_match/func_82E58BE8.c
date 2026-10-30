typedef struct Node_82E58BE8 { unsigned int val; struct Node_82E58BE8 *next; unsigned int pad; } Node_82E58BE8;
typedef struct Pool_82E58BE8 {
  Node_82E58BE8 *freelist;
  int pad[0x37];
  Node_82E58BE8 *head;
  Node_82E58BE8 *tail;
  int count;
} Pool_82E58BE8;

int fn_82E58BE8(Pool_82E58BE8 *p, unsigned int *out)
{
  Node_82E58BE8 *n;
  Node_82E58BE8 *nx;
  int c;

  if (out != 0 && (n = p->head) != 0) {
    *out = n->val;
    nx = n->next;
    p->head = nx;
    if (nx != 0) {
      nx->pad = 0;
    } else {
      p->tail = 0;
    }
    n->next = p->freelist;
    p->count--;
    p->freelist = n;
    return 1;
  }
  return 0;
}
