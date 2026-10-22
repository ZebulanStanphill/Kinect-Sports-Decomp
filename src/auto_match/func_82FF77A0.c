typedef struct Node { struct Node *next; unsigned int a; unsigned int b; } Node;
typedef struct { char pad[0x30]; Node *head; } Obj;

extern void fn_82FF7FB8(Node **head, Node *n, Node *prev);

int fn_82FF77A0(Obj *self, unsigned int a, unsigned int b)
{
  Node **head = &self->head;
  Node *prev = 0;
  Node *n;

  for (n = *head; n != 0; n = n->next) {
    if (n->a == a && n->b == b) {
      fn_82FF7FB8(head, n, prev);
      return 1;
    }
    prev = n;
  }
  return 1;
}
