typedef struct N N; struct N { int a; N *prev; N *next; };
N *fn_82C064F0(N *n, N **head)
{
  if (*head != 0) {
    if (n == *head) *head = n != n->next ? n->next : 0;
    n->prev->next = n->next;
    n->next->prev = n->prev;
  }
  n->prev = n;
  n->next = n;
  return *head;
}
