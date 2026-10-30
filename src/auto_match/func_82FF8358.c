typedef struct Node_82FF8358 { struct Node_82FF8358 *next; int v[3]; } Node_82FF8358;
typedef struct Pool_82FF8358 { Node_82FF8358 *head; Node_82FF8358 *tail; Node_82FF8358 *free_; int pad[2]; int count; } Pool_82FF8358;
extern unsigned char fn_82FF7F18(Pool_82FF8358 *);
int *fn_82FF8358(Pool_82FF8358 *p, int *src)
{
  Node_82FF8358 *n;
  if (fn_82FF7F18(p) != 0) {
    if (p->tail == 0) {
      p->head = p->free_;
    } else {
      p->tail->next = p->free_;
    }
    p->tail = p->free_;
    p->free_ = p->tail->next;
    p->tail->next = 0;
    p->count = p->count + 1;
    n = p->tail;
    n->v[0] = src[0]; n->v[1] = src[1]; n->v[2] = src[2];
    return n->v;
  }
  return 0;
}
