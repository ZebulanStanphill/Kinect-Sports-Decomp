typedef int (*code)();
typedef struct Node {
  struct Node *next;
  int pad;
  int *obj;
} Node;
typedef struct Link {
  int pad;
  struct Link *next;
} Link;
typedef struct {
  int pad;
  Link *first;
  char pad2[0x28 - 8];
  Node *head;
} M;

void fn_8257CAB8(M *param_1, int param_2)
{
  Link *l;
  Node *n;
  int *o;

  l = param_1->first;
  while (l != 0) {
    o = (int *)((char *)l - 0x38);
    l = l->next;
    (*(code *)(*o + 0x24))(o, param_2);
  }
  for (n = param_1->head->next; n != param_1->head; n = n->next) {
    o = n->obj;
    if (o[2] == 2) {
      (*(code *)(*o + 0x28))(o, param_2);
    }
  }
}
