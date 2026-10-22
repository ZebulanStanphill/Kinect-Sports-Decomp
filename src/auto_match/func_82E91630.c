typedef struct Node {struct Node *next; unsigned value;} Node;
typedef struct List {Node *head,*tail,*free_head,*free_tail; int count;} List;
typedef struct Owner {int count; int pad[2]; List *list;} Owner;
static int List_Insert(List *l, unsigned value, int index) {
  Node *n;
  if (value == 0 || index > l->count) return 0;
  n = l->free_head;
  l->free_head = n->next;
  if (l->free_head == 0) l->free_tail = 0;
  n->value = value;
  if (index == 0) {
    n->next = l->head;
    l->head = n;
    if (l->tail == 0) l->tail = n;
  } else if (index == -1) {
    n->next = 0;
    l->tail = n;
    if (l->head == 0) l->head = n;
  } else {
    Node *prev = l->head;
    int i;
    for (i = index - 1; i > 0; i--) prev = prev->next;
    n->next = prev->next;
    prev->next = n;
    if (n->next == 0) l->tail = n;
  }
  l->count++;
  return 1;
}
int fn_82E91630(Owner *p,unsigned value) {
 if (!List_Insert(p->list, value, 0)) return -100;
 p->count++;
 return 0;
}
