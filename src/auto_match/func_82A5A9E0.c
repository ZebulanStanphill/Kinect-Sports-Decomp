typedef struct Node {
  int value;
  struct Node *prev;
  struct Node *next;
} Node;

typedef struct List {
  char pad[0xd0];
  Node *head;
  int count;
} List;

extern Node *fn_82A5A1F8(List *l);
extern void fn_82A5A8E0(List *l, int v);

void fn_82A5A9E0(List *l, Node *where, int v)
{
  Node *n;

  if (where == 0) {
    fn_82A5A8E0(l, v);
  }
  else {
    n = fn_82A5A1F8(l);
    if (n != 0) {
      n->value = v;
      n->next = where;
      n->prev = where->prev;
      if (where->prev != 0) {
        where->prev->next = n;
      }
      else {
        l->head = n;
      }
      where->prev = n;
      l->count++;
    }
  }
}
