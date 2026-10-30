typedef struct N_82822470 N_82822470;
struct N_82822470 {
  N_82822470 *prev;
  N_82822470 *next;
};

void fn_82822470(N_82822470 *head, N_82822470 *node, int (*cmp)(N_82822470 *, N_82822470 *, int), int arg)
{
  N_82822470 *p;
  N_82822470 *nx;
  N_82822470 *after;

  N_82822470 *h = head;
  p = h->prev;
  while (p != 0) {
    h = p;
    p = p->prev;
  }
  head = h;
  p = head->next;
  if (p != 0) {
    nx = p->next;
    head = p;
    while (cmp(head, node, arg) <= 0) {
      if (nx == 0) goto done;
      head = nx;
      nx = nx->next;
    }
    head = head->prev;
  }
done:
  after = head->next;
  head->next = node;
  node->prev = head;
  node->next = after;
  if (after != 0) {
    after->prev = node;
  }
}
